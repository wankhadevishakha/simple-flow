 #include <stdio.h>
 int main ()
 {

    int a,b,c;
    scanf("%d%d%d",&a,&b,&c);
    if(a>b){
    	 if (a>c){
    	   printf("a is max");
    	}
    	else {
    	   printf("c is max");
    	}
    }
    else {
    	if (b>c){
    	printf("b is max");
    	}
    	else {
    	 printf("c is max");
    	}
    }
    return 0;
 }
