//
//  main.cpp
//  평범한 배낭_#12865
//
//  Created by 원현식 on 2020/01/22.
//  Copyright © 2020 Hyunsik Won. All rights reserved.
//

#include <iostream>
#include <math.h>
#include <algorithm>

using namespace std;

int n,k;
int d[100001];  // 가방 용량
int w[101];     // 물건의 무게
int v[101];     // 물건의 가치

int main(int argc, const char * argv[]) {
    
    cin >> n >> k;
    for(int i=1; i<=n; i++){
        cin >> w[i] >> v[i];
    }
    
    for(int i=1; i<=n; i++){
        for(int j=k; j>=1; j--){
            if(w[i] <= j){
                d[j] = max(d[j], d[j-w[i]] + v[i]);
            }
        }
    }
    
    cout << d[k] << "\n";
}
