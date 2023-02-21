#include<stdio.h>
#include<string.h>
int main(void) {
     char input[20] ;
     int n=0;
     printf("Enter your name:");
     scanf("%s",input);
      n = strlen(input);
     printf("\nuppercase:");
     for(int i=0;i<n;i++) {
        if(input[i] >= 'a' && input[i] <= 'z') {
            printf("%c",input[i] - 32);
        }

        else {
            printf("%c",input[i]);
        }
     }
     return 0;
}
