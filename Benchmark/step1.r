
library(BoolNet)

for(i in 5:20)
{
   net = generateRandomNKNetwork(n=i,k=3,topology="homogeneous",noIrrelevantGenes=TRUE)
   fnameout = paste("n", formatC(i, width=3, flag="0"), sep="")
   fnameout = paste("randomnet", fnameout, sep="_")
   fnameout = paste(fnameout, "bnet", sep=".")
   saveNetwork(network=net, file=fnameout, generateDNFs="short", saveFixed=TRUE)

}
