hw13-1: bad_allo.o copy.o chain.o rethrow.o
	g++ -o bad_allo bad_allo.o
	g++ -o copy copy.o
	g++ -o chain chain.o
	g++ -o rethrow rethrow.o
bad_allo.o: bad_allo.cc
	g++ -c bad_allo.cc
copy.o:copy.cc
	g++ -c copy.cc
chain.o:chain.cc
	g++ -c chain.cc
rethrow.o:rethrow.cc
	g++ -c rethrow.cc
clean:
	g++ bad_allo.o copy.o chain.o rethrow.o
