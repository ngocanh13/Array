#include <stdio.h>
int main(){
	int arr[5], i, total = 0, max, min;
	float arg ;
	
	for(int i=0; i<5;i++){
		printf("a[%d]=", i);
		scanf("%d", &arr[i]);
		if(i==0){
			max = arr[0];
			min = arr[0];
		}else{
		
			if(arr[i] > max){
				max = arr[i];
			}
			if(arr[i]< min){
				min = arr[i];
			}
		}
		total +=arr[i];
		arg = (float)total/i;
    }
    printf("Gia tri lon nhat :%d\n",max);
	printf("Gia tri nho nhat : %d\n", min);
	printf("Gia tri cua total : %d\n", total);
	printf("Gia tri cua arg: %f\n", arg);
}
