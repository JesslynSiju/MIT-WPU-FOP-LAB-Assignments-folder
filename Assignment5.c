#include <stdio.h>

#define MAX 10

void add(int a[MAX][MAX], int b[MAX][MAX], int r, int c) {
    int i,j,res[MAX][MAX];
    for(i=0;i<r;i++)
        for(j=0;j<c;j++)
            res[i][j]=a[i][j]+b[i][j];

    for(i=0;i<r;i++){
        for(j=0;j<c;j++)
            printf("%d ",res[i][j]);
        printf("\n");
    }
}

void saddle(int a[MAX][MAX], int r, int c){
    int i,j,k,min,col,flag;
    for(i=0;i<r;i++){
        min=a[i][0];
        col=0;
        for(j=1;j<c;j++){
            if(a[i][j]<min){
                min=a[i][j];
                col=j;
            }
        }
        flag=1;
        for(k=0;k<r;k++){
            if(a[k][col]>min){
                flag=0;
                break;
            }
        }
        if(flag){
            printf("%d\n",min);
            return;
        }
    }
    printf("No Saddle Point\n");
}

void transpose(int a[MAX][MAX], int r, int c){
    int i,j;
    for(i=0;i<c;i++){
        for(j=0;j<r;j++)
            printf("%d ",a[j][i]);
        printf("\n");
    }
}

void magic(int a[MAX][MAX], int n){
    int i,j,sum=0,diag1=0,diag2=0,flag=1;

    for(j=0;j<n;j++)
        sum+=a[0][j];

    for(i=0;i<n;i++){
        int rsum=0;
        for(j=0;j<n;j++)
            rsum+=a[i][j];
        if(rsum!=sum) flag=0;
    }

    for(j=0;j<n;j++){
        int csum=0;
        for(i=0;i<n;i++)
            csum+=a[i][j];
        if(csum!=sum) flag=0;
    }

    for(i=0;i<n;i++){
        diag1+=a[i][i];
        diag2+=a[i][n-i-1];
    }

    if(diag1!=sum || diag2!=sum) flag=0;

    if(flag) printf("Magic Square\n");
    else printf("Not Magic Square\n");
}

int main(){
    int a[MAX][MAX],b[MAX][MAX],r,c,i,j,choice,n;

    printf("Enter rows and columns: ");
    scanf("%d%d",&r,&c);

    printf("Enter Matrix A:\n");
    for(i=0;i<r;i++)
        for(j=0;j<c;j++)
            scanf("%d",&a[i][j]);

    printf("Enter Matrix B:\n");
    for(i=0;i<r;i++)
        for(j=0;j<c;j++)
            scanf("%d",&b[i][j]);

    printf("1.Addition 2.Saddle 3.Transpose 4.Magic\n");
    scanf("%d",&choice);

    switch(choice){
        case 1: add(a,b,r,c); break;
        case 2: saddle(a,r,c); break;
        case 3: transpose(a,r,c); break;
        case 4:
            printf("Enter order: ");
            scanf("%d",&n);
            magic(a,n);
            break;
    }
    return 0;
}