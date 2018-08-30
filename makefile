hello: main.o
	g++ -o hello main.o 

main.o : main.cpp
	g++ -c main.cpp 

clean:
	rm hello main.o -rf

PHONY : clean
clean :
	@rm -f main *.o
	@echo 'clean'
