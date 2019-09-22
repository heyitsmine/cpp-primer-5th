//
// Created by hs on 2019/9/19.
//
#include <string>

class TreeNode {
public:
    TreeNode() : value(std::string()), count(new int(1)), left(nullptr), right(nullptr) {}
    TreeNode(const TreeNode &orig) : value(orig.value), count(orig.count), left(orig.left), right(orig.right)
    {
        ++*count;
    }
    TreeNode &operator=(const TreeNode& orig)
    {
        ++*orig.count;
        if(--*count)
        {
            delete count;
            delete left;
            delete right;
        }
        count = orig.count;
        left = orig.left;
        right = orig.right;
        return *this;
    }
    ~TreeNode()
    {
        if(--*count)
        {
            delete count;
            delete left;
            delete right;
        }
    }
private:
    std::string value;
    int *count;
    TreeNode *left;
    TreeNode *right;
};

class BinStrTree {
public:
    BinStrTree() : root(new TreeNode()) {};
    BinStrTree(const BinStrTree &orig):root(new TreeNode(*orig.root)) {};
    BinStrTree &operator=(const BinStrTree &orig)
    {
        TreeNode *new_root = new TreeNode(*orig.root);
        delete root;
        root = new_root;
        return *this;
    }
    ~BinStrTree()
    {
        delete root;
    }
private:
    TreeNode *root;
};
