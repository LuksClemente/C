#include <stdio.h>
#include <stdlib.h>

int main(void){
    
    int seg;     
    int mim;        
    int ms = 1;           
    int hor;            

    //entrada
    printf("Digite o numero de horas: ");
    scanf("%d",&hor);
    printf("\nDigite o numero de minutos: ");
    scanf("%d",&mim);
    printf("\nDigite o numero de segundos: ");
    scanf("%d",&seg);

    if(seg%60==0){
               
        mim= ((mim+(seg/60)));
        seg=0;
            
    }
    else{
        if(seg>60){
            
            mim=((mim+(seg/60)));
            seg=((seg%60));
        
        }
    }

    if(mim%60==0){
        
        hor = ((hor+(mim/60)));
        mim = 0;
    }
    else{
        if(mim>60){
                    
            hor = ((hor+(mim/60)));
            mim = ((mim%60));
                
        }
    }

    for(seg,hor,mim;;seg--){
        if(hor==0 && mim==0 && seg==0){
                
            system("cls"); //se for em windows
            //system("cls"); se for em linux
            printf("\nACABOU O TEMPO!");
            sleep(5);
            return 0;
        
        }

        system("cls"); //se for em windows
        //system("cls"); se for em linux
        printf("\n\n%02d:%02d:%02d",hor,mim,seg);
        sleep(ms);

        if(seg==0){

            mim--;
            seg=seg+60;
        
        }

        if(mim<0){
            
            hor--;
            mim=mim+60;
            
        }

    }

}
