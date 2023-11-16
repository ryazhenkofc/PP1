// other way to do this task by @Danis
#include <iostream>
#include <vector>

using namespace std;

double getbig(double p, double q){ 
    return q/p; 
} 

int main(){ 
    int n; 
    cin >> n; 

    string brands[n]; 
    double price_quaility[n][2]; 

    for(int i = 0; i < n; i++){ 
        cin >> brands[i]; 
        for(int j = 0; j < 2; j++){ 
            cin >> price_quaility[i][j]; 
        } 
    } 


    double max_ratio = INT_MIN; 
    double base_ratio; 
    int brand_name; 
    for(int i = 0; i < n ; i++){ 
        base_ratio = getbig(price_quaility[i][0], price_quaility[i][1]); 
        cout << base_ratio << endl; 
        if(base_ratio > max_ratio){ 
            max_ratio = base_ratio; 
            brand_name = i; 
        } 
    } 
    cout << brands[brand_name]; 
    return 0; 
}