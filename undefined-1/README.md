# ⎔ 문제 해결 방법

## 알고리즘 문제 해결 과정

### Step1. 문제를 읽고 이해하기

조급한 마음으로 입출력 예제르 ㄹ보고 문제가 원하는 것을 유추하지 말자.   
문제 설명을 공격적으로 읽고 문제가 원하는 바를 완전히 이해하는 것이 가장 중요하다.

### Step2. 재정의와 추상화

문제를 내가 다루기 쉬운 개념을 이용해서 나만의 언어로 풀어 쓰는 것이다.   
또한 본질은 남겨두고 축약하여 다루기 쉽게 추상화 하는 것이 중요하다.

### Step3. 계획 세우기

문제를 어떤 방식으로 해결할지 결정하고, 사용할 알고리즘과 자료구조를 선택한다.

### Step4. 계획 검증하기

우리가 설계한 알고리즘이 모든 경우에 요구 조건을 정확히 수행하는지를 증명하고, 수행에 걸리는 시간과 사용하는 메모리가 문제의 제한 내에 들어가는지 확인해야 한다.

### Step5. 계획 수행하기

프로그램을 작성한다.

### Step6. 회고하기

당장 직접적은 영향은 없지만, 장기적으로 가장 큰 영향을 미치는 단계가 바로 회고단계다.  
효과적으로 회고를 수행하는 가장 좋은 방법은 문제를 풀 때마다 코드와 함께 자신의 경험을 기록으로 남기는 것이다.  
두번째로 좋은 방법은 같은 문제를 _다른사람이 푼 코드_를 보는 것이다.

### 문제를 풀지 못했을 때

초반에는 너무 한 문제에 매달려 있지 말자.   
자신이 정해둔 일정 시간이 지남에도 해답을 찾지 못할 때는 다른 사람의 소스 코드나 풀이를 참조한다. 이런 원칙을 세우고 지키는 것이 좋다.



## 좋은 코드를 짜기 위한 원칙

* 간결한 코드 작성하기
* 적극적으로 코드 재사용하기
* 표준 라이브러리 공부하기
* 항상 같은 형태로 프로그램을 작성하기
* 일관적이고 명료한 명명법 사용하기
* 로직 데이터를 분리하기

##  자주하는 실수

### 산술 overflow

가장 많이 하는 실수가 변수의 표현 범위를 벗어나는 값을 사용하는 산술 오버플로우다.  
변수의 범위를 잘 파악하고 알맞는 변수 type을 지정해 주어야 한다.

### 배열 범위 밖의 원소에 접근

배열의 원소에 접근할때 C/C++은 인덱스가 배열 범위에 있는지 따로 체크해주지 않는다.따라서 범위의 시작과 끝을 잘 파악해서 접근해야한다

### 일관되지 않은 범위 표현 방식 사용하기

배열의 잘못된 인덱스 접근의 원인중 하나는 프로그램 내에서 여러 가지 범위 표현 방식을 섞어 쓰는 경우이다. 

### 스택 오버플로

프로그램 실행 중 콜 스택이 오버플로해서 프로그램이 강제 종료되는 경우가 있다.  
스택 오버플로는 대개 재귀 호출의 깊이가 너무 깊어져서 오는 경우가 많다.   
C++의 경우 지역 변수로 선언한 배열이나 클래스 인스턴스가 기본적으로 스택 메모리를 사용하기 때문에 특히나 스택 오버플로를 조심해야 한다.   
따라서 힙에 메모리를 할당하는 STL 컨테이너를 사용하거나 전역 변수를 사용한다.

### 그 외 실수들

* 컴파일러가 잡을 수 없는 상수 오타
* off-by-one 오류
* 다차원 배열 인덱스 순서 바꿔 쓰기

### 

