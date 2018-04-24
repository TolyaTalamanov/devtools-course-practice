// Copyright 2018 Gladyshev Alexey

#ifndef MODULES_STACK_INCLUDE_STACK_H_
#define MODULES_STACK_INCLUDE_STACK_H_

template <class ValType>
class TStack {
private:
    ValType* Arr;							//������ ��� �������� ������
    int size;								//������ �����
    int sp;									//��������� �� ������� �����
public:
    TStack(int _size = 1);					//�����������-�������������
    TStack(const TStack& S);				//����������� �����������
    ~TStack(void);							//����������
    
    int GetSize() { return size; }
    int GetSP() { return sp; }
    
    int IsEmpty(void);						//�������� �������
    int IsFull(void);						//�������� ������������
    void Push(ValType var);					//�������� �������� � ����
    ValType Pop(void);						//������� �������� �� �����
    
    TStack& operator = (const TStack& S);	//������������
    int operator == (const TStack& S);		//���������
};

#include "src\stack.cpp"

#endif
