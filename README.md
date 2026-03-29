# Veichicle Service Manager

A C++ object-oriented console application for managing vehicle ownership and maintenance service records. The project models an owner, their vehicles, and the services performed on each vehicle, following a UML-based design with inheritance and composition.

## Overview

This project was developed as an OOP practical assignment. It simulates a maintenance log for a vehicle collection owner, allowing the registration of cars and motorcycles, the addition of service records, and the listing of both vehicles and services.

The solution is built around a clear class hierarchy:
- `Owner`
- `Vehicle`
- `Car`
- `Motorcycle`
- `Service` 

## Features

- Register an owner.
- Add vehicles to the owner’s collection.
- Support two vehicle types: cars and motorcycles.
- Register services for a specific vehicle by license plate.
- List all vehicles owned.
- List all services performed.
- Compute the total cost of all services.

## Class Design

The project follows a UML design where:
- `Owner` aggregates multiple `Vehicle` objects.
- `Vehicle` contains a collection of `Service` objects.
- `Car` and `Motorcycle` inherit from `Vehicle`.
- `Service` stores the maintenance details for each intervention.

This structure matches the assignment requirements and demonstrates inheritance, composition, and collection management in C++.

## Technologies Used

- C++.
- Visual Studio console application.
- Custom collection template `Colecao`.
- UML class modeling.

## Project Structure

```text
├── main.cpp
├── Owner.h / Owner.cpp
├── Vehicle.h / Vehicle.cpp
├── Car.h / Car.cpp
├── Motorcycle.h / Motorcycle.cpp
├── Service.h / Service.cpp
├── Colecao.h
└── diagramaDeClasses.jpg

