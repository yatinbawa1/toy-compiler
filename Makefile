# Variables
CXX      := clang++
CXXFLAGS := -std=c++17 -Wall -Wextra -I./include -I./src
TARGET   := my_program

# --- THE DYNAMIC PART ---
# Use 'find' to get all .cpp files in src and its subfolders
SRCS := $(shell find src -name '*.cpp')

# This takes the SRCS list and replaces 'src/' with 'obj/' and '.cpp' with '.o'
# It preserves the folder structure inside the obj/ directory
OBJS := $(SRCS:src/%.cpp=obj/%.o)

# Default rule
all: $(TARGET)

# Link the executable
$(TARGET): $(OBJS)
	$(CXX) $(CXXFLAGS) -o $@ $^

# Rule to compile .cpp files into .o files
# Use a pattern rule to handle the mapping
obj/%.o: src/%.cpp
	@mkdir -p $(dir $@)
	$(CXX) $(CXXFLAGS) -c $< -o $@

# Clean up build artifacts
clean:
	rm -rf obj/ $(TARGET)

.PHONY: all clean