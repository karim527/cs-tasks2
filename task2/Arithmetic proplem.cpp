#include <iostream>

using namespace std;

int main()
{
   int num1,num2;

   cin>>num1>>num2;

   bool is_num1_even =(num1%2==0);
   bool is_num2_even =(num2%2==0);

   bool is_num1_odd =(num1%2==1);
   bool is_num2_odd =(num2%2==1);

   if(is_num1_odd && is_num2_odd)
   cout<<num1 * num2<<"\n";

   if(is_num1_even && is_num2_even)
   cout<<num1 / num2<<"\n";

   if(is_num1_odd && is_num2_even)
   cout<<num1 + num2<<"\n";

   if(is_num1_even && is_num2_odd)
   cout<<num1 - num2<<"\n";








    return 0;
}
