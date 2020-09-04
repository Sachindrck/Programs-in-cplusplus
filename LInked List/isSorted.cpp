// To check if the Linked list is sorted or not.

int isSorted()
    {
        int x = INT_MIN;
        Node *temp = head;

        while (temp != NULL)
        {
            if (temp->data < x)
                return 0;
            x = temp->data;
            temp = temp->next;
        }
        return 1;
    }