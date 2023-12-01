// Implementation of a red-black tree 
// Both the buy and the sell side use their own tree

// Color of each node in the tree
enum color {
    RED,
    BLACK,
};

// Node of a red black tree
struct RBnode {
    // The parent of this node
    RBnode *parent; // the parent node
    // The children of this node
    // - NULL if this is a leaf node
    // - child[0] is the left node where key < parent->key
    // - child[1] is the right node where key > parent->key
    RBnode *child[2]; // the children nodes, NULL if this is a leaf node
    // the color of the node
    enum color color; 
    // the value that the node holds
    int key;
};

// A red black tree
class RBtree {
public:
    // the root of the red black tree
    RBnode *root;

    // the constructor for the red black tree
    RBtree(RBnode *root);
    ~RBtree();

    // Public member functions
    RBnode *rotateDirRoot(RBtree*, RBnode*, int dir);
    void RBinsert(RBtree*, RBnode*, RBnode*, int dir);
    void RBdelete(RBtree*, RBnode*);
};

