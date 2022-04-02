#include<stdio.h>
#include<math.h>

int isPrime(int x){
	for(int i=2;i<=sqrt(x)+1;i++){
		if(x%i==0) return 0;
	}
	return 1;
}

int main(){
	int a,b;
	scanf("%d %d",&a,&b);

	for (int d1=5;d1<=9;d1+=2) {
		if(isPrime(d1)&&d1>=a&&d1<=b) printf("%d\n",d1);
	}

	for (int d1 = 1; d1 <= 9; d1+=2) {
    		int pal;
    		pal=d1*10+d1;
    		if(isPrime(pal)&&pal>=a&&pal<=b) printf("%d\n",pal);
	}

	for (int d1 = 1; d1 <= 9; d1+=2) {
    		for (int d2 = 0; d2 <= 9; d2++) {
    			int pal;
    			pal=d1*100+d2*10+d1;
    			if(isPrime(pal)&&pal>=a&&pal<=b) printf("%d\n",pal);
    		}
	}

	for (int d1 = 1; d1 <= 9; d1+=2) {
    		for (int d2 = 0; d2 <= 9; d2++) {
    			int pal;
    			pal=d1*1000+d2*100+d2*10+d1;
    			if(isPrime(pal)&&pal>=a&&pal<=b) printf("%d\n",pal);
    		}
	}

	for (int d1 = 1; d1 <= 9; d1+=2) {
     		for (int d2 = 0; d2 <= 9; d2++) {
         		for (int d3 = 0; d3 <= 9; d3++) {
         			int pal;
           			pal = 10000*d1 + 1000*d2 +100*d3 + 10*d2 + d1;
           			if(isPrime(pal)&&pal>=a&&pal<=b) printf("%d\n",pal);
         		}
     		}
 	}

	for (int d1 = 1; d1 <= 9; d1+=2) {
     		for (int d2 = 0; d2 <= 9; d2++) {
         		for (int d3 = 0; d3 <= 9; d3++) {
         			int pal;
           			pal = 100000*d1 + 10000*d2 +1000*d3 + 100*d3 + 10*d2 + d1;
           			if(isPrime(pal)&&pal>=a&&pal<=b) printf("%d\n",pal);
         		}
     		}
 	}

	for (int d1 = 1; d1 <= 9; d1+=2) {
     		for (int d2 = 0; d2 <= 9; d2++) {
         		for (int d3 = 0; d3 <= 9; d3++) {
         			for (int d4=0;d4<=9;d4++){
         				int pal;
           				pal = 1000000*d1 + 100000*d2 +10000*d3 +1000*d4+ 100*d3 + 10*d2 + d1;
           				if(isPrime(pal)&&pal>=a&&pal<=b) printf("%d\n",pal);
				 	}
         		}
     		}
 	}

	for (int d1 = 1; d1 <= 9; d1+=2) {
     		for (int d2 = 0; d2 <= 9; d2++) {
         		for (int d3 = 0; d3 <= 9; d3++) {
         			for (int d4=0;d4<=9;d4++){
         				int pal;
           				pal = 10000000*d1 + 1000000*d2 +100000*d3 +10000*d4+1000*d4+ 100*d3 + 10*d2 + d1;
           				if(isPrime(pal)&&pal>=a&&pal<=b) printf("%d\n",pal);
				 }
         		}
     		}
 	}
	return 0;
}
