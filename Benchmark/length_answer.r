n <- seq(from=5,to=30,by=1)
add <- function(x) Reduce("+", x)

acc <- scan("states_accepting.txt", what="", sep="\n")
init <- scan("states_init.txt", what="", sep="\n")

for(i in 1: length(acc)){
  acc[i] <- nchar(substr(acc[i], 46, nchar(acc[i])))
  init[i] <- nchar(substr(init[i], 46, nchar(init[i])))
}

acc <- as.numeric(acc)
init <- as.numeric(init)

spl <- seq_along(acc)
answer_acc <- split(acc, ceiling(spl/26) )
len <- length(answer_acc)
#add(answer_acc)
accepting <- add(answer_acc) / len
#accepting

spl <- seq_along(init)
answer_init <- split(init, ceiling(spl/26))
initaccepting <- add(answer_init) / len

plot(x=n, y=accepting, type="l", col="blue", xlab="Number of input variables", ylab="Complexity of output formula", main="Average length of output formula
     for accepting and initial and accepting states")
points(x=n, y=initaccepting, type="l", col="red")
legend("topleft", col=c("blue","red"),lwd=1,legend=c("accepting states","initial and accepting states"))
