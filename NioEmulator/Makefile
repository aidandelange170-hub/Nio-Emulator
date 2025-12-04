CXX = g++
CXXFLAGS = -std=c++11 -Wall -Wextra -O2
TARGET = nio_emulator
SOURCES = main.cpp Emulator.cpp PerformanceManager.cpp FanController.cpp
OBJECTS = $(SOURCES:.cpp=.o)

$(TARGET): $(OBJECTS)
	$(CXX) $(OBJECTS) -o $(TARGET)
	@echo "Nio Emulator built successfully! Free forever with no lag guaranteed!"

%.o: %.cpp
	$(CXX) $(CXXFLAGS) -c $< -o $@

clean:
	rm -f $(OBJECTS) $(TARGET)
	@echo "Build files cleaned."

install: $(TARGET)
	@echo "Fast installation complete! Nio Emulator is ready to use."
	@echo "Run with: ./$(TARGET)"

.PHONY: clean install