---
description: 재귀함수
---

# 무식하게 풀기 \(brute-force\)

## 재귀 호출

컴퓨터가 수행하는 많은 작업들은 대개 작은 조각들로 나누어 볼 수 있다.  
나누다 보면 범위가 작아질수록 각 조각들의 형태가 유사해지는 작업들을 볼 수 있다.

이런 작업을 할 때 주로 사용되는 개념이 바로 **재귀 함수\(recursive function\)** or 재귀 호출\(recursion\) 이다. 

```cpp
int sum(int n) {
int result = 0;
for(int i = 1; i <=n ; ++i) {
    result += i;
}
return result;
}

//sum의 방식을 재귀 함수를 통해 구
int recursiveSum(int n) {
    if(n == 1) return 1;    //더 이상 쪼개지지 않을 
    return n + recursiveSum(n-1);
}
```

* 재귀함수는 더 이상 쪼개지지 않는 최소한의 작업에 도달했을 때 답을 반환하는 조건문을 포함해야 한다.
* 이 때 가장 작은 작업들을 가리켜 재귀 호출의 기저 사례\(base case\)라고 한다.



### 예제1

> 0번부터 차례대로 번호 매겨진 n개의 원소 중 네 개를 고르는 경우의 수를 모두 출력.



각 조각에서 하나의 원소를 고른 뒤, 남은 원소들을 고르는 작업을 아래와 같은 집합으로 정의할 수 있다.

{% hint style="info" %}
* 원소들의 총 개수
* 더 골라야 할 원소들의 개수
* 지금까지 고른 원소들의 번
{% endhint %}



#### Code

```cpp
/*
n: 전체 원소의 수
pickedNum: 지금까지 고른 원소들의 번호
toPick: 더 고를 원소의 수
*/


void pickNumber(int n, vector<int>& pickedNum, int toPick){
    //base case : 더 이상 고를 원소가 없을 때, 원소들 출력
    if (toPick == 0) { printPicked(pickedNum); return; }
    int smallest = pickedNum.empty() ? 0 : pickedNum.back() + 1;
    
    for(int next = smallest; next < n; ++next){
        pickedNum.push_back(next);
        pickNumber(n, pickedNum, toPick -1 );    //재귀함
        pickedNum.pop_back();
    }
}

```



## 시간 복잡도 분석

완전 탐색 알고리즘의 시간 복잡도를 계산하는 것은 비교적 단순하다.  
가능한 답 후보들을 모두 구하는 것이기 때문에, 그 답들을 모두 세어보면 된다.

##  완전탐색으로 해결하기 위한 과정

1. 완전 탐색은 존재하는 모든 답을 하나씩 검사하므로, 걸리는 시간은 가능한 답의 수에 정확히 비례한다. 최대 크기의 입력을 가정했을 때 답의 개수를 계산하고 이들을 모두 제한 시간 안에 생성할 수 있을지를 가늠해야한다.
2. 가능한 모든 답의 후보를 만드는 과정을 여러 개의 선택으로 나눈다. 각 선택은 답의 후보를 만드는 과정의 한 조각이 된다.
3. 그 중 하나의 조각을 선택해 답의 일부로 만들고, 나머지 답을 재귀 호출을 통해 완성한다.
4. 조각이 하나밖에 남지 않은 경우, 혹은 하나라도 남지 않은 경우에는 답을 생성했으므로, 이것을 기저 사례로 선택해 처리한다.



