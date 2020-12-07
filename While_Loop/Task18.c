#include <stdio.h>
void main()
{
    int age;
    while(1)
    {
        printf("Enter your age: ");
        scanf("%d", &age);
        if(age < 0 || age >= 150)
            printf("There is no such age!\n");
        else if(age > 0 && age < 18)
            continue;
        else if (age > 18 && age < 150 )
        printf("Your age is %d\n", age);

        if(age == 0)break;
    }
}