if(NOT EXISTS "/home/william/NuSMV-a/NuSMV-2.6.0/NuSMV/build/install_manifest.txt")
  message(FATAL_ERROR "Cannot find install manifest: /home/william/NuSMV-a/NuSMV-2.6.0/NuSMV/build/install_manifest.txt")
endif()

file(READ "/home/william/NuSMV-a/NuSMV-2.6.0/NuSMV/build/install_manifest.txt" files)
string(REGEX REPLACE "\n" ";" files "${files}")
set(alldirs)
foreach(file ${files})
  message(STATUS "Uninstalling $ENV{DESTDIR}${file}")
  if(IS_SYMLINK "$ENV{DESTDIR}${file}" OR EXISTS "$ENV{DESTDIR}${file}")
    execute_process(
      COMMAND /usr/bin/cmake -E remove "$ENV{DESTDIR}${file}"
      OUTPUT_VARIABLE rm_out
      RESULT_VARIABLE rm_retval
      )
    if(NOT ${rm_retval} EQUAL 0)
      message(FATAL_ERROR "Problem when removing $ENV{DESTDIR}${file}")
    endif()
    get_filename_component(pth "$ENV{DESTDIR}${file}" PATH)
    while(NOT "${pth}" STREQUAL "$ENV{DESTDIR}")
        set(alldirs ${alldirs} "${pth}")
        get_filename_component(pth "${pth}" PATH)
    endwhile()
  else()
    message(STATUS "File $ENV{DESTDIR}${file} does not exist.")
  endif()
endforeach()

list(REMOVE_DUPLICATES alldirs)
list(SORT alldirs)
list(REVERSE alldirs)

foreach(d ${alldirs})
  unset(l)
  file(GLOB l "${d}/*")
  if(NOT l AND IS_DIRECTORY "${d}")
      message(STATUS "Removing empty directory ${d}")
      execute_process(
        COMMAND /usr/bin/cmake -E remove_directory "${d}"
        OUTPUT_VARIABLE rm_out
        RESULT_VARIABLE rm_retval
      )
      if(NOT ${rm_retval} EQUAL 0)
          message(FATAL_ERROR "Problem when removing ${d}")
      endif()
  endif()
endforeach()
