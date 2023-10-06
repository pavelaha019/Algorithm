#include<bits/stdc++.h>
using namespace std;

//w= weight, p= profit, c= capasity, r=ratio, tp= total profit

void knap_sack(int n, float* w, float* p, float c){
     float x[20], tp=0;
     int i, j, k;
     k = c;

     for(i=0; i<n; i++)
          x[i] = 0.0;
     
     for(i=0; i<n; i++){
          if(w[i] > k)
               break;
          else{
               x[i] = 1.0;
               tp = tp + p[i];
               k = k - w[i];
          }
     }
     if(i<n)
          x[i] = k / w[i];

     tp = tp + (x[i] * p[i]);


     cout << "max profit is : " << tp; 
}

int main(){
     float w[20], p[20], c;
     int num, i, j;
     float r[20], temp;

     cout << "number of objecct: " ;
     cin >> num;

     cout << endl << "weights & profits: ";
     for(i= 0; i<num; i++){
          cin >> w[i] >> p[i];
     }

     cout << endl << "number Of capasity: ";
     cin >> c;

     for(i=0; i<num; i++){
          ratio[i] = p[i] / w[i];
     }

     for(i=0; i< num; i++){
          for(j=0; j<num; j++){
               if(r[i] < r[j]){
                    temp = r[j];
                    r[j] = r[i];
                    r[i] = temp;

                    temp = w[j];
                    w[j] = w[i];
                    w[i] = temp;

                    temp = p[j];
                    p[j] = p[i];
                    p[i] = temp;
               }
          }
     }
    knap_sack(num, w, p, c);
     return 0;
}