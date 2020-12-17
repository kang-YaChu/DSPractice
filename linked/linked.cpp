#include <iostream>

#include "linked.h"

/**
 *  �ͦ����w���ת� Linked List�C�`�I���e�w�]���� 0 �}�l���y�����C
 *
 *  @param  len:    �n�ͦ��� Linked List ������
 **/
Linked::Linked(int len) {
    head = new Node();

    Node *node = head;

    for (int i = 0; i < len; i ++) {
        node->next = new Node();

        node = node->next;

        node->data = i;
        node->next = nullptr;
    }
} // List::List()

/**
 *  ���� Linked List�A
 *
 *  @param  none.
 **/
Linked::~Linked() {
    while (head->next != nullptr) {
        Node *dummy = head;

        head = head->next;
        delete dummy;    // ����O����
    }

    delete head; // ����̫�@�Ӹ`�I
} // List::~List()

/**
 *  �b Linked List �̫᭱�A�W�[�@�Ӹ`�I�C
 *
 *  @param  data:   ��b�s�W�`�I����ƭ�
 *  @return none.
 **/
void Linked::append_data(int data) {
	Node *node = head;
    while (node->next != nullptr) {
        node = node->next;
    }

    node->next = new Node();
    						
    node->next->data = data;
    node->next->next = nullptr;
} // Linked::append_data()

/**
 *  �j�M Linked List ��, �O�_���S�w�Ȧs�b�C
 *
 *  @param  data:   �n�j�M���`�I��ƭ�
 *  @return bool:   true  ��Ʀs�b Linked List ��
 *                  false ��� '��' �s�b Linked List ��
 **/
bool Linked::contain_data(int data) {
    Node *node = head;
    bool found = false;

    while (node->next != nullptr) {
        node = node->next;

        if (node->data == data) {
            found = true;

            break;
        }
    }

    return found;
} // Linked::contain_data()

/**
 *  �b Linked List *����* �֦��S�w�Ȫ� *�Ĥ@��* �`�I�C
 *
 *  @param  data:   �n�������`�I��ƭ�
 *  @return none.
 **/
void Linked::remove_data(int data) {
    Node *node = head;
    while (node->next != nullptr) {
        Node *dummy = node->next;
        
        if (dummy->data == data) {
            node->next = dummy->next;
            delete dummy;
            break;
        }
        node = node->next;
    }
} // Linked::remove_data()

/**
 *  �N Linked List ���e *�ɦL* (dump) �b�ù��W�C
 *
 *  @param  none.
 *  @return none.
 **/
void Linked::dump_list() {
    std::cout << "  Linked List:" << std::endl;
    std::cout << "    ";

    Node *node = head;

    while (node->next != nullptr) {
        node = node->next;

        std::cout << "[" << node->data << "] -> ";
    }

    std::cout << "$" << std::endl;
} // Linked::dump_list()
// linked.cpp
