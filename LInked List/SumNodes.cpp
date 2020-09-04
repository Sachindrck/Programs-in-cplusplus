// Sum of Nodes in Linked list

void SumNodes()                          // T.C - O(n) and S.C - O(1)
    {
        int sum = 0;
        Node *temp = head;

        while (temp != NULL)
        {
            sum += temp->data;
            temp = temp->next;
        }

        cout << "\nSum of Nodes is: " << sum << endl;
    }