#include <iostream>
using namespace std;

string intToRoman(int num)
{
    string s;
    while(num!=0)
    {

        if (num >= 900)
        {
            if (num >= 1000)
            {
                int a = num / 1000;
                s += string(a, 'M');
                num = num - (a * 1000);
            }
            else
            {
                s += "CM";
                num-=900;
            }
        }
        else if (num >= 400)
        {
            if (num >= 500)
            {
                int a = num / 500;
                s += string(a, 'D');
                num = num - (a * 500);
            }
            else
            {
                s += "CD";
                num-=400;
            }
        }
        else if (num >= 90)
        {
            if (num >= 100)
            {
                int a = num / 100;
                s += string(a, 'C');
                num = num - (a * 100);
            }
            else
            {
                s += "XC";
                num-=90;
            }
        }
        else if (num >= 40)
        {
            if (num >= 50)
            {
                int a = num / 50;
                s += string(a, 'L');
                num = num - (a * 50);
            }
            else
            {
                s += "XL";
                num-=40;
            }
        }
        else if (num >= 9)
        {
            if (num >= 10)
            {
                int a = num / 10;
                s += string(a, 'X');
                num = num - (a * 10);
            }
            else
            {
                s += "IX";
                num-=9;
            }
        }
        else if (num >= 4)
        {
            if (num >= 5)
            {
                int a = num / 5;
                s += string(a, 'V');
                num = num - (a * 5);
            }
            else
            {
                s+="IV";
                num-=4;
            }
        }
        else if (num >= 1)
        {
            int a = num / 1;
            s += string(a, 'I');
            num = num - (a * 1);
        }
    }
    return s;
}

int main()
{
    int num;
    cout << "Enter a integer number: ";
    cin >> num;
    string s = intToRoman(num);
    cout << "Roman number is: " << s;
    return 0;
}