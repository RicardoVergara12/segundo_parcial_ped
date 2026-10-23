void SwapAdjacentPairs(Node*& head) {
    if (head == nullptr || head->next == nullptr) {
        return;
    }

    Node* current = head;
    head = head->next;

    while (current != nullptr && current->next != nullptr) {
        Node* first = current;
        Node* second = current->next;

        Node* prevNode = first->prev;
        Node* nextPair = second->next;

        second->prev = prevNode;
        if (prevNode != nullptr) {
            prevNode->next = second;
        }

        second->next = first;
        first->prev = second;

        first->next = nextPair;
        if (nextPair != nullptr) {
            nextPair->prev = first;
        }

        current = nextPair;
    }
}