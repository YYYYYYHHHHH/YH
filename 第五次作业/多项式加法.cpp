#include<stdio.h>
#include<stdlib.h>
#include<iostream>
using namespace std;
typedef struct _Node{//_polynomial ����ʽ 
	float coef;//����ʽ��ϵ�� 
	int expn;//����ʽ��ָ��  ����coef=3 expa=2 ����3x^3 
	struct _Node* next;
}Node,*polynomial;
void create(polynomial pl, int n);
void print(polynomial p);
void addPolynomial(polynomial pl1, polynomial pl2); 
int main(){
	//��������ʽ1
	polynomial pl1 = new Node;
	pl1->next = NULL; 
	create(pl1,5);
	cout<<"����ʽ1:";
	print(pl1);
	
	//��������ʽ2
	polynomial pl2 = new Node;
	pl2->next = NULL; 
	create(pl2,5);
	cout<<"����ʽ2:";
	print(pl2);
	addPolynomial(pl1,pl2);
	cout<<"�ϲ���Ķ���ʽΪ��";
	print(pl1); 
	return 0;
}
//ʵ�ֶ���ʽ���  pl1Ϊ�����ӵĽ�� 
void addPolynomial(polynomial pl1, polynomial pl2){
	polynomial pa = pl1->next, pb = pl2->next, pc = pl1, pre;
	while(pa,pb){
		if(pa->expn == pb->expn){//���ָ����ͬ
			float sumCoef = pa->coef + pb->coef; 
			if(sumCoef != 0){//���ϵ����Ӳ�Ϊ0  
				pa->coef = sumCoef;
				pc->next = pa;
				pc = pa;
				pa = pa->next;
				pre = pb;
				pb = pb->next;
				delete pre; 
			} else{
				pre = pa;
				pa = pa->next;
				delete pre;
				pre = pb;
				pb = pb->next;
				delete pre;
			}
		} else if(pa->expn > pb->expn){//pa��ָ������pb��ָ�� 
			pc->next = pb;
			pc = pb;
			pb = pb->next;
		} else{ //pa��ָ��С��pb��ָ�� 
			pc->next = pa;
			pc = pa;
			pa = pa->next;
		}
	}
	pc->next = pa ? pa : pb;
	delete pb; 
}
//����ʽ�Ĵ���
void create(polynomial pl, int n){
	polynomial s,pre,q;
	for(int i = 0; i < n; i++){
		s = new Node;
		s->next=NULL;
		cin>>s->coef>>s->expn;
		pre = pl;
		q = pl->next;
		while(q && q->expn < s->expn){
			pre = q;
			q = q->next;
		}
		s->next = q;
		pre->next = s;
	}
}
//��ӡ����ʽ 
void print(polynomial p){
	Node *q = p->next;
	while(q){
		if(q->coef != 1){
			if(!q->next){
				cout << q->coef << "x^" << q->expn;
				break;
			}
			cout << q->coef << "x^" << q->expn << " + ";
		}else{
			if(!q->next){
				cout << "x^" << q->expn;
				break;
			}
			cout << "x^" << q->expn << " + ";
		}
		q = q->next;
	}
	cout<<"\n";
} 

 
