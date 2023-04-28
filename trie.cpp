// #include<bits/stdc++.h>
// using namespace std ;

//  class node{
//     public:
//      int 

//  };





// //  struct Node{
// //     char data;
// //      struct Node *children[26];
// //     bool eow;
// //  };

// //  TrieNode* make_trienode(char data) {
// //     // Allocate memory for a TrieNode
// //     TrieNode* node = (TrieNode*) calloc (1, sizeof(TrieNode));
// //     for (int i=0; i<N; i++)
// //         node->children[i] = NULL;
// //     node->is_leaf = 0;
// //     node->data = data;
// //     return node;
// // }

// //   Node *rootNode(int data){
// //     Node *child = new Node();
// //     for(int i=0;i<26;i++){
// //         child->children[i]=NULL;
// //     }
// //     child->eow = false;
// //     child->data = data; 

// //   } 



//  int main(){
//     return 0;
//  }














// // C++ implementation of search and insert
// // operations on Trie
// #include <bits/stdc++.h>
// using namespace std;

// const int ALPHABET_SIZE = 26;

// // trie node
// struct TrieNode
// {
// 	struct TrieNode *children[ALPHABET_SIZE];

// 	// isEndOfWord is true if the node represents
// 	// end of a word
// 	bool isEndOfWord;
// };

// // Returns new trie node (initialized to NULLs)
// struct TrieNode *getNode(void)
// {
// 	struct TrieNode *pNode = new TrieNode;

// 	pNode->isEndOfWord = false;

// 	for (int i = 0; i < ALPHABET_SIZE; i++)
// 		pNode->children[i] = NULL;

// 	return pNode;
// }

// // If not present, inserts key into trie
// // If the key is prefix of trie node, just
// // marks leaf node
// void insert(struct TrieNode *root, string key)
// {
// 	struct TrieNode *pCrawl = root;

// 	for (int i = 0; i < key.length(); i++)
// 	{
// 		int index = key[i] - 'a';
// 		if (!pCrawl->children[index])
// 			pCrawl->children[index] = getNode();

// 		pCrawl = pCrawl->children[index];
// 	}

// 	// mark last node as leaf
// 	pCrawl->isEndOfWord = true;
// }

// // Returns true if key presents in trie, else
// // false
// bool search(struct TrieNode *root, string key)
// {
// 	struct TrieNode *pCrawl = root;

// 	for (int i = 0; i < key.length(); i++)
// 	{
// 		int index = key[i] - 'a';
// 		if (!pCrawl->children[index])
// 			return false;

// 		pCrawl = pCrawl->children[index];
// 	}

// 	return (pCrawl->isEndOfWord);
// }

// // Driver
// int main()
// {
// 	// Input keys (use only 'a' through 'z'
// 	// and lower case)
// 	string keys[] = {"the", "a", "there",
// 					"answer", "any", "by",
// 					"bye", "their" };
// 	int n = sizeof(keys)/sizeof(keys[0]);

// 	struct TrieNode *root = getNode();

// 	// Construct trie
// 	for (int i = 0; i < n; i++)
// 		insert(root, keys[i]);

// 	// Search for different keys
// 	char output[][32] = {"Not present in trie", "Present in trie"};

// 	// Search for different keys
// 	cout<<"the"<<" --- "<<output[search(root, "the")]<<endl;
// 	cout<<"these"<<" --- "<<output[search(root, "these")]<<endl;
// 	cout<<"their"<<" --- "<<output[search(root, "their")]<<endl;
// 	cout<<"thaw"<<" --- "<<output[search(root, "thaw")]<<endl;
// 	return 0;
// }


//  #include<bits/stdc++.h>
//  using namespace std;
//  // define data type 
//  struct trie{
//     struct trie *children[26];
//     bool eow;
// };

// // create newtrie node and assign value , when it created 
// struct trie *newtrie(){
//     struct trie *pnode = new trie;
//     bool eow = false;
//     for(int i=0;i<26;i++){
//         pnode->children[i]= NULL;
//     }
//     return pnode;
// }


// // insert  build
// // Find 
//  void insert(struct trie* root , string key ){
//     for(int i=0;i<key.length();i++) {
//         int index = key[i]- 'a';
//         if(root->children[index]!=NULL){
//             root->children[index]= newtrie();
//             // return false ;
//         }
//         root= root->children[index];
//     }
// // mark last node as leaf 
//  root->eow= true;

//  // RETURN
//  // return (proot->eow);
//  }
#include <bits/stdc++.h>
using namespace std;
int main() {
    // Write C++ code here
     cout<<"start"<<endl;
     
    while(true){
     
        string s1;
        cin>>s1;
        transform(s1.begin(), s1.end(), s1.begin(), ::toupper);
      //   s1.upper();
        cout<<s1<<endl;
    }

    return 0;
}