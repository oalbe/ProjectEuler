# Compile and assemble without linking the utils files and the Triplet class
g++	-std=c++11 -Wall utils.cpp -c -o utils.o
g++	-std=c++11 -Wall Triplet.cpp -c -o Triplet.o

# Compile, assemble and link the special_pythagorean_triplet.cpp file with the two 
# object file just generated into a single executable
g++ -std=c++11 utils.o Triplet.o special_pythagorean_triplet.cpp -o special_pythagorean_triplet.exe

# Remove the now useless object files
rm utils.o Triplet.o