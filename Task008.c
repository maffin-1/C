#include <stdio.h>

void main() 
{
    int sum = 0;
    char x='n', y='n', z='n', b='n';

    printf("Here is a small Questionary for you:\n");

    printf("Are you a Close Friend to Bride and Groom? (y/n): ");
    scanf("%2c", &x);
    
    printf("Are you a Relative for Bride or Groom? (y/n): ");
    scanf("%2c", &y);
    
    printf("Do you know Bride or Groom more than 3 years? (y/n): ");
    scanf("%2c", &z);

    printf("Will Road to wedding take more than 1 hour? (y/n): ");
    scanf("%2c", &b);

    sum = 0;
    if (x == 'y') sum += 500;
    if (y == 'y') sum += 1000;
    else if (x == 'n') sum += 250;
    if (z == 'y' && x != 'y') sum +=50;
    if (b == 'y' && x != 'y') sum -= 50;
    printf("check for %d nis\n", sum); 
}