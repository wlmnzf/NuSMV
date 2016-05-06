n <- seq(from=5,to=30,by=1)
add <- function(x) Reduce("+", x)

accepting <- scan("size_accepting.txt", what="", sep="\n")
initaccepting <- scan("size_initaccepting.txt", what="", sep="\n")

for(i in 1: length(accepting)){
  accepting[i] <- substr(accepting[i], 46, nchar(accepting[i]))
  initaccepting[i] <- substr(initaccepting[i], 46, nchar(initaccepting[i]))
}

accepting <- as.numeric(accepting)
initaccepting <- as.numeric(initaccepting)

spl <- seq_along(accepting)
size_acc <- split(accepting, ceiling(spl/26) )
len <- length(size_acc)
accept <- add(size_acc) / len

plot(x=n, y=accept, type="l", col="red", main="Average number of accepting states", xlab="Number of input variables",
     ylab="Number of accepting states")
