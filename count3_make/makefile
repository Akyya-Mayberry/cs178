# Name: Akyya Mayberry
# Course: CS178 Build Automation for DevOps and QA
# CRN: 76718
# Date: 9/16/2017
# Assignment: Make Build Count3s.c Application

runCount3s: count3s
	./count3s

count3s: countThrees.o readInt32BitLE.o readInt32BitLE.h
	gcc -o count3s countThrees.o readInt32BitLE.o -I .

countThrees.o: countThrees.c readInt32BitLE.h
	gcc -c countThrees.c

readInt32BitLE.o: readInt32BitLE.c readInt32BitLE.h
	gcc -c readInt32BitLE.c

clean:
	rm count3s countThrees.o readInt32BitLE.o
