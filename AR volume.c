#include <stdio.h>

int main() {
   float volume;
   int radius;
//   radius=20;
printf("Inter Redius :");
scanf("%d", &radius);
   volume=((4.0/3.0) * (3.1415) * radius * radius * radius);

printf("%.2f", volume);

    return 0;
}
