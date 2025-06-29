#include <stdio.h>

// Define function here
char *classifyStability(int strength, int frequency) {
    if (strength > 70 && frequency < 300) {
        return "Echo";
    } else if (strength < 40 && frequency >= 400 && frequency <= 800) {
        return "Noise";
    } else if (strength >= 40 && strength <= 70 && frequency > 800) {
        return "Distortion";
    } else {
        return "Unknown";
    }
}

int main() {
    int strength, frequency;
    scanf("%d %d", &strength, &frequency);

    char *result = classifyStability(strength, frequency);
    printf("%s\n", result);
    return 0;
}
