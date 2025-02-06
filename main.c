#include <stdio.h>

int main(void) {
  int width = 0;
  int height = 0;
  printf("Enter wall width. (int)\n");
  // Don't care about error handling.
  scanf("%d", &width); // NOLINT(*-err34-c)
  printf("Enter wall height. (int)\n");
  // Don't care about error handling.
  scanf("%d", &height); // NOLINT(*-err34-c)
  const double paintNeeded = (width * height)/250.0;
  printf("Paint needed %0.2lf buckets for wall of %d width and %d height.\n", paintNeeded, width, height);
  printf("Area: %d; Cans: %d;", (width*height), (int) (paintNeeded + 1));

  return 0;
}