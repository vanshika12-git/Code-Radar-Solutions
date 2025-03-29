#include<stdio.h>
void trackPlayerRanks(int ranked[], int n, int player[], int m, int result[]) {
    int ranks[200000]; 
    int rank = 1;   
    ranks[0] = rank;
    for (int i = 1; i < n; i++) {
        if (ranked[i] != ranked[i - 1]) {
            rank++;
        }
        ranks[i] = rank;
    }    
    int index = n - 1;  
    for (int i = 0; i < m; i++) {
        while (index >= 0 && player[i] >= ranked[index]) {
            index--; 
        }
        result[i] = (index == -1) ? 1 : ranks[index] + 1; // Assign rank
    }
}