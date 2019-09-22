
hw3_3: array_2dim.o touch_points.o cal_complex.o
	g++ -o array_2dim array_2dim.o
	g++ -o touch_points touch_points.o
	g++ -o cal_complex cal_complex.o
array_2dim.o : array_2dim.cpp
	g++ -c array_2dim.cpp
touch_points.o : touch_points.cpp
	g++ -c touch_points.cpp
cal_complex.o : cal_complex.cpp
	g++ -c cal_complex.cpp
clean:
	rm array_2dim.o touch_points.o cal_complex.o
