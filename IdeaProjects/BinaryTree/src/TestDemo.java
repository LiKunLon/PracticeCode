public class TestDemo {
    public static void main(String[] args) {
        BinaryTree binaryTree=new BinaryTree();
        BTnode root=binaryTree.crateTree();
        //先序遍历
        binaryTree.preOrderTraversal(root);
        System.out.println();
        //中序遍历
        binaryTree.inOrderTraversal(root);
        System.out.println();
        //后序遍历
        binaryTree.postOrderTraversal(root);
        System.out.println();
        //节点个数
        binaryTree.getSize1(root);
        System.out.println(BinaryTree.size);
        System.out.println(binaryTree.getSize2(root));
        //叶子节点个数
        binaryTree.getLeafSize1(root);
        System.out.println(BinaryTree.leafSize);
        System.out.println(binaryTree.getLeafSize2(root));
        //第k层节点个数
        System.out.println(binaryTree.getKLevelSize(root,3));
        //获取二叉树的高度
        System.out.println(binaryTree.getHeight(root));
        //层序遍历
        binaryTree.levelOrder(root);
        System.out.println("========");
        binaryTree.ceng(root);
        //非递归前序遍历
        System.out.println();
        binaryTree.preOrder(root);
        //非递归中序遍历
        System.out.println();
        binaryTree.midOrder(root);
        //非递归后序遍历
        System.out.println();
        binaryTree.Houxu(root);
    }
}
