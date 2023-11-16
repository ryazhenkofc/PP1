#include <iostream>
#include <vector>

using namespace std;

double GetPriceQualityRatio(double price, double quality){
    return quality / price;
}

int main(){
    int n;
    cin >> n;

    string brand;
    double price, quality;

    vector<string> brands;
    vector<int> prices;
    vector<int> qualities;

    for(int i = 0; i < n; i++){
        cin >> brand >> price >> quality;
        brands.push_back(brand);
        prices.push_back(price);
        qualities.push_back(quality);
    }
    
    double biggest_ratio = GetPriceQualityRatio(prices[0], qualities[0]);
    for(int i = 1; i < n; i++){
        double ratio = GetPriceQualityRatio(prices[i], qualities[i]);
        if(ratio > biggest_ratio){
            biggest_ratio = ratio;
            brand = brands[i];
        }
    }
    cout << brand;
    return 0;
}

