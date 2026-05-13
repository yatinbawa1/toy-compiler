# Variables
CXX      := clang++
CXXFLAGS := -std=c++17 -Wall -Wextra -I./include -I./src
TARGET   := my_program

# File lists
SRCS := src/Util/Util.cpp src/Lexer/Token/Token.cpp src/main.cpp
# This takes the SRCS list and replaces 'src/' with 'obj/' and '.cpp' with '.o'
OBJS := $(SRCS:src/%.cpp=obj/%.o)

# Default rule
all: $(TARGET)

# Link the executable
$(TARGET): $(OBJS)
	$(CXX) $(CXXFLAGS) -o $@ $^

# Rule to compile .cpp files into .o files
# This is a Static Pattern Rule
$(OBJS): obj/%.o: src/%.cpp
	@mkdir -p $(dir $@)
	$(CXX) $(CXXFLAGS) -c $< -o $@

# Clean up build artifacts
clean:
	rm -rf obj/ $(TARGET)

.PHONY: all clean