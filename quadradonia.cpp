#include <stdio.h>

int main(){
    int n, m, matriz[500][500], i, j, l, u, q;

    scanf("%d %d", &n, &m);
    while(n!=0 || m!=0){
        if(n==0)
        for(i = 0; i<m; i++){
            for(j = 0; j<m; j++){
                scanf("%d", &matriz[i][j]);
            }
        }
        scanf("%d", &q);
        while(q--){
            scanf("%d %d", &l, &u);

        }
        printf("-\n");
        scanf("%d %d", &n, &m);
    }


    return 0;
}
