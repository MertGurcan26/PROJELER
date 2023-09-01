
// Online C Compiler - Build, Compile and Run your C programs online in your favorite browser

#include<stdio.h>
#include<stdbool.h>
int main()
{
int sayi1 , sayi2 , sayi3;
printf("1. sayiyi girin");
scanf("%d" , &sayi1);

printf("2. sayiyi girin");
scanf("%d" , &sayi2);

printf("3. sayiyi girin");
scanf("%d" , &sayi3);

if(sayi1==sayi2 && sayi2==sayi3 && sayi1==sayi3){
    printf("eşkanar üçgendir");
}
    
else if(sayi3!=sayi1 && sayi2!=sayi1 && sayi3!=sayi2 ){
    printf("çeşitkenar üçgendir");
}
else if(sayi3==sayi1 && sayi1!=sayi2 && sayi2!=sayi3 ){
    printf("ikizkenar üçgendir");
}
else if(sayi3!=sayi1 && sayi1==sayi2 && sayi2!=sayi3 ){
    printf("ikizkenar üçgendir");
}
else if(sayi3!=sayi1 && sayi1!=sayi2 && sayi2==sayi3 ){
    printf("ikizkenar üçgendir");
}
else{
    printf("ikizkenar üçgendir");
}
    return 0;
}
