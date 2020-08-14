#	based on:
#	https://www.oreilly.de/german/freebooks/rlinux3ger/ch133.html
#	https://www.youtube.com/watch?v=GExnnTaBELk
#	https://opensource.com/article/18/8/what-how-makefile
#
#
#
#

cpp_src = $(wildcard cpp_src/*.cpp) $(wildcard *.cpp)  
c_src = $(wildcard c_src/*.c) $(wildcart *.c)

cpp_obj = $(cpp_src:.cpp=.o)
c_obj = $(c_src:.c=.o)

CC = g++ 
CFLAGS = -Wall -pedantic  
LDFLAGS = 
EXEC = prog

all :$(EXEC)
	@echo -n "\e[31m"
	@echo "***********************************"
	@echo -n "\e[93m"
	@echo "Makefile Configs:"
	@echo "	Compiler	: " $(CC)
	@echo "	Compiler Flags	: " $(CFLAGS)
	@echo "	Linker Flags	: " $(LDFLAGS)
	@echo "	Exe Name	: " $(EXEC)	
	@echo -n "\e[31m"
	@echo "***********************************"	

$(EXEC): $(cpp_obj) $(c_obj)
	$(CC) -o $@ $^ $(LDFLAGS)	
 
clean:
	@echo "Cleaning up..."	
	rm -rf $(c_obj) $(cpp_obj) $(EXEC)
	@echo "...done!"
	

cleanall:
	@echo "Cleaning up..."	
	rm -rf $(c_obj) $(cpp_obj) $(EXEC)
	@echo "...done!"

lsdir:
	@echo "Listing all directories..."
	ls -a
	ls -a c_src/
	ls -a cpp_src/
	@echo "...done!"
