	void levelOrder(Node * root){
        if(root == nullptr)
            return;
        
        queue<Node*> q;
        
        // start from top level
        q.push(root);
        
        while(!q.empty()) {
            // pop
            auto node = q.front();
            q.pop();
            
            // skip if empty
            if (node == nullptr) 
                continue;
            
            // print this
            cout << node->data << " ";
            
            // add child
            q.push(node->left);
            q.push(node->right);
        }
  
	}