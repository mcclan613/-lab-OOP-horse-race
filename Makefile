CXX = g++
CXXFLAGS = -Wall
TARGET = horse_race

OBJS = main.o horse.o race.o

all: $(TARGET)

$(TARGET): $(OBJS)
	$(CXX) $(CXXFLAGS) $(OBJS) -o $(TARGET)

main.o: main.cpp race.h
	$(CXX) $(CXXFLAGS) -c main.cpp

horse.o: horse.cpp horse.h
	$(CXX) $(CXXFLAGS) -c horse.cpp

race.o: race.cpp race.h horse.h
	$(CXX) $(CXXFLAGS) -c race.cpp

run: $(TARGET)
	./$(TARGET)

debug: CXXFLAGS += -g
debug: clean $(TARGET)

clean:
	rm -f $(OBJS) $(TARGET)

.PHONY: all run debug clean
