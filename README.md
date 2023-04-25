<!-- @format -->

# **LeCar Shop**

### **Overview**

LeCar Shop is a simple command-line application that allows users to browse and view pricing information for various vehicles, including cars, motorcycles, and airplanes. This README file provides an overview of the code structure and some of the key functions in the program.

### **Code Structure**

The code is organized into several classes and files:

- `Variables.h`: Contains the `MAINVAR` class which holds global variables and their default values.
- `Functions.h`: Contains the `FUNCTIONS` class, which provides utility functions.
  - `ETC_FUNC`: Contains various utility functions such as `clearScreen()`, `GoToSleep()`, and error handling.
- `MainStrings.h`: Contains the `STREAM_STRING` class, which is used to show most of the menus.
- `MainSwitch.h`: Contains the `MAIN_SWITCH` class, which is responsible for executing the correct function based on the user's input.
- `MainMenus.h`: Contains the `MAIN_MENUS` class, which provides the main menu functions for each vehicle type (`CarMenu`, `MotorcycleMenu`, and `AirplaneMenu`).

The `main()` function serves as the entry point for the program and initializes the required objects. It provides a menu for the user to select a vehicle type and then calls the appropriate menu function based on the user's input.

### **Key Functions**

_Be aware that some functions are not showed in here._

- #### **clearScreen()**

  This function clears the console screen. It works on both Windows and Linux platforms.

- #### **GoToSleep()**

  This function pauses the program for 3 seconds before resuming. It works on both Windows and Linux platforms.

- #### **clearFinalData()**

  This function resets the final data variables (`finalValueFixed`, `enableFunction`, and `ReadSwitchValue`) to their default values.

- #### **FixSimpleValue()**

  This function takes a string input, removes any non-digit characters, and returns the cleaned value as a `double`.

- #### **continueFunction()**

  This function takes a string input, converts it to lowercase, and checks if the `confirmationMap` contains a value of 1 for the input. If it does, the transaction is started, and the `enableFunction` variable is set to `true`.

- #### **CalculatePrice()**

  This function takes three `double` inputs (`x`, `y`, `inputPrice`) and checks if the `inputPrice` is within the range of `x` and `y`. If it is, the function returns 1; otherwise, it returns 0.

- #### **CarMenu(), MotorcycleMenu(), and AirplaneMenu()**
  These functions display the respective vehicle menus for the user to choose from. They also call the `EXECUTE_SWITCH` function to handle user input.

### **Usage**

To use the LeCar Shop application, simply compile and run `LeCar.cpp`. The application will display a menu with options to browse cars, motorcycles, and airplanes. Select the desired vehicle type, and the program will display a list of available vehicles.
**Disclaimer**: If you are using Visual Studio Code, I have provided the `tasks.json` file, please reffer to the `readme.md` file within the `.vscode` folder.
