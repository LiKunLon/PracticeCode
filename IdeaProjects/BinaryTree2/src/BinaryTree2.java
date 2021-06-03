import java.util.LinkedList;
import java.util.Queue;

class BTnode{
    public char val;
    public BTnode left;
    public BTnode right;
    public BTnode(char val){
        this.val=val;
    }
    public BTnode(){
    }
}
public class BinaryTree2 {
    public BTnode createtree(){
        BTnode A=new BTnode('A');
        BTnode B=new BTnode('B');
        BTnode C=new BTnode('C');
        BTnode D=new BTnode('D');
        BTnode E=new BTnode('E');
        BTnode F=new BTnode('F');
        BTnode G=new BTnode('G');
        BTnode H=new BTnode('H');
        A.left=B;
        A.right=C;
        B.left=D;
        B.right=E;
        E.right=H;
        C.left=F;
        C.right=G;
        return A;
    }
    // 前序遍历
    void preOrderTraversal(BTnode root){
        if(root==null) return;
        System.out.print(root.val+" ");
        preOrderTraversal(root.left);
        preOrderTraversal(root.right);
    }
    // 中序遍历
    void inOrderTraversal(BTnode root){
        if(root==null)return;
        inOrderTraversal(root.left);
        System.out.print(root.val+" ");
        inOrderTraversal(root.right);
    }
    // 后序遍历
    void postOrderTraversal(BTnode root){
        if(root==null)return;
        postOrderTraversal(root.left);
        postOrderTraversal(root.right);
        System.out.print(root.val+" ");
    }
    // 遍历思路-求结点个数
    static int size = 0;
    void getSize1(BTnode root){
        if(root==null)return;
        size++;
        getSize1(root.left);
        getSize1(root.right);
    }
    // 子问题思路-求结点个数
    int getSize2(BTnode root){
        if(root==null)return 0;
        return getSize2(root.left)+getSize2(root.right)+1;
    }
    // 遍历思路-求叶子结点个数
    static int leafSize = 0;
    void getLeafSize1(BTnode root){
        if(root==null)return ;
        if(root.left==null&&root.right==null){
            leafSize++;
        }
        getLeafSize2(root.left);
        getLeafSize2(root.right);
    }
    // 子问题思路-求叶子结点个数
    int getLeafSize2(BTnode root){
        if(root==null)return 0;
        if(root.left==null&&root.right==null){
            return 1;
        }
        return getLeafSize2(root.left)+getLeafSize2(root.right);
    }
    // 子问题思路-求第 k 层结点个数
    int getKLevelSize(BTnode root,int K){
        if(root==null)return 0;
        //递归过程中,K为1说明找到了这一层
        if(K==1){
            return 1;
        }
        return getKLevelSize(root.left,K-1)+getKLevelSize(root.right,K-1);
    }
    // 获取二叉树的高度
    int getHeight(BTnode root){
        return getHeight(root.left)>getHeight(root.right)?getHeight(root.left)+1:getHeight(root.right)+1;
    }
    // 查找 val 所在结点，没有找到返回 null
    // 按照 根 -> 左子树 -> 右子树的顺序进行查找
    // 一旦找到，立即返回，不需要继续在其他位置查找
    BTnode find(BTnode root, int val){
        //只要涉及查找,直接遍历
        //哪一种遍历方式都可以
        if(root==null)return null;
        if(root.val==val){
            return root;
        }
        //在左树查找,结果保存在ret1里
        BTnode ret1=find(root.left,val);
        if(ret1==null){
            return null;
        }
        //在右树查找,结果保存在ret2里
        BTnode ret2=find(root.right,val);
        if(ret2==null){
            return null;
        }
        return null;
    }
    //层序遍历
    public void levelOrder(BTnode root) {
        if(root==null)return;
        //利用队列
        Queue<BTnode> queue=new LinkedList<>();
        queue.offer(root);
        while(!queue.isEmpty()){
            BTnode cur=queue.poll();
            System.out.print(cur.val+" ");
            if(cur.left!=null){
                queue.offer(cur.left);
            }
            if(cur.right!=null){
                queue.offer(cur.right);
            }
        }
    }
    //第K层节点个数
    public int Knumber(BTnode root,int k){
        if(root==null)return 0;
        if(k==1){
            return 1;
        }
        return Knumber(root.left,k-1)+Knumber(root.right,k-1);
    }
    //层序遍历
    void cengxubianli(BTnode root){
        if(root==null)return;
        Queue<BTnode> queue=new LinkedList<>();
        queue.offer(root);
        while(!queue.isEmpty()){
            BTnode cur=queue.poll();
            System.out.print(cur.val+" ");
            if(cur.left!=null){
                queue.offer(cur.left);
            }
            if(cur.right!=null){
                queue.offer(cur.right);
            }
        }
    }
}
