# Author: Nasseef Abukamail
#   Date: 2019-06-24
#
# Makefile for the rectangle project
# All commands under the rules must start with a tab

#Variables
CFLAGS = -Wall -std=c++11 
CC = g++
#Linking all the files
#Create the executable program "rectangle-main"
a.out: rectangle-main.o rectangle.o
	$(CC) $(CFLAGS) rectangle.o rectangle-main.o

rectangle.o: rectangle.cc rectangle.h
	$(CC) -c $(CFLAGS) rectangle.cc

rectangle-main.o: rectangle-main.cc rectangle.h
	$(CC) -c $(CFLAGS) rectangle-main.cc

# remove all the object and executable files
clean:
	rm -f rectangle-main.o rectangle.o a.out
