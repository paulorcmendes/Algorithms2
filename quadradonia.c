#include <stdio.h>

int main(){
    int n, m, matriz[500][500], i, j, l, u, q, esq, dir, meio, maior, cur;

    scanf("%d %d", &n, &m);
    while(n!=0 || m!=0){
        for(i = 0; i<n; i++){
            for(j = 0; j<m; j++){
                scanf("%d", &matriz[i][j]);
            }
        }
        scanf("%d", &q);
        while(q--){
            scanf("%d %d", &l, &u);
            maior = 0;
            for(i = 0; i<n; i++){
                esq = 0;
                dir = m-1;
                while(esq <= dir){
                    meio = (esq+dir)/2;

                    if(matriz[i][meio] == l) break;
                    if(l > matriz[i][meio]){
                        esq = meio+1;
                    }else{
                        dir = meio-1;
                    }
                }
                if(matriz[i][meio] < l)meio++;
                if(meio >= m) meio = -1;
                cur = 0;
                while(meio!=-1 && cur+i<n && cur+meio<m && matriz[cur+i][cur+meio] <= u) cur++;

                if(cur > maior) maior = cur;
            }
            printf("%d\n", maior);
        }
        printf("-\n");
        scanf("%d %d", &n, &m);
    }

    return 0;
}
