//
//  main.cpp
//  2.1_binary
//
//  Created by Dave_Zhou on 14-12-2.
//  Copyright (c) 2014年 Dave_Zhou. All rights reserved.
//

#include <iostream>
using namespace std;

int main(int argc, const char * argv[]) {
    // insert code here...
    int l_inputNum = 0;
    int l_countNum = 0;
    int l_numberOne = 1;

    cin >> l_inputNum;
    
    while (l_inputNum)
    {
        if(l_inputNum & l_numberOne)
            l_countNum++;
        
        l_inputNum >>= 1;
        
    }
    
    cout << "1的位数是：" << l_countNum << endl;
    return 0;
}
