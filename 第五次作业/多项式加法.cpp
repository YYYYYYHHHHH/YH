#include<stdio.h>
#include<stdlib.h>
#include<iostream>
using namespace std;
typedef struct _Node{//_polynomial 多项式 
	float coef;//多项式的系数 
	int expn;//多项式的指数  假如coef=3 expa=2 形如3x^3 
	struct _Node* next;
}Node,*polynomial;
void create(polynomial pl, int n);
void print(polynomial p);
void addPolynomial(polynomial pl1, polynomial pl2); 
int main(){
	//创建多项式1
	polynomial pl1 = new Node;
	pl1->next = NULL; 
	create(pl1,5);
	cout<<"多项式1:";
	print(pl1);
	
	//创建多项式2
	polynomial pl2 = new Node;
	pl2->next = NULL; 
	create(pl2,5);
	cout<<"多项式2:";
	print(pl2);
	addPolynomial(pl1,pl2);
	cout<<"合并后的多项式为：";
	print(pl1); 
	return 0;
}
//实现多项式相加  pl1为最后相加的结果 
void addPolynomial(polynomial pl1, polynomial pl2){
	polynomial pa = pl1->next, pb = pl2->next, pc = pl1, pre;
	while(pa,pb){
		if(pa->expn == pb->expn){//如果指数相同
			float sumCoef = pa->coef + pb->coef; 
			if(sumCoef != 0){//如果系数相加不为0  
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
		} else if(pa->expn > pb->expn){//pa的指数大于pb的指数 
			pc->next = pb;
			pc = pb;
			pb = pb->next;
		} else{ //pa的指数小于pb的指数 
			pc->next = pa;
			pc = pa;
			pa = pa->next;
		}
	}
	pc->next = pa ? pa : pb;
	delete pb; 
}
//多项式的创建
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
//打印多项式 
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

 
