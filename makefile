# Specifiy the target
all: restaurant

# Specify the object files that the target depends on
# Also specify the object files needed to create the executable
restaurant: Restaurant.o
	g++ Restaurant.o -o restaurant

# Specify how the object files should be created from source files
Restaurant.o: Restaurant.cpp
	g++ -c Restaurant.cpp

# Specify the object files and executables that are generated
# and need to be removed to re-compile the whole thing
clean:
	rm -f *.o restaurant
