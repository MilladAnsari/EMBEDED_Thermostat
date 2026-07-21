# 4-Room Home Heating System: Model-Based Design

This repository contains the complete model-based design, simulation, and implementation of a smart heating system for a 4-room house. The project was developed as part of the "Embedded and Real-Time Systems" course and utilizes **MATLAB, Simulink, Stateflow, and Embedded Coder**.

## 📌 Project Overview
The goal of this project is to model and control a house with 4 rooms, utilizing a maximum of 2 heaters at any given time. The system's core dynamics account for:
- Heat transfer between adjacent rooms.
- Heat loss/gain from the external environment.
- The heating power of active heaters.

The controller dynamically allocates the 2 available heaters across the 4 rooms based on predefined temperature thresholds (ON/OFF limits) and priority logic, ensuring all rooms remain within the desired temperature range (15°C to 20°C).

## 🏗️ System Architecture
The system architecture was implemented in Simulink and consists of three main subsystems:
1. **Rooms (Plant Model):** Calculates the temperature dynamics of the 4 rooms using continuous-time equations.
2. **Thermostat (Controller):** Implemented using **Stateflow**, this module dictates heater allocation and states based on current temperatures.
3. **Safety Checker (Doer-Checker Pattern):** Ensures that safety requirements are met (e.g., preventing more than two heaters from being active simultaneously) before passing commands to the plant.

![Simulink Architecture](docs/Screenshot%20(2122).png)
*Figure 1: High-level Simulink architecture showing the Thermostat, Rooms, and Checker modules.*

## 🧠 Stateflow Controller (Thermostat)
The core logic for heater allocation is built using Stateflow. Because there are 4 rooms and only 2 heaters, the system has $\binom{4}{2} = 6$ primary active states. 

The state machine evaluates temperature differences and thresholds ($on_i$, $off_i$, $get_i$, $dif_i$) to safely and efficiently transition heaters between rooms without violating constraints.

![Stateflow Logic](docs/Screenshot%20(2121).png)
*Figure 2: Stateflow chart demonstrating the 6 primary states and transition logic for heater allocation.*

## 📊 Simulation & Results
The system was simulated with an initial temperature of 16.5°C across all rooms and an external temperature of 6°C. The target was to maintain room temperatures between 15°C and 20°C.

As seen in the simulation output below, the controller successfully regulates the temperatures. When a room drops below its threshold, a heater is reallocated to it, causing the characteristic oscillatory temperature curves within the safe operating envelope.

![Simulation Results](docs/Screenshot%20(2123).png)
*Figure 3: Scope output showing the temperature variations of the 4 rooms over time, remaining within the 15-20°C target range.*

## 💻 Code Generation & Wokwi Simulation
As an optional extension, the system's control logic was generated into C code using **Embedded Coder** and tested on an Arduino framework using the **Wokwi** online simulator. In this pure software simulation, LEDs were utilized to visually represent the active states of the heaters in real-time.

![Wokwi Simulation](docs/Screenshot%20(2124).png)
*Figure 4: Software simulation of the generated C code on an Arduino framework using Wokwi.*

## 📂 Repository Structure
- **`models/`**: Contains the core Simulink models (`.slx`) and requirement files (`.slreqx`).
- **`scripts/`**: MATLAB scripts for initializing parameters (e.g., $A, b, c$ matrices and initial conditions).
- **`tests/`**: Simulink Test cases (`blackboxTest.mldatx`) for automated requirement verification.
- **`docs/`**: Project instructions, final PDF reports, and images used in this README.

---
## 🙌 Creators

This repository is the result of our teamwork:

- 🧑‍💻 [Milad Ansari](https://github.com/MilladAnsari) 
- 👨‍💻 [Sina Samadi](https://github.com/5ina5amadi)
