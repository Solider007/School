#include <stdio.h>
//p146, ex39
int main(){
	int tv,vcr,controller,cd,tape;
	float totTv,totVcr,totController,totCd,totTape,sub,tax;
	printf("How Many TVs Were Sold? ");
	scanf("%d",&tv);
	printf("How Many VCRs Were Sold? ");
	scanf("%d",&vcr);
	printf("How Many Remote Controllers Were Sold? ");
	scanf("%d",&controller);
	printf("How Many CDs Were Sold? ");
	scanf("%d",&cd);
	printf("How Many Tape Recorders Were Sold? ");
	scanf("%d",&tape);
	printf("\n");
	
	totTv=tv*400.00;
	totVcr=vcr*220.00;
	totController=controller*35.20;
	totCd=cd*300.00;
	totTape=tape*150.00;
	printf("QTY\tDESCRIPTION\tUNIT PRICE\tTOTAL PRICE\n");
	printf("---\t-----------\t----------\t-----------\n");
	printf("%d\tTV                  400.00          %.2f\n",tv,totTv);
	printf("%d\tVCR                 220.00          %.2f\n",vcr,totVcr);
	printf("%d\tREMOTE CTRLR         35.20            %.2f\n",controller,totController);
	printf("%d\tCD PLAYER           300.00           %.2f\n",cd,totCd);
	printf("%d\tTAPE RECORDER       150.00           %.2f\n",tape,totTape);
	printf("                                         ----------\n");
	sub=totTv+totVcr+totController+totCd+totTape;
	printf("                          SUBTOTAL          %.2f\n",sub);
	tax=sub*0.0825;
	printf("                          TAX                %.2f\n",tax);
	printf("                          TOTAL             %.2f\n",sub+tax);
}
