#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(void) {

int n,s,z;

printf("�п�J�T���ΤT�䪺�ƭ�\n");
printf("n="); scanf("%d",&n);
printf("s="); scanf("%d",&s);
printf("z="); scanf("%d",&z);


if( (n+s) <= z ){
printf("���i�򦨤@�ӤT���ΡC"); 
}
else if( (n+z) <= s && (s>>n>>z || s>>z>>n)){
printf("�i�򦨤@�ӤT���ΡC"); 
}
else if( (s+z) <= n ){
printf("���i�򦨤@�ӤT���ΡC"); 
}	
else{
printf("�i�򦨤@�ӤT���ΡC");
} 
printf("\n");

system("PAUSE");
return 0;
}
