# Trench Coat Management Application

## Overview
This is a C++ desktop application developed using the Qt framework.  
The application follows a layered architecture and allows managing and browsing a collection of trench coats through a graphical user interface.

## Architecture
The project is structured using:
- Domain layer (entities)
- Repository layer (file-based persistence)
- Service layer (business logic)
- Presentation layer (Qt GUI)

This separation ensures modularity, maintainability and clear responsibility boundaries.

## Technologies Used
- C++
- Qt (GUI development, layouts without Qt Designer)
- CMake
- CLion
- Git

## Functionalities

### Administrator Mode
- Add, remove and update trench coats
- Validate input data
- Load and save data from/to file

### User Mode
- Browse trench coats
- Filter by size
- Add items to shopping basket
- View basket contents and total price

## Data Persistence
All data is stored in a text file (`trenchcoats.txt`) and loaded at application startup.

## Additional Features
- Dynamic GUI built programmatically using Qt layouts
- Optional graphical data representation (bar chart / pie chart)
