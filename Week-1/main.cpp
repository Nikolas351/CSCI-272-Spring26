#include <iostream>
#include <vector>
using namespace std;

int main()
{
    // this is array for limited use
    string items[5] = {"Redbull","Sour Patch", "Skittles", "Doritos","Peanuts"};
    float prices[5];
    int x;
     for (x = 0; x<5; x++){
       cout<<"Enter the price of items: "<<endl;
        cin >> prices[x];
    }
    for ( x=0; x<5;x++){
         << items[x] << ": "<< prices[x] << endl;
    }
    // this is vector for unlimited use
    
    vector<int> num = {2,5,7,8,9};
    int x;
    for (x=0; x<num.size(); x++){
        cout << "Size" <<num.at(x)<<endl;
    }
    num.push_back(15);
    num.push_back(20);
    num.push_back(13);
    cout << "New Size" << num.size() <<endl;
 
    for (x=0; x<num.size(); x++){
        cout <<num.at(x)<<endl;
    }
    // num.pop_back(); deletes the last number if you place more mutiple numbers delete
    return 0;
}