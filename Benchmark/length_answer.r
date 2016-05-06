n <- seq(from=5,to=30,by=1)
add <- function(x) Reduce("+", x)

acc <- scan("states_accepting.txt", what="", sep="\n")

for(i in 1: length(acc)){
  acc[i] <- nchar(substr(acc[i], 46, nchar(acc[i])))
}
acc <- as.numeric(acc)

spl <- seq_along(acc)
answer_acc <- split(acc, ceiling(spl/26) )
len <- length(answer_acc)
accepting <- add(answer_acc) / len

plot(x=n, y=accepting, type="l", col="blue", xlab="Number of input variables", ylab="Complexity of output formula", main="Average length of 
output formula for accepting states")

