from pygraphviz import *

G=AGraph("demo.dot")
# B=G.acyclic(copy=True)
print(G)
G.layout('dot') # layout with default (neato)
G.draw('file.png')