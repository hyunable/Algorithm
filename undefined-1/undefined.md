---
description: 이것만은 조심하자
---

# 가장 많이 하는 실수

* 시간,공간 복잡도 제약 주어졌음에도 고려하지 않고 짜서 타임오버가 난다.
* vector.size 를 for문 i 의 조건문으로 건다. \(int로 선언해 주었다면 type 에러가 난다. 반드시 캐스팅해주길!\)
* header import 누락
* **예외상황**을 고려 안함. \(performance issue\)
* 범위 고려안함.

