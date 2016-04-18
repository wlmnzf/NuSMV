

#### step1.r

Ist eine `Rscript` Datei, die in dem Loop für `n=5` bis `n=20` Zufallsnetzwerke erzeugt und unter den Dateinamen

```
randomnet_n001.bnet
randomnet_n002.bnet
...
randomnet_n020.bnet
```

speichert. Dazu müßt ihr die `R` library `BoolNet` installieren:

```
$ sudo R
> install.packages("BoolNet")
```

#### step2.py

Ist ein Python script, das für jede `<name>.bnet` Datei eine entsprechende `<name>.smv` Datei erzeugt.
Für jeden Attraktor wird dabei eine CTL Formel erzeugt und jeder state ist initial (`INIT TRUE`).


#### step3.sh

Ist ein bash script, das NuSMV für jede `<name>.smv` Datei mit der Option `-dcx` (schaltet teure Berechnung von Gegenbeispielen aus) und `-a <name>.out` aufruft.

