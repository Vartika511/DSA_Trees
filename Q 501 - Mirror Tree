import java.io.BufferedReader;

import java.io.InputStreamReader;

import java.util.*;

class Solution {

    public static void main(String args[] ) throws Exception {

        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));

        String line = br.readLine();

        String[] initChar = line.split(" ");

        int N = Integer.parseInt(initChar[0]);

        Map<Integer, Node> nodeMap = new HashMap<>();

        Map<Integer, Node> nodeMap1 = new HashMap<>();

        for (int i = 0; i < N - 1; i++) {

           String[] strArr = br.readLine().split(" ");

           Integer parent = Integer.parseInt(strArr[0]);

           Integer child = Integer.parseInt(strArr[1]);

           if(strArr[2].equals("R")){

               populateMapForRightNode(parent,child,nodeMap);

           }else{

               populateMapForLeftNode(parent,child,nodeMap);

           }

        }

        for (int i = 0; i < N - 1; i++) {

           String[] strArr = br.readLine().split(" ");

           Integer parent = Integer.parseInt(strArr[0]);

           Integer child = Integer.parseInt(strArr[1]);

           if(strArr[2].equals("R")){

               populateMapForRightNode(parent,child,nodeMap1);

           }else{

               populateMapForLeftNode(parent,child,nodeMap1);

           }

        }

        Node root = nodeMap.get(1);

        nodeMap=null;

        Node root1 = nodeMap1.get(1);

        nodeMap1=null;

        boolean isMirrorBinaryTrees = isMirrorTree(root,root1);

        if(isMirrorBinaryTrees)

            System.out.printf("yes");

        else

            System.out.printf("no");

       

    }  

    public static boolean isMirrorTree(Node tree, Node mirrorTree) {

        if( null == tree && null == mirrorTree) 

            return true;

         

        if( null == tree || null == mirrorTree) 

            return false;

         

        if(tree.item != mirrorTree.item)

            return false;

         

        if(false == isMirrorTree(tree.left,mirrorTree.right))

            return false;

         

        if(false ==  isMirrorTree(tree.right,mirrorTree.left))

            return false;

         

        return true;

    }

    private static void populateMapForRightNode(Integer parent,Integer child,Map<Integer, Node> nodeMap){

        if(nodeMap.get(parent)==null){

            Node node = new Node(parent);

            node.right = new Node(child);

            nodeMap.put(parent,node);

            nodeMap.put(child,node.right);

        }else{

            Node node = nodeMap.get(parent);

            node.right = new Node(child);

            nodeMap.put(child,node.right);

        }

    }

    private static void populateMapForLeftNode(Integer parent,Integer child,Map<Integer, Node> nodeMap){

        if(nodeMap.get(parent)==null){

            Node node = new Node(parent);

            node.left = new Node(child);

            nodeMap.put(parent,node);

            nodeMap.put(child,node.left);

        }else{

            Node node = nodeMap.get(parent);

            node.left = new Node(child);

            nodeMap.put(child,node.left);

        }

    }

    

    private static class Node{

        public int item;

        public Node left;

        public Node right;

        public Node(int item){

            this.item = item;

        }

    }

}
