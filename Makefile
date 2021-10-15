all: sudoku_to_print clean

sudoku_to_print: sudokuToPrint.o
	gcc -o sudoku_to_print sudokuToPrint.o -lstdc++

sudokuToPrint.o: sudokuToPrint.cpp
	gcc -o sudokuToPrint.o -c sudokuToPrint.cpp

clean:
	rm sudokuToPrint.o
