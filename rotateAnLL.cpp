Node* findNthNode(Node* temp, int k){
     int cnt = 1;
     while(temp!=NULL){
        if(cnt == k) return temp;
        cnt++;
        temp = temp->next;
     }
     return temp;
}
Node *rotate(Node *head, int k) {
    if(head == NULL || k == 0) return head;
    Node* tail = head;
    int len = 1;
    while(tail->next != NULL){
        tail = tail->next;
        len++;
    }
    if(k % len == 0) return head;

    k = k % len;

    //attach the tail to the head
    tail->next = head;
    Node* newLastNode = findNthNode(head, len - k);

    head = newLastNode->next;
    newLastNode->next = NULL;

    return head;
}