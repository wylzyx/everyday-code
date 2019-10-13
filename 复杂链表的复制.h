#pragma once

typedef struct RNode {
	int val;
	strcut RNode* random;
	struct RNode* next;
} RNode ;

RNode* Copy(RNode* head) {
	//�ֿ�������
	//��һ��,ֻ���� ����е� value �� next, ���½������Ͻ�����
	//�ڶ���,�ٴ��� random �ĸ���
	//������,������������
	if (head == NULL) {
		return NULL;
	}

	RNode* oldNode = head;
	while (oldNode != NULL) {
		RNode* newNode = (RNode*)malloc(sizeof(RNode));
		newNode->value = oldNode->value;

		RNode* oldNext = oldNode->next;
		newNode->next = oldNext;
		oldNode->next = newNode;

		oldNode = oldNext;
	}

	oldNode = head;
	while (oldNode != NULL) {
		RNode* newNode = oldNode->next;

		if (oldNode->random == NULL) {
			newNode->random = NULL;
		}
		else {
			newNode->random = oldNode->random->next;
		}

		oldNode = newNode->next;
	}
	
	oldNode = head;
	RNode* newHead = head->next;
	while (oldNode != NULL) {
		RNode* newHead = oldNode->next;
	}
}