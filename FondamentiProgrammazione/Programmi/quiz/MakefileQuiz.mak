all: libMath

dividi : dividi.o					
	gcc -o elabora elabora.o		

dividi.o : quiz.c
	gcc -c -o elabora.o elabora.c	

install : elabora					
	cp dividi ..
