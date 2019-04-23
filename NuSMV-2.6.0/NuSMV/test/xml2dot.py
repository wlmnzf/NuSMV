#!/usr/bin/env python

import sys
import os

from xml.sax import parse, ContentHandler

class Xml2DotHandler(ContentHandler):
	def __init__(self, html = False):
		self.parent = []
		self.id = 0
		self.html = html
		
	def startDocument(self):
		print("digraph G {")
		print("""
			graph [
				rankdir = TD
			];
			node [
                fontname = "Bitstream Vera Sans"
                fontsize = 8
                shape = "Mrecord"
			];
		""")
	
	def endDocument(self):
		print("}")
	
	def startElement(self, name, attrs):
		node = {"name":"a%d" % (self.id,) ,"attributes":{n: attrs.getValue(n) for n in attrs.getNames()}, "content":""}
		self.parent.append(node)
		self.id += 1
	
	def characters(self, chars):
		self.parent[-1]["content"] += chars
	
	def endElement(self, name):
		node = self.parent.pop()
		node["content"] = node["content"].strip()
		label = ""
		if self.html:
			label += "<<TABLE><TR><TD>"+name+"</TD></TR>"
			if node["attributes"]:
				label += "<TR><TD>"
				label += "<BR/>".join(["%s = %s" % (item[0], item[1]) for item in node["attributes"].items()])
				label += "</TD></TR>"
			if node["content"]:
				label += "<TR><TD>" + node["content"] + "</TD></TR>"
			label += "</TABLE>>"
		else:
			label = "\"{" + name
			if node["attributes"]:
				label += "|"
				label += "\l".join(["%s = %s" % (item[0], item[1]) for item in node["attributes"].items()])
			if node["content"]:
				label += "|" + node["content"]
			label += "}\""
		print("%s [label=%s];" % (node["name"], label))
		if self.parent:
			print("%s -> %s;" % (self.parent[-1]["name"], node["name"]))

doc = parse(sys.argv[1], Xml2DotHandler(html = True))
