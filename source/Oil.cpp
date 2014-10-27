#include <iostream>
#include <algorithm>
#include <climits>
#include <cstring>

#include "prints.h"

/**
 * Binary Method for solving CodeForces 168B: Burning Midnight Oil Problem.
 *
 * @param n lines of code. 1 <= n <= 10^9
 * @param k 2 <= k <= 10
 * @return minumum allwable value v
 */
int calc_midnight_oil_brute(int n, int k){
   int bestV = 0;

   int bestStart = 0;
   if(n < k) {
      bestStart = n;
   } else {
      bestStart = n >> 1;
   }
   // std::cout << bestStart << std::endl;
   int goal;
   for(int v = bestStart; v <= n; ++v){
      goal = 0;
      int x = v;
      while(x != 0){
         goal += x;
         x /= k;
      }
      // std::cout <<"V: " << v << " Goal: " << goal << std::endl
      if(goal >= n){
         bestV = v;
         break;
      }
   }
   // std::cout << "DIFF: " << bestStart - bestV << std::endl;
   return bestV;
}

/**
 * Binary Method for solving CodeForces 168B: Burning Midnight Oil Problem.
 *
 * @param n lines of code. 1 <= n <= 10^9
 * @param k 2 <= k <= 10
 * @return minumum allwable value v
 */
int calc_midnight_oil_binary(int n, int k){
   int left = 1;
   int right = n;
   while(left != right){
      int x, middle;
      x = middle = (left + right) / 2;
      int sum = 0;
      while(x != 0){
         sum += x;
         x /= k;
      }
      if(sum >= n){
         right = middle;
      } else {
         left = middle + 1;
      }
   }
   return left;
}

int calc_midnight_oil(int n, int k){
   return calc_midnight_oil_binary(n, k);
}

void burning_oil_solve(std::istream& in, std::ostream& out){
   // turn off synchronization with C I/O
   // std::ios_base::sync_with_stdio(false);
   int n, k;
   while(in >> n >> k){
      int v = calc_midnight_oil(n, k);
      out << v << std::endl;
   }
}
