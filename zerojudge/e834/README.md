
# e834:P1.批發出貨(Wholesale)

## 敘述

Y19m08a_p1_批發出貨(Wholesale)    2019年,08月,TOI, 新手同好會 {題目連結}
 問題敘述
小瑜是一位服飾批發商，由於出貨量太大，他決定規範每一筆訂單的基底數量，顧客須湊齊這個基底數量的倍數，小瑜才會出貨。假設基底數量為10，代表一份商品為10件，下單量需為10、20、30……。
為了自己與顧客的便利，小瑜聘請了你來幫他製作一個系統：如果顧客下的訂單數量有符合條件，則顯示出小瑜需準備幾份商品；反之，若訂單無達成基底數量之倍數則通知買家需再多訂幾件商品才符合出貨條件。
 評分說明
本題共有兩組測試題組，條件限制如下所示。每一組可有一或多筆測試資料，該組所有測試資料皆需答對才會獲得該組分數。
子任務1 分數 20  額外輸入限制:所有訂單皆符合出貨條件。
子任務2 分數80  額外輸入限制:包含各種情況。
 

## 說明

輸入:

輸入共兩行，第一行有一個正整數M(1<=M<=100)，代表出貨基底數量；第二行有N+1(1<=N<=1,000) 個數，前N個數為每個買家之下訂量T(1<=T<=10,000)，最後一個數必為0代表終止。
 {註：原題買家 可能會有0個，這裏改為最少1個，最多1000個}

---

輸出:

對於每一個買家輸出一行結果，若下訂量符合出貨條件，則輸出小瑜需準備多少份數的商品，反之則輸出買家需再多下訂幾件商品才符合出貨條件，每一行最後皆接著一個換行字元。
 

## 範例

範例1

```text
輸入:
10
100 50 9 0

---

輸出:
10
5
1
```

範例2

```text
輸入:
5
22 9 100 73 0

---

輸出:
3
1
20
2
```

## 程式碼

cpp

```cpp
#include <iostream>
using namespace std;

int main() {
    int base,item;
    cin>>base;
    while(cin>>item){
        if (item == 0){
            break;
        }
        else if (item % base == 0){
            cout<<item / base <<endl;
        }
        else {
            cout<<base - (item%base)<<endl;
        }
    }
    return 0;
}

```

## 標籤

無

## 連結

- GitHub: [cpp程式碼](https://github.com/henryleecode23/solve_record/blob/main/zerojudge/e834/main.cpp)

- 題目來源: [zerojudge](https://zerojudge.tw/ShowProblem?problemid=e834)

## [回首頁](https://henryleecode23.github.io/solve_record/)