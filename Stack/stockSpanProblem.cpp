#include <iostream>
#include <stack>
#include <vector>

using namespace std;

void stockProblem(vector<int> stock, vector<int> span)
{
    stack<int> s;  //create the stack for finding the prevHigh value
    s.push(0);
    span[0] = 1;    //intially span value is 1 beacuse there is no element which is greater than i=0 index element

    for (int i = 1; i < stock.size(); i++)
    {
        int currPrice = stock[i];   
        while (!s.empty() && currPrice >= stock[s.top()]) //pop the stock until currPrice is greater than or equal to prevHigh
        {
            s.pop();
        }

        if (s.empty()) { //used for special case
            span[i] = i + 1;
        }

        else { //finding the prevHigh and update the span
            int prevHigh = s.top();
            span[i] = i - prevHigh;
        }
    }

//print the span or answer
    for (int i = 0; i < span.size(); i++){
        cout << span[i] << " ";
    }
    cout << endl;
}

int main()
{
    vector<int> stock = {10, 4, 5, 9, 120, 80};
    vector<int> span = {0, 0, 0, 0, 0, 0};

    stockProblem(stock, span);
    return 0;
}