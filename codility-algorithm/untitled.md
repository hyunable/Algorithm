---
description: 에라토스테네스의 채
---

# 11. Sieve of Eratosthenes

**소수를 찾는 방법**중 가장 널리 알려지고 심플한 방법중 하나이다.  
N까지의 연속된 수 중 소수만 걸러내는 에라토스테네스의 체는 아래와 같은 논리로 접근한다.

![](../.gitbook/assets/sieve_of_eratosthenes_animation.gif)

* 소수는 약수가 1과 자기 자신으로 이루어진 수이므로 2이상의 자연수부터 지워나간다.
* 2 이상의 자연수 중 체크되지 않은 가장 작은 수를 찾아 그 수의 배수들을 모두 지운다.
* 위와 같은 과정을 N-1번까지 반복한다.

```cpp
void Eratos(int n)
{
	// 배열을 동적할당 할 포인터 선언
	bool* PrimeArray;

	// 만일 n이 1보다 작거나 같으면 함수 종료
	if(n<=1) return;

	/*	2부터 n까지 n-1개를 저장할 수 있는 배열 할당
		배열 참조 번호와 소수와 일치하도록 배열의 크기는
		n+1 길이만큼 할당(인덱스 번호 0과 1은 사용하지 않음)	*/
	PrimeArray=new bool[n+1];
	/*	배열초기화
		처음엔 모두 소수로 보고 true값을 줌	*/
	for(int i=2; i<=n; i++) PrimeArray[i]=true;
	/*	에라토스테네스의 체에 맞게 소수를 구함
		만일, PrimeArray[i]가 true이면 i 이후의 i 배수는
		약수로 i를 가지고 있는 것이 되므로 i 이후의 i 배수에 대해
		false값을 준다.
		PrimeArray[i]가 false이면 i는 이미 소수가 아니므로 i의 배수 역시
		소수가 아니게 된다. 그러므로 검사할 필요도 없다.	*/
	for(int i=2; (i*i)<=n; i++)
	{
		if(PrimeArray[i])
		{
			for(int j=i*i; j<=n; j+=i) PrimeArray[j]=false;
		}
	}

	// 이후의 작업 ...

}
//from wiki
```

아래는 최적화된 방법이다.

시간 복잡도 $$O(N log log N)$$ 

```cpp
const int PN = 1000000;
 
bool isprime[PN+5];
 
void primechk(){
    for(long long i=2; i<=PN; i++) isprime[i] = true;
    for(long long i=2; i<=PN; i++)
        if(isprime[i])
            for(long long j=i*i; j<=PN; j+=i)
                isprime[j] = false;
}

//출처: http://weeklyps.com/entry/에라토스테네스의-체-소수-구하기 [weekly ps]
```

