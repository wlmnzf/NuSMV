### How to use the command line option `-a`
#### batch mode

- Example file used: `raf_network.smv`
- Command for output on the command line: `nusmv -a print raf_network.smv`
- Command for output on the command line, but without counter examples: `nusmv -dcx -a print raf_network.smv`
- Generated output:

```
-- specification (EF ((!Erk & !Mek) & Raf) & EF ((Erk & Mek) & Raf))  is false

initial states: TRUE
number of initial states: 8
accepting states: !(Erk & (Mek) | !Erk & ((Raf) | !Mek))
number of accepting states: 3
initial and accepting States: !(Erk & (Mek) | !Erk & ((Raf) | !Mek))
number of initial and accepting states: 3

-- specification (!(EF ((!Erk & !Mek) & Raf)) & EF ((Erk & Mek) & Raf))  is false

initial states: TRUE
number of initial states: 8
accepting states: Erk & (Mek) | !Erk & (Mek & (Raf))
number of accepting states: 3
initial and accepting States: Erk & (Mek) | !Erk & (Mek & (Raf))
number of initial and accepting states: 3

-- specification (EF ((!Erk & !Mek) & Raf) & !(EF ((Erk & Mek) & Raf)))  is false

initial states: TRUE
number of initial states: 8
accepting states: !(Erk | (Mek))
number of accepting states: 2
initial and accepting States: !(Erk | (Mek))
number of initial and accepting states: 2

```

- Command for output into the file `output.txt`: `nusmv -a output.txt raf_network.smv`
- Generated output:

```
CTLSPEC:              (EF ((!Erk & !Mek) & Raf) & EF ((Erk & Mek) & Raf))
INIT:                 TRUE
INIT_SIZE:            8
ACCEPTING:            !(Erk & (Mek) | !Erk & ((Raf) | !Mek))
ACCEPTING_SIZE:       3
INITACCEPTING:        !(Erk & (Mek) | !Erk & ((Raf) | !Mek))
INITACCEPTING_SIZE:   3
ANSWER:               FALSE

CTLSPEC:              (!(EF ((!Erk & !Mek) & Raf)) & EF ((Erk & Mek) & Raf))
INIT:                 TRUE
INIT_SIZE:            8
ACCEPTING:            Erk & (Mek) | !Erk & (Mek & (Raf))
ACCEPTING_SIZE:       3
INITACCEPTING:        Erk & (Mek) | !Erk & (Mek & (Raf))
INITACCEPTING_SIZE:   3
ANSWER:               FALSE

CTLSPEC:              (EF ((!Erk & !Mek) & Raf) & !(EF ((Erk & Mek) & Raf)))
INIT:                 TRUE
INIT_SIZE:            8
ACCEPTING:            !(Erk | (Mek))
ACCEPTING_SIZE:       2
INITACCEPTING:        !(Erk | (Mek))
INITACCEPTING_SIZE:   2
ANSWER:               FALSE

```
