#include <stdio.h>
#include "../libraries/utils.h" 
#include <stdlib.h>

int main(){

    for (int m = 1; m <= 12; m = m + 1){ //month
        printf("\nMonth: %d\n",m);
        int tipo = m%2; //even or odd
        sleep(1);

        if (m == 2){//month2
            
            //print days
            for (int d = 1; d <= 28; d++){ 
                printf("\t%d\n",d);
                sleep(1);
            }

        }else if(m <= 7){//first 7 months
            
            if (tipo==0){//even months 
            
                //print days
                for (int d = 1; d <= 30; d++){
                    printf("\t%d\n",d);
                sleep(1);
                }
                
            }else if(tipo != 0){//odd months
            
                //print days
                for (int d = 1; d <= 31; d++){
                    printf("\t%d\n",d);
                    sleep(1);
                }

            }

        }else if(m > 7){//last 5 months

            if (tipo==0){//even months (5)
            
                //print days(5)
                for (int d = 1; d <= 31; d++){
                    printf("\t%d\n",d);
                    sleep(1);
                }

            }else if(tipo != 0){//odd months(5)
            
                //print days(5)
                for (int d = 1; d <= 30; d++){ 
                    printf("\t%d\n",d);
                    sleep(1);
                }

            }
        }
    }

    return 0;
}