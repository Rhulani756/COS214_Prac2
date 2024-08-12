ofiles = Main.o Boatman.o BoatmanFactory.o CareTaker.o Infantry.o InfantryFactory.o Memento.o ShieldBearer.o ShieldBearerFactory.o Soldiers.o SoldierFactory.o
gpp_o = g++ -c

all: $(ofiles)
	g++ $(ofiles) -o Main

Main.o: Main.cpp 
	$(gpp_o) Main.cpp

Boatman.o: Boatman.cpp Boatman.h Soldiers.h
	$(gpp_o) Boatman.cpp

BoatmanFactory.o: BoatmanFactory.cpp BoatmanFactory.h
	$(gpp_o) BoatmanFactory.cpp

CareTaker.o: CareTaker.cpp CareTaker.h
	$(gpp_o) CareTaker.cpp

Infantry.o: Infantry.cpp Infantry.h
	$(gpp_o) Infantry.cpp

InfantryFactory.o: InfantryFactory.cpp InfantryFactory.h
	$(gpp_o) InfantryFactory.cpp

Memento.o: Memento.cpp Memento.h
	$(gpp_o) Memento.cpp

ShieldBearer.o: ShieldBearer.cpp ShieldBearer.h 
	$(gpp_o) ShieldBearer.cpp

ShieldBearerFactory.o: ShieldBearerFactory.cpp ShieldBearerFactory.h 
	$(gpp_o) ShieldBearerFactory.cpp

SoldierFactory.o: SoldierFactory.cpp SoldierFactory.h 
	$(gpp_o) SoldierFactory.cpp

Soldiers.o: Soldiers.cpp Soldiers.h 
	$(gpp_o) Soldiers.cpp


run: Main
	./Main

clean:
	rm -f *.o *.gcda *.gcno *.gcov *.gz *.json Main

valgrind:
	make 
	valgrind --leak-check=full -s ./Main

coverage: clean
	g++ --coverage *.cpp -o Main
	./Main
	gcov -f -m -r -j Main-Main Main-Boatman Main-BoatmanFactory Main-CareTaker Main-Infantry Main-InfantryFactory Main-Memento Main-ShieldBearer Main-ShieldBearerFactory Main-Soldiers Main-SoldierFactory 
