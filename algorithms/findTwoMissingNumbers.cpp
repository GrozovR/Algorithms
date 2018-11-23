#include <iostream>
#include <vector>


// In the array[n-1] there are all numbers from 0 to n, except two.
// Finding these number for O(n) and for O(1) used memory


//sum of arithmetic progression
int arifSumm(int N){
   return N*(N+1)/2;
}
void findNumbers(const std::vector<int>& arr)
{
   int n = arr.size() + 1;

   int arifProgr_summ = arifSumm(n);

   int arr_summ{ 0 };
   for(auto val : arr)
       arr_summ += val;

   int averageNum = (arifProgr_summ - arr_summ) / 2;

   int sumSmallerHalf = 0, sumGreaterHalf = 0;
   for(const auto val : arr)
   {
       if(val > averageNum)
           sumGreaterHalf += val;
       else
           sumSmallerHalf += val;
   }

   int totalSmallerHalf = arifSumm(averageNum);
   std::cout << "Numbers: "  << (totalSmallerHalf - sumSmallerHalf) << " ";
   std::cout << ((arifProgr_summ - totalSmallerHalf) - sumGreaterHalf) << "\n";
}


int main(int argc, char *argv[])
{
   std::vector<int> vec;

   //vec.push_back(0);
   vec.push_back(1);
   vec.push_back(2);
   vec.push_back(3);
   vec.push_back(4);
   vec.push_back(5);
   vec.push_back(6);
   vec.push_back(7);
   vec.push_back(8);
   vec.push_back(9);
   //vec.push_back(10);

   findNumbers(vec);

   return 0;
}
