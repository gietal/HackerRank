		int getHeight(Node* root){
            if(root == nullptr)
                return 0;
            
            // if leaf
            if(root->left == nullptr && root->right == nullptr)
                return 0;
            
            // child height + my height
            return max(getHeight(root->left), getHeight(root->right)) + 1;
        }

