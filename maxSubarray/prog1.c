//
//  main.c
//  algorithm_hw2
//
//  Created by 蘇振瑋 on 2016/4/2.
//  Copyright © 2016年 蘇振瑋. All rights reserved.
//

#include <stdio.h>

int main(int argc, const char * argv[]) {
    int a[10000];
    int n=0;
    int i=0,j=0;
    int len=0;
    int sum=0;
    int max=0;
    while(scanf("%d",&a[n])){
        if(a[n]==120)break;
        n++;
    }
    len=n;
    for(i=0;i<=len;i++){
        sum=0;
        for(j=i;j<=len;j++){
            sum=sum+a[j];
            if(sum>max) max=sum;
            
        }
    }
    printf("%d\n",max);
    return 0;
}
