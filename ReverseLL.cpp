Node* ReverseLinkedList(Node* &head){
    //if list is empty or consists of one node, so return same in that case
    if(head == NULL || head -> next == NULL){
        return head;
    }
    //to reverse LL, we first created two pointers
    Node* prev = NULL;
    Node* curr = head;
    //curr points to node which head points to
    //will create another pointer so we don't lose access to rest of node
    //but in beginning, it too points to NULL since we are just creating it
    Node* forward = NULL;
    //now we have to cut connection and point current node to prev
    //and we have to do this for all, and we do this till our current node is not NULL
    while(curr != NULL){
    forward = curr -> next; //store curr-> next in fwd and then point it to prev
    curr -> next = prev;
    //we need to move forward too so we cover all nodes
    prev = curr; //comes before below statement since curr is going to change
    curr = forward; //we stored next node's link here, remember?
    }
    return prev; //this is our new head
}