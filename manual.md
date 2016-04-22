### How to use the command line option `-a`
#### batch mode

- Example file used: `raf_network.smv`
- Command for output on the command line: `nusmv -a print raf_network.smv`
- Command for output on the command line, but without counter examples: `nusmv -dcx -a print raf_network.smv`

Generated output:
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