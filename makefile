graficadev.png : datos.txt graficap.py
	python graficap.py
datos.txt: dife
	./dife > datos.txt
dife: dif.cpp
	c++ dif.cpp -o dife
