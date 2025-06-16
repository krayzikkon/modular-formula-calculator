# Compiler settings
CXX = g++ # We use the g++ compiler
CXXFLAGS = -Wall -Wextra -std=c++11 -g # Flags: all warnings, C++11 standard, debug information

# File names
TARGET = calculator # Executable file name
SOURCES = main.cpp calculate_a.cpp calculate_b.cpp # Source files
OBJECTS = $(SOURCES:.cpp=.o) # Object files (same names, but .o instead of .cpp)

# The main purpose of the assembly
all: $(TARGET)

# Executable file assembly rule
$(TARGET): $(OBJECTS)
	$(CXX) $(CXXFLAGS) -o $@ $^ # Link all object files into one executable file

# Rule for compiling .cpp files to .o
%.o: %.cpp
	$(CXX) $(CXXFLAGS) -c $< -o $@ # Compile each .cpp into an .o

# Cleanup - delete all generated files
clean:
	rm -f $(OBJECTS) $(TARGET)

# Specify that all and clean are not real files.
.PHONY: all clean
