# Linked List

**리스트**는 배열과 같이 데이터 집합을 보관하는 기능을 갖지만 <u>유연하게 크기를 바꿀 수 있는 자료구조</u>이다.

**링크드 리스트(Linked List)**는 리스트를 구현하는 여러 가지 기법 중에서도 가장 간단한 방법으로 꼽히는 자료구조이다. 



<br>



## 노드(Node)

---

리스트를 이루는 요소를 뜻한다. 데이터와 다음 노드에 대한 주솟값을 가리키는 포인터로 이루어져 있다.



![node](http://btechsmartclass.com/DS/images/LL%20Node.png)



<br>

이 노드들을 사슬처럼 엮으면 **링크드 리스트**가 된다.

![node](https://qph.fs.quoracdn.net/main-qimg-9c72477fc5e5a40af33662e5f3682178)

리스트의 가장 앞에 있는 노드를 **헤드(head)** , 가장 마지막에 있는 노드를 **테일(tail)** 이라고 한다.



<br>



## 링크드 리스트의 주요 연산

- 노드 생성/소멸
- 노드 추가
- 노드 탐색
- 노드 삭제
- 노드 삽입



<br>



### 노드생성/소멸

---

C/C++ 언어로 작성된 프로그램은 세 가지 메모리 영역을 가진다. 

- 정적 메모리(Static Memory) : 전역 변수, 정적 변수 등이 저장되는 메모리. 프로그램이 종료될 때 해제된다.
- 자동 메모리(Automatic Memory) : 지역 변수가 저장되는 메모리. 코드블록이 종료되면 해제된다.
- 자유 저장소(Free store) 
