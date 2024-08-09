cmake_minimum_required(VERSION 3.26)
project(Prac_2)

set(CMAKE_CXX_STANDARD 14)

include_directories(.)

add_executable(Prac_2
        Boatman.cpp
        Boatman.h
        BoatmanFactory.cpp
        BoatmanFactory.h
        Infantry.cpp
        Infantry.h
        InfantryFactory.cpp
        InfantryFactory.h
        ShieldBearer.cpp
        ShieldBearer.h
        ShieldBearerFactory.cpp
        ShieldBearerFactory.h
        SoldierFactory.cpp
        SoldierFactory.h
        Soldiers.cpp
        Soldiers.h
        Memento.cpp
        Memento.h
        CareTaker.cpp
        CareTaker.h
        TestingMain.cpp
        DemoMain.cpp

)
