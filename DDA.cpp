#include <stdio.h>
#include <math.h>

void drawLineDDA(int x1, int y1, int x2, int y2) {
    int dx = x2 - x1;
    int dy = y2 - y1;
    int steps;
    float xIncrement, yIncrement, x = x1, y = y1;

    if (abs(dx) > abs(dy)) {
        steps = abs(dx);
    } else {
        steps = abs(dy);
    }

    xIncrement = (float)dx / (float)steps;
    yIncrement = (float)dy / (float)steps;

    printf("Drawing line using DDA algorithm:\n");
    printf("(%d, %d) -> ", x1, y1);

    for (int i = 0; i < steps; i++) {
        x += xIncrement;
        y += yIncrement;
        printf("(%.2f, %.2f) -> ", x, y);
    }

    printf("(%d, %d)\n", x2, y2);
}

int main() {
    int x1, y1, x2, y2;
    
    printf("Enter coordinates of starting point (x1 y1): ");
    scanf("%d %d", &x1, &y1);

    printf("Enter coordinates of ending point (x2 y2): ");
    scanf("%d %d", &x2, &y2);

    drawLineDDA(x1, y1, x2, y2);

    return 0;
}
