#include <stdio.h>

int main() {
  float dist, speed, time, ms;
  int hr, min, sec;

  printf("Enter the distance (km): ");
  scanf("%f", &dist);

  printf("Enter speed (km/hr): ");
  scanf("%f", &speed);

  time = dist / speed;

  // break into hr, min and sec
  hr = (int)time;
  ms = (time - hr) * 60;
  min = (int)ms;
  sec = (int)((ms - min) * 60);

  printf("Time taken to reach Point B from Point A: %d hr, %d min, %d sec\n",
         hr, min, sec);
}
