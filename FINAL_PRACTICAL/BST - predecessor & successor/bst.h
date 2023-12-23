#include "mybinarytree.h"

class BST {
	BinaryTree* tree = new MyBinaryTree();

	public:
	bool search(int num) {
		return search_node(tree->getRoot(), num);
	}

	bool search_node(node* n, int num) {
		if (n == NULL) {
			return false;
		}
		if (n->elem == num) {
			return true;
		}
		if (num > n->elem) {
			return search_node(n->right, num);
		} else {
			return search_node(n->left, num);
		}
	}

	bool insert(int num) {
		node* n = tree->getRoot();
		if (n == NULL) {
			tree->addRoot(num);
		}
		return insert_node(n, num);
	}

	bool insert_node(node* n, int num) {
		if (n == NULL) {
			return false;
		}
		if (n->elem == num) {
			return false;
		}
		if (num > n->elem) {
			if (!n->right) {
				tree->addRight(n, num);
				return true;
			} else {
				return insert_node(n->right, num);
			}
		} else {
			if (!n->left) {
				tree->addLeft(n, num);
				return true;
			} else {
				return insert_node(n->left, num);
			}
		}
	}

    // TODO predecessor
    int predecessor(int num) {
        node* cur = tree->getRoot();
        node* pred = NULL;

        while (cur != NULL) {
            if (num > cur->elem) {
                pred = cur;
                cur = cur->right;
            } else {
                cur = cur->left;
            }
        }

        return (pred == nullptr) ? -1 : pred->elem;
        
    }

    // TODO successor
    int successor(int num) {
        node* curr = tree->getRoot();
        node* succ = NULL;

        while (curr != NULL) {
            if (num < curr->elem) {
                succ = curr;
                curr = curr->left;
            } else {
                curr = curr->right;
            }
        }

        return (succ == NULL) ? -1 : succ->elem;

    }

	void print() {
		tree->print();
	}
};