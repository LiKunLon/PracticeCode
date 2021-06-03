class BinarySearchTree{
    static class BSnode{
        public int val;
        public BSnode left;
        public BSnode right;
        public BSnode(int val) {
            this.val = val;
        }
        BSnode root=null;
        public boolean Search(int val){
            if(root==null)return false;
            BSnode cur=root;
            while(cur!=null){
                if(cur.val==val){
                    return true;
                }else if(cur.val>val){
                    cur=cur.left;
                }else{
                    cur=cur.right;
                }
            }
            return false;
        }
        public boolean insert(int val){
            BSnode bSnode=new BSnode(val);
            if(root==null){
                root=bSnode;
            }
            BSnode cur=root;
            BSnode parent=null;
            while(cur!=null){
                if(cur.val==val){
                    return false;
                }else if(cur.val<val){
                    parent=cur;
                    cur=cur.right;
                }else{
                    parent=cur;
                    cur=cur.left;
                }
            }
            if(parent.val<val){
                parent.left=bSnode;
            }else{
                parent.right=bSnode;
            }
            return true;
        }
        public void remove(int val){
            if(root==null)return;
            BSnode cur=root;
            BSnode parent=null;
            while(cur!=null){
                if(cur.val==val) {
                    removeNode(parent,cur,val);
                }else if(cur.val<val){
                    cur=cur.right;
                }else{
                    cur=cur.left;
                }
            }
        }
        public void removeNode(BSnode parent,BSnode cur,int val){
            if(cur.left==null){
                if(cur==root){
                    cur=root.right;
                }else if(cur==parent.left){
                    parent.left=cur.right;
                }else{
                    parent.right=cur.right;
                }
            }else if(cur.right==null){
                if(cur==root){
                    cur=root.left;
                }else if(cur==parent.left){
                    parent.left=cur.left;
                }else{
                    parent.right=cur.left;
                }
                //左右两边都不为空
            }else{
                BSnode target=cur.left;
                BSnode targetParent=cur;
                while(target.left!=null){
                    targetParent=target;
                    target=target.left;
                }
                cur.val=target.val;
                if(targetParent.left==target){
                    targetParent.left=target.left;
                }else{
                    targetParent.right=target.right;
                }
            }
        }
    }
}