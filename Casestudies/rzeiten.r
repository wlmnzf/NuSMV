zeiten <- read.table("timeout.txt", header=TRUE)

zeiten$filename <- as.numeric(zeiten$file)

max_index <- which.max(zeiten$filename)

size <- zeiten$filename[max_index]


ohne_sysmean <- numeric(size)
ohne_usermean <- numeric(size)

mit_sysmean <- numeric(size)
mit_usermean <- numeric(size)

for (i in 1:size){
  filenum <- subset(zeiten, zeiten$filename==i)
  ohne <- subset(filenum, flag=="0")

  ohne_sysmean[i] <- mean(ohne$system)
  ohne_usermean[i] <- mean(ohne$user)

  mit <- subset(filenum, flag=="1")
  
  mit_sysmean[i] <- mean(mit$system)
  mit_usermean[i] <- mean(mit$user)
}
smvs <- unique(zeiten$file)
for (i in 1:size){
  print(smvs[i])
  print(ohne_sysmean[i])
  print(ohne_usermean[i])
  print(mit_sysmean[i])
  print(mit_usermean[i])
  }
