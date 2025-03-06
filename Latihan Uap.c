	#include<stdio.h>
    #include<stdlib.h>
    #include<ctype.h>
    #include<string.h>
    #include<math.h>

    int main(){
        int i,j,N,C,cont1,data;
        scanf("%d %d",&N,&C);
        int A,B,Y,grupo[N],matrix[N][N];
        for(i=0;i<N;i++){
            for(j=0;j<N;j++){
                matrix[i][j]=2008;
            }
        }
        for(i=0;i<C;i++){
            scanf("%d %d %d ",&A,&B,&Y);
            matrix[A-1][B-1]=Y;
        }
        for(data=1948;data<=2008;data++){
            for(i=0;i<N;i++){
                grupo[i]=0;
            }
            for(i=0;i<N;i++){
                for(j=i+1;j<N;j++){
                    if(matrix[i][j]<data){
                        grupo[i]=1;
                        grupo[j]=1;
                    }
                }
            }
            for(i=0;i<N;i++){
                for(j=i+1;j<N;j++){
                    if(matrix[i][j]>=data && grupo[i]==1&&grupo[j]==1){
                        grupo[i]=0;
                        grupo[j]=0;
                    }
                }
            }
            cont1=0;
            for(i=0;i<N;i++){
                if(grupo[i]==1)cont1++;
            }   
            if(cont1>=N/3. && cont1<=2.*N/3.){
                printf("%d\n",data);
                return 0;
            }
        }

        printf("Impossible\n");

        return 0;
    }