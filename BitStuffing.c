#include <stdio.h>
#include <conio.h>
#include <string.h>

void main() {
    int a[20],b[30];
    int i,j,n;
    int count;
    clrscr();
    printf("Enter the frame size :");
    scanf("%d",&n);
    printf("Enter the frame in 1 & 0:\n");
    for(i=0;i<n;i++){
	scanf("%d",&a[i]);
    }
    count =0;
    for(j=0;j<n;j++){
        b[j]=a[j];
        
    if(a[j]==1)
            count++;
            else count=0;
            
	    if(a[j]==1&&count==5){
		b[j]=0;
		count=0;
	    continue;
	    }
    }
    printf("After bit stuffing:");
    for(j=0;j<n;j++){
    printf("%d \n",b[j]);
    }
    getch();
}