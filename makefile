main: stackEmpty.o queueEmpty.o initStack.o initQueue.o push.o pop.o add.o remove.o displayStack.o displayQueue.o main.o
	gcc -o main stackEmpty.o queueEmpty.o initStack.o initQueue.o push.o pop.o add.o remove.o displayStack.o displayQueue.o main.o
stackEmpty.o: stackEmpty.c main.h
	gcc -c stackEmpty.c
queueEmpty.o: queueEmpty.c main.h
	gcc -c queueEmpty.c
initStack.o: initStack.c main.h
	gcc -c initStack.c
initQueue.o: initQueue.c main.h
	gcc -c initQueue.c
push.o: push.c main.h
	gcc -c push.c
pop.o: pop.c main.h
	gcc -c pop.c
add.o: add.c main.h
	gcc -c add.c
remove.o: remove.c main.h
	gcc -c remove.c
displayStack.o: displayStack.c main.h
	gcc -c displayStack.c
displayQueue.o: displayQueue.c main.h
	gcc -c displayQueue.c
main.o: main.c main.h
	gcc -c main.c
clean:
	rm main stackEmpty.o queueEmpty.o initStack.o initQueue.o push.o pop.o add.o remove.o displayStack.o displayQueue.o main.o

