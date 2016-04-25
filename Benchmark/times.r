times <- read.table("times.txt", header=TRUE)
n <- times$n
t <- times$systemtime
t

plot(x=n, y=t, type="l", col="blue", xlab="Number of nodes in the network", ylab="System time (seconds)")

