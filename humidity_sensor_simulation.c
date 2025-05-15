// Author: Mithila Gubba
// Project: C simulation of MEMS-based capacitive humidity sensor using polymer materials

#include <stdio.h>

#define MATERIALS 4
#define LEVELS 11 

const char* materials[MATERIALS] = {"Polyimide", "PMMA", "PVA", "Nafion"};
const float permittivities[MATERIALS] = {3.4, 2.6, 7.0, 6.5};
const float initial_capacitance = 1e-12; // Base capacitance in Farads

float calculate_capacitance(float epsilon_r, int humidity_percent) {
    float alpha = 0.01f * epsilon_r;
    return initial_capacitance * (1 + alpha * humidity_percent / 100.0f);
}

int main() {
    printf("MEMS-Based Capacitive Humidity Sensor Simulation\n");
    printf("------------------------------------------------\n");

    for (int m = 0; m < MATERIALS; m++) {
        printf("\nMaterial: %s\n", materials[m]);
        printf("Humidity (%%)\tCapacitance (pF)\n");

        for (int h = 0; h <= 100; h += 10) {
            float capacitance = calculate_capacitance(permittivities[m], h);
            printf("%3d\t\t%.3e\n", h, capacitance * 1e12); // Convert F to pF
        }
    }

    return 0;
}
