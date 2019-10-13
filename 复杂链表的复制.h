#pragma once

typedef struct RNode {
	int val;
	strcut RNode* random;
	struct RNode* next;
} RNode ;

RNode* Copy(RNode* head) {
	//分开两步走
	//第一步,只复制 结点中的 value 和 next, 让新结点跟在老结点后面
	//第二步,再处理 random 的复制
	//第三步,把链表拆成两个
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