primera: graficadev.png
graficadev.png : datos.txt graficap.py
	python graficap.py
datos.txt: dife
	./dife > datos.txt
dife: dif.cpp
	c++ dif.cpp -o dife
segunda: graxy.png grayz.png
graxy.png : datos2.txt grafica2.py
	python grafica2.py
grayz.png:datos2.txt grafica2.py
	python grafica2.py
datos2.txt : diff2
	./diff2 > datos2.txt
diff2 : dif2.cpp
	c++ dif2.cpp -o dif2
