TestRule: ./crc/main.cpp
	g++ ./crc/main.cpp ./crc/definitions.cpp ./include/declarations.h ./include/shape.h ./include/point.h ./include/line.h ./include/triangle.h -o ./bin/program.exe