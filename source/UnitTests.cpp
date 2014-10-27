#include <iostream>
#include <sstream>
#include <vector>
#include <string>
#include <unordered_map>
#include <utility>

#include "gtest/gtest.h"

#include "prints.h"
#include "Oil.h"


TEST(Ribbon, calc_midnight_oil){
   int result = calc_midnight_oil(7, 2);
   ASSERT_EQ(4, result);   
}

TEST(Ribbon, calc_midnight_oil_2){
   int result = calc_midnight_oil(59, 9);
   ASSERT_EQ(54, result);   
}

TEST(Ribbon, calc_midnight_oil_3){
   int result = calc_midnight_oil(1, 9);
   ASSERT_EQ(1, result);   
}

TEST(Ribbon, calc_midnight_oil_4){
   int result = calc_midnight_oil(11, 2);
   ASSERT_EQ(7, result);   
}

TEST(Ribbon, calc_midnight_oil_5){
   int result = calc_midnight_oil(747, 2);
   ASSERT_EQ(376, result);   
}

TEST(Ribbon, calc_midnight_oil_6){
   int result = calc_midnight_oil(6578, 2);
   ASSERT_EQ(3293, result);   
}

TEST(Ribbon, calc_midnight_oil_7){
   int result = calc_midnight_oil(37212, 2);
   ASSERT_EQ(18609, result);   
}

TEST(Ribbon, calc_midnight_oil_8){
   int result = calc_midnight_oil(12357, 2);
   ASSERT_EQ(6181, result);   
}

TEST(Ribbon, calc_midnight_oil_9){
   int result = calc_midnight_oil(7998332, 2);
   ASSERT_EQ(3999172, result);   
}

TEST(Ribbon, calc_midnight_oil_10){
   int result = calc_midnight_oil(86275251, 2);
   ASSERT_EQ(43137632, result);   
}

TEST(Ribbon, calc_midnight_oil_11){
   int result = calc_midnight_oil(75584551 , 2);
   ASSERT_EQ(37792280, result);   
}

TEST(Ribbon, calc_midnight_oil_12){
   int result = calc_midnight_oil(6, 3);
   ASSERT_EQ(5, result);   
}

TEST(Ribbon, calc_midnight_oil_13){
   int result = calc_midnight_oil(43, 4);
   ASSERT_EQ(33, result);   
}

TEST(Ribbon, calc_midnight_oil_14){
   int result = calc_midnight_oil(811, 3);
   ASSERT_EQ(543, result);   
}

TEST(Ribbon, calc_midnight_oil_15){
   int result = calc_midnight_oil(3410, 4);
   ASSERT_EQ(2560, result);   
}

TEST(Ribbon, calc_midnight_oil_16){
   int result = calc_midnight_oil(21341, 4);
   ASSERT_EQ(16009, result);   
}

TEST(Ribbon, calc_midnight_oil_17){
   int result = calc_midnight_oil(696485 , 4);
   ASSERT_EQ(522368, result);   
}

TEST(Ribbon, calc_midnight_oil_18){
   int result = calc_midnight_oil(8856748 , 3);
   ASSERT_EQ(5904504, result);   
}

TEST(Ribbon, calc_midnight_oil_19){
   int result = calc_midnight_oil(2959379   , 4);
   ASSERT_EQ(2219538, result);   
}

TEST(Ribbon, calc_midnight_oil_20){
   int result = calc_midnight_oil(831410263, 3);
   ASSERT_EQ(554273516, result);   
}

TEST(Ribbon, calc_midnight_oil_21){
   int result = calc_midnight_oil(2, 5);
   ASSERT_EQ(2, result);   
}

TEST(Ribbon, calc_midnight_oil_22){
   int result = calc_midnight_oil(19, 6);
   ASSERT_EQ(17, result);   
}

TEST(Ribbon, calc_midnight_oil_23){
   int result = calc_midnight_oil(715, 7);
   ASSERT_EQ(615, result);   
}

TEST(Ribbon, calc_midnight_oil_24){
   int result = calc_midnight_oil(9122, 5);
   ASSERT_EQ(7300, result);   
}

