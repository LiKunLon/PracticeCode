import java.util.LinkedList;
import java.util.Queue;
import java.util.Stack;

class BTnode<T>{
    public T val;
    public BTnode left;
    public BTnode right;

    public BTnode(T val){
        this.val=val;
    }

    public BTnode() {

    }
}

public class BinaryTree {
    public BTnode crateTree(){
        BTnode<Character> A=new BTnode<>('A');
        BTnode<Character> B=new BTnode<>('B');
        BTnode<Character> C=new BTnode<>('C');
        BTnode<Character> D=new BTnode<>('D');
        BTnode<Character> E=new BTnode<>('E');
        BTnode<Character> F=new BTnode<>('F');
        BTnode<Character> G=new BTnode<>('G');
        BTnode<Character> H=new BTnode<>('H');
        A.left=B;
        A.right=C;
        B.left=D;
        B.right=E;
        E.right=H;
        C.left=F;
        C.right=G;
        return A;
    }
    // 前序遍历(根左右)
    public void preOrderTraversal(BTnode root){
        if(root==null)return;
        System.out.print(root.val+" ");
        preOrderTraversal(root.left);
        preOrderTraversal(root.right);

    }
    // 中序遍历(左根右)
    public void inOrderTraversal(BTnode root){
        if(root==null) return;
        inOrderTraversal(root.left);
        System.out.print(root.val+" ");
        inOrderTraversal(root.right);

    }
    // 后序遍历(左右根)
    public void postOrderTraversal(BTnode root){
        if(root==null)return;
        postOrderTraversal(root.left);
        postOrderTraversal(root.right);
        System.out.print(root.val+" ");

    }
    // 遍历思路-求结点个数
    static int size = 0;
    public void getSize1(BTnode root){

        if(root==null)return;
        size++;
        getSize1(root.left);
        getSize1(root.right);
        //System.out.println(size);
    }
    // 子问题思路-求结点个数
    public int getSize2(BTnode root){
        if(root==null) return 0;
        //size++;
        return getSize2(root.left)+getSize2(root.right)+1;
    }
    // 遍历思路-求叶子结点个数
    static int leafSize = 0;
    public void getLeafSize1(BTnode root){
        if(root==null)return;
        if(root.left==null&&root.right==null){
            leafSize++;
        }
        getLeafSize1(root.left);
        getLeafSize1(root.right);
    }
    // 子问题思路-求叶子结点个数
    public int getLeafSize2(BTnode root){
        if(root==null)return 0;
        if(root.left==null&&root.right==null)
            return 1;
        return getLeafSize2(root.left)+getLeafSize2(root.right);
    }
    // 子问题思路-求第 k 层结点个数
    public int getKLevelSize(BTnode root,int k){
        if(root==null)return 0;
        if(k==1){
            return 1;
        }
        return getKLevelSize(root.left,k-1)+getKLevelSize(root.right,k-1);
    }
    // 获取二叉树的高度
    public int getHeight(BTnode root){
        if(root==null)return 0;
        //同时取得左右树的高度同时+1(根节点)
        return getHeight(root.left)>getHeight(root.right)?getHeight(root.left)+1:getHeight(root.right)+1;
    }
    // 查找 val 所在结点，没有找到返回 null
    // 按照 根 -> 左子树 -> 右子树的顺序进行查找
    // 一旦找到，立即返回，不需要继续在其他位置查找
    public BTnode find(BTnode root, Object val){
        //只要涉及查找,就直接遍历
        //哪一种遍历方式都可以
        if(root==null) return null;
        if(root.val==val){
            return root;
        }
        BTnode<Character> ret=find(root.left,val);
        if(ret!=null){
            return ret;
        }
        BTnode<Character> ret2=find(root.right,val);
        if(ret2!=null){
            return ret2;
        }
        return null;
    }
    //层序遍历
    public void levelOrder(BTnode root){
        if(root==null)return;
        //利用队列
        Queue<BTnode> queue=new LinkedList<>();
        queue.offer(root);
        //如果队列不为空,抛出队头元素
        //定义一个cur记录并打印
        //再判断左右树
        while(!queue.isEmpty()){
            BTnode<Character> cur=queue.poll();
            System.out.print(cur.val+" ");
            if(cur.left!=null){
                queue.offer(cur.left);
            }
            if(cur.right!=null){
                queue.offer(cur.right);
            }
        }
    }
    //遍历
    public void Qianxubianli(BTnode root){
        if(root==null)return;
        System.out.print(root.val+" ");
        Qianxubianli(root.left);
        Qianxubianli(root.right);
    }
    public void Zhongxubianli(BTnode root){
        if(root==null)return;
        Zhongxubianli(root.left);
        System.out.print(root.val+" ");
        Zhongxubianli(root.right);
    }
    public void Houxubianli(BTnode root){
        if(root==null)return;
        Houxubianli(root.left);
        Houxubianli(root.right);
        System.out.print(root.val+" ");
    }
    // 判断一棵树是不是完全二叉树
    boolean isCompleteTree(BTnode root) {
        if(root==null)return false;
        Queue<BTnode> queue=new LinkedList<>();
        queue.offer(root);
        while(!queue.isEmpty()){
            BTnode<Character> cur=queue.poll();
            if(cur!=null){
                queue.offer(cur.left);
                queue.offer(cur.right);
            }else{
                //遇到空就停止
                break;
            }
        }
        //两种情况退出循环
        //循环条件
        //break
        while (!queue.isEmpty()){
            //依次弹出队列元素
            BTnode<Character> cur=queue.peek();
            //如果还有不为空的元素,就不是一个完全二叉树
            if(cur!=null){
                return false;
            }else {
                //元素是空,继续弹出
                queue.poll();
            }
        }
        return true;
    }
    //层序遍历
    public void Cengxubianli(BTnode root){
        if(root==null)return;
        Queue<BTnode> queue=new LinkedList<>();
        queue.offer(root);
        while(!queue.isEmpty()){
            BTnode<Character> cur=queue.poll();
            System.out.print(cur.val+" ");
            if(cur.left!=null){
                queue.offer(cur.left);
            }
            if(cur.right!=null){
                queue.offer(cur.right);
            }
        }
    }
    //非递归前序遍历
    public void preOrder(BTnode root){
        if(root==null) return;
        Stack<BTnode> stack=new Stack<>();
        //stack.push(root);
        BTnode<Character> cur=root;
        while(cur!=null || !stack.isEmpty()){
            while(cur!=null){
                stack.push(cur);
                System.out.print(cur.val+" ");
                cur=cur.left;
            }
            BTnode top=stack.pop();
            cur=top.right;
        }

    }
    //非递归中序遍历
    public void midOrder(BTnode root){
        if(root==null)return;
        Stack<BTnode> stack=new Stack<>();
        BTnode<Character> cur=root;
        while(cur!=null||!stack.isEmpty()){
            while(cur!=null){
                stack.push(cur);
                cur=cur.left;
            }
            BTnode top=stack.pop();
            System.out.print(top.val+" ");
            cur=top.right;
        }
    }

    //非递归后序遍历
    public void Houxu(BTnode root){
        if(root==null)return;
        Stack<BTnode> stack=new Stack<>();
        BTnode cur=root;
        BTnode prev=null;
        while(cur!=null||!stack.isEmpty()){
            while(cur!=null){
                stack.push(cur);
                cur=cur.left;
            }
            BTnode top=stack.peek();
            if(top.right==null||top.right==prev){
                stack.pop();
                System.out.print(top.val+" ");
                prev=top;
            }else{
                cur=top.right;
            }
        }
    }
    //层序遍历
    public void ceng(BTnode root){
        if(root==null) return;
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





    //非递归中序遍历
    public void inoderprint(BTnode root){
        if(root==null) return;
        Stack<BTnode> stack=new Stack<>();
        stack.push(root);
        BTnode cur=root;
        while(cur!=null|| !stack.isEmpty()){
            while(cur!=null){
                stack.push(cur);
                cur=cur.left;
            }
            BTnode top=stack.pop();
            System.out.print(top.val+" ");
            cur=top.right;
        }
    }

}
