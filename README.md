# MEMS-Based Capacitive Humidity Sensor Simulation (C Version)

This project simulates a capacitive MEMS humidity sensor using different polymer materials. Written in C, the program models how relative humidity affects the capacitance of the sensor by calculating values for various materials across a range of humidity levels.

## Project Context
Based on research published by Mithila Gubba in IEEE, this simulation replicates a simplified version of real-world MEMS humidity sensor behavior using a mathematical model. Materials simulated include:
- Polyimide
- PMMA
- PVA
- Nafion

## What It Does
- Simulates how sensor capacitance changes with increasing relative humidity (0%–100%)
- Compares capacitance responses of different polymer materials
- Displays output in tabular format

## Applications
- Automotive climate control
- Environmental monitoring
- Medical diagnostics

## How to Run

### Requirements
- C compiler (e.g., GCC)

### Steps

1. Clone or download the code file:
   - `humidity_sensor_simulation.c`

2. Open a terminal and compile the program:
   gcc humidity_sensor_simulation.c -o humidity_sim
