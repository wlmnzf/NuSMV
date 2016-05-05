# Die vorbereitete Datei als CSV durch ";" separiert einlesen und die Spalten-/Attributnamen hinzufuegen
basins_info <- read.csv('preparedOutput.txt', header=FALSE, sep = ";")
colnames(basins_info) <- c("CTLSPEC", "INIT", "INIT_SIZE", "ACCEPTING", "ACCEPTING_SIZE", "INITACCEPTING", "INITACCEPTING_SIZE", "ANSWER")

# Im subset_table sind werden die CTLSPECs den entsprechenden Teilmengen zugeordnet
subset_table <- read.table('subset_table.txt', header=FALSE)
subset_table <- subset_table[-1,]
number_of_basins <- log2(length(basins_info$CTLSPEC))

basins_info
subset_basins <- subset(basins_info, grepl("TRUE", basins_info$ANSWER)>0)
subset_basins

split.screen(c(ceiling(number_of_basins/3), number_of_basins))
for (i in 1:number_of_basins){
  screen(i)
  set_of_subset <- which(subset_table[i]=="1")
  pie_slices <- basins_info$ACCEPTING_SIZE[set_of_subset]
  pie_names <- set_of_subset
  pie_names2 <- basins_info$ACCEPTING[set_of_subset] 
  pie(pie_slices, labels = pie_names)
}

