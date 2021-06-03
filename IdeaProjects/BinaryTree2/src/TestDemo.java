public class TestDemo {
    public static void main(String[] args) {
        BinaryTree2 binaryTree2=new BinaryTree2();
        BTnode root=binaryTree2.createtree();
        //前序遍历
        binaryTree2.preOrderTraversal(root);
        System.out.println();
        //中序遍历
        binaryTree2.inOrderTraversal(root);
        System.out.println();
        //后序遍历
        binaryTree2.postOrderTraversal(root);
        System.out.println();
        //求节点个数
        binaryTree2.getSize1(root);
        System.out.println(binaryTree2.size);
        System.out.println(binaryTree2.getSize2(root));
        //层序遍历
        binaryTree2.levelOrder(root);
        System.out.println();
        binaryTree2.cengxubianli(root);
        //第K层节点个数
        System.out.println();
        System.out.println(binaryTree2.Knumber(root, 3));
    }
}
