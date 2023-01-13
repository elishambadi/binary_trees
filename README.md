#  Binary Trees Project

### Data Structures - Basic Binary Tree

``````
/**
 * struct binary_tree_s - Binary tree node
 *
 * @n: Integer stored in the node
 * @parent: Pointer to the parent node
 * @left: Pointer to the left child node
 * @right: Pointer to the right child node
 */
struct binary_tree_s
{
    int n;
    struct binary_tree_s *parent;
    struct binary_tree_s *left;
    struct binary_tree_s *right;
};

typedef struct binary_tree_s binary_tree_t;
``````

### Data Structures - Binary Search Tree
``````
typedef struct binary_tree_s bst_t;
``````

### Data Structures - AVL Tree
``````
typedef struct binary_tree_s avl_t;
``````

### Data Structures - Max Binary Heap
``````
typedef struct binary_tree_s heap_t;
``````
