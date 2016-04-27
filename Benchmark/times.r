times <- read.table("timeout.txt", header=TRUE)
n <- seq(from=5,to=30,by=1)

add <- function(x) Reduce("+", x)

# get system time and split into different vectors
s0 <- times$system
spl <- seq_along(s0)
s1 <- split(s0, ceiling(spl/26))
# get sum of vectors
sys <- add(s1)

# get user time and split into different vectors
u0 <- times$user
spli <- seq_along(u0)
u1 <- split(u0, ceiling(spl/26))
user <- add(u1)

len <- length(s1)

t = (sys+user) / len

plot(x=n, y=t, type="l", col="blue", xlab="Number of nodes in the network", ylab="System + user time (seconds)")