TEST(Ribbon, calc_midnight_oil_25){
   int result = calc_midnight_oil(89117, 6);
   ASSERT_EQ(74268, result);   
}

TEST(Ribbon, calc_midnight_oil_26){
   int result = calc_midnight_oil(689973, 7);
   ASSERT_EQ(591408, result);   
}

TEST(Ribbon, calc_midnight_oil_27){
   int result = calc_midnight_oil(3024524, 5);
   ASSERT_EQ(2419624, result);   
}

TEST(Ribbon, calc_midnight_oil_28){
   int result = calc_midnight_oil(67127156, 6);
   ASSERT_EQ(55939302, result);   
}

TEST(Ribbon, calc_midnight_oil_29){
   int result = calc_midnight_oil(412262167, 7);
   ASSERT_EQ(353367574, result);   
}

TEST(Ribbon, calc_midnight_oil_30){
   int result = calc_midnight_oil(6, 8);
   ASSERT_EQ(6, result);   
}

TEST(Ribbon, calc_midnight_oil_31){
   int result = calc_midnight_oil(59, 9);
   ASSERT_EQ(54, result);   
}

TEST(Ribbon, calc_midnight_oil_32){
   int result = calc_midnight_oil(246, 10);
   ASSERT_EQ(222, result);   
}

TEST(Ribbon, calc_midnight_oil_33){
   int result = calc_midnight_oil(5314, 8);
   ASSERT_EQ(4651, result);   
}

TEST(Ribbon, calc_midnight_oil_34){
   int result = calc_midnight_oil(15309 , 9);
   ASSERT_EQ(13609, result);   
}

TEST(Ribbon, calc_midnight_oil_35){
   int result = calc_midnight_oil(35648 , 10);
   ASSERT_EQ(32085, result);   
}

TEST(Ribbon, calc_midnight_oil_36){
   int result = calc_midnight_oil(3018012 , 8);
   ASSERT_EQ(2640764, result);   
}

TEST(Ribbon, calc_midnight_oil_37){
   int result = calc_midnight_oil(92153348 , 9);
   ASSERT_EQ(81914089, result);   
}

TEST(Ribbon, calc_midnight_oil_38){
   int result = calc_midnight_oil(177583558 , 10);
   ASSERT_EQ(159825206, result);   
}

TEST(Ribbon, calc_midnight_oil_39){
   int result = calc_midnight_oil(1000000000 , 2);
   ASSERT_EQ(500000008, result);   
}

TEST(Ribbon, calc_midnight_oil_40){
   int result = calc_midnight_oil(1000000000 , 3);
   ASSERT_EQ(666666672, result);   
}

TEST(Ribbon, calc_midnight_oil_41){
   int result = calc_midnight_oil(1000000000 , 4);
   ASSERT_EQ(750000005, result);   
}

TEST(Ribbon, calc_midnight_oil_42){
   int result = calc_midnight_oil(1000000000 , 5);
   ASSERT_EQ(800000003, result);   
}

TEST(Ribbon, calc_midnight_oil_43){
   int result = calc_midnight_oil(1000000000 , 6);
   ASSERT_EQ(833333338, result);   
}

TEST(Ribbon, calc_midnight_oil_44){
   int result = calc_midnight_oil(1000000000 , 7);
   ASSERT_EQ(857142861, result);   
}

TEST(Ribbon, calc_midnight_oil_45){
   int result = calc_midnight_oil(1000000000 , 8);
   ASSERT_EQ(875000004, result);   
}

TEST(Ribbon, calc_midnight_oil_46){
   int result = calc_midnight_oil(1000000000 , 9);
   ASSERT_EQ(888888894, result);   
}

TEST(Ribbon, calc_midnight_oil_47){
   int result = calc_midnight_oil(1000000000 , 10);
   ASSERT_EQ(900000001, result);   
}

TEST(Ribbon, calc_midnight_oil_48){
   int result = calc_midnight_oil(1, 4);
   ASSERT_EQ(1, result);   
}

