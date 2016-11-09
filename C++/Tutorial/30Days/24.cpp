          Node* removeDuplicates(Node *head)
          {
            // data is sorted
            auto first = head;
              while(first != nullptr) {
                  int val = first->data;
                  auto dups = first->next;
                  while(dups != nullptr) {
                      // is this dupe?
                      if(dups->data != val) {
                          // this node is the new head, and bail
                          first->next = dups;
                          break;
                      }
                      // delete this node, fix up the first's next pointer and move to the next one
                      auto del = dups;
                      dups = dups->next;
                      delete del;
                      first->next = dups;
                  }
                  // go to next one
                  first = first->next;
              }
              
              return head; // head is never changing
          }