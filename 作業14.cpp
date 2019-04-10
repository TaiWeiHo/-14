#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(void) {

int n,s,z;

printf("請輸入三角形三邊的數值\n");
printf("n="); scanf("%d",&n);
printf("s="); scanf("%d",&s);
printf("z="); scanf("%d",&z);


if( (n+s) <= z ){
printf("不可圍成一個三角形。"); 
}
else if( (n+z) <= s && (s>>n>>z || s>>z>>n)){
printf("可圍成一個三角形。"); 
}
else if( (s+z) <= n ){
printf("不可圍成一個三角形。"); 
}	
else{
printf("可圍成一個三角形。");
} 
printf("\n");

system("PAUSE");
return 0;
}