TEST(Ribbon, calc_midnight_oil_49){
   int result = calc_midnight_oil(2, 10);
   ASSERT_EQ(2, result);   
}

TEST(Ribbon, calc_midnight_oil_50){
   int result = calc_midnight_oil(1, 2);
   ASSERT_EQ(1, result);   
}

TEST(Ribbon, calc_midnight_oil_51){
   int result = calc_midnight_oil(6, 8);
   ASSERT_EQ(6, result);   
}

TEST(Ribbon, calc_midnight_oil_52){
   int result = calc_midnight_oil(987862820, 9);
   ASSERT_EQ(878100288, result);   
}

TEST(Ribbon, calc_midnight_oil_53){
   int result = calc_midnight_oil(979591791, 9);
   ASSERT_EQ(870748262, result);   
}

TEST(Ribbon, calc_midnight_oil_54){
   int result = calc_midnight_oil(948889213, 9);
   ASSERT_EQ(843457081, result);   
}

TEST(Ribbon, calc_midnight_oil_55){
   int result = calc_midnight_oil(8, 9);
   ASSERT_EQ(8, result);   
}

TEST(Ribbon, calc_midnight_oil_56){
   int result = calc_midnight_oil(999999999 , 10);
   ASSERT_EQ(900000000, result);   
}

TEST(Ribbon, burning_oil_solve){
   std::stringstream r(
      "7 2\n"
      "59 9\n"
      "1 9\n"
      "11 2\n"
      "747 2\n"
      "6578 2\n"
      "37212 2\n"
      "12357 2\n"
      "7998332 2\n"
      "86275251 2\n"
      "75584551 2\n"
      "6 3\n"
      "43 4\n"
      "811 3\n"
      "3410 4\n"
      "21341 4\n"
      "696485 4\n"
      "8856748 3\n"
      "2959379 4\n"
      "831410263 3\n"
      "2 5\n"
      "19 6\n"
      "715 7\n"
      "9122 5\n"
      "89117 6\n"
      "689973 7\n"
      "3024524 5\n"
      "67127156 6\n"
      "412262167 7\n"
      "6 8\n"
      "59 9\n"
      "246 10\n"
      "5314 8\n"
      "15309 9\n"
      "35648 10\n"
      "3018012 8\n"
      "92153348 9\n"
      "177583558 10\n"
      "1000000000 2\n"
      "1000000000 3\n"
      "1000000000 4\n"
      "1000000000 5\n"
      "1000000000 6\n"
      "1000000000 7\n"
      "1000000000 8\n"
      "1000000000 9\n"
      "1000000000 10\n"
      "1 4\n"
      "2 10\n"
      "1 2\n"
      "6 8\n"
      "987862820 9\n"
      "979591791 9\n"
      "948889213 9\n"
      "8 9\n"
      "999999999 10\n");
   std::stringstream w;
   burning_oil_solve(r, w);
   ASSERT_EQ(
      "4\n"
      "54\n"
      "1\n"
      "7\n"
      "376\n"
      "3293\n"
      "18609\n"
      "6181\n"
      "3999172\n"
      "43137632\n"
      "37792280\n"
      "5\n"
      "33\n"
      "543\n"
      "2560\n"
      "16009\n"
      "522368\n"
      "5904504\n"
      "2219538\n"
      "554273516\n"
      "2\n"
      "17\n"
      "615\n"
      "7300\n"
      "74268\n"
      "591408\n"
      "2419624\n"
      "55939302\n"
      "353367574\n"
      "6\n"
      "54\n"
      "222\n"
      "4651\n"
      "13609\n"
      "32085\n"
      "2640764\n"
      "81914089\n"
      "159825206\n"
      "500000008\n"
      "666666672\n"
      "750000005\n"
      "800000003\n"
      "833333338\n"
      "857142861\n"
      "875000004\n"
      "888888894\n"
      "900000001\n"
      "1\n"
      "2\n"
      "1\n"
      "6\n"
      "878100288\n"
      "870748262\n"
      "843457081\n"
      "8\n"
      "900000000\n", w.str());   
}

