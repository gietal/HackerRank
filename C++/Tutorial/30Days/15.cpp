      Node* insert(Node *head,int data)
      {
          auto originalHead = head;
          auto newNode = new Node(data);
          
          if(head == NULL)
              return newNode;
          
          while(head->next != NULL) {
              head = head->next;
          }
          
          head->next = newNode;
          return originalHead;
      }