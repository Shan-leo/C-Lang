#include <stdio.h>
#include <stdlib.h>

int main(){

    int nums[2][3] = {{1,2,9},{3,4,4}};

    for(int i=0; i<(sizeof(nums)/sizeof(nums[0])); i++){
        for(int j=0; j<(sizeof(nums[i])/sizeof(nums[i][0])); j++){
            printf("%d\n", nums[i][j]);
            // printf("%d", j);
        }
    }
         
    return 0;
}