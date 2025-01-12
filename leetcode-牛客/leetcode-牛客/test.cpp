#define _CRT_SECURE_NO_WARNINGS 1;
#include<iostream>
#include<string>
#include<vector>
#include<list>
#include<stack>
#include<assert.h>
#include<deque>
#include <algorithm> //sort
using namespace std;

//int main() {
//	int n;
//	cin >> n;
//	double sum = 1.0000 / 5;
//	vector<double> v(n + 1);
//	v[0] = sum;
//	for (int i = 1; i <= n; i++) {
//		if (i % 2 == 1)
//			v[i] = (1.0000 / (5 * (2 * i)));
//		else
//			v[i] = (1.0000 / (5 * (2 * i - 1)));
//	}
//	for (int i = 1; i < v.size(); i++) {
//		if (i % 2 == 0)
//			sum += v[i];
//		else
//			sum -= v[i];
//	}
//	printf("%.4f", sum);
//	return 0;
//}
//
//int main() {
//	double N, M;
//	cin >> N >> M;
//	double X, Y;
//	cin >> X >> Y;
//	vector<vector<double>> v(M, vector<double>(3));
//	for (int i = 0; i < M; i++) {
//		for (int j = 0; j < 2; j++) {
//			cin >> v[i][j];
//			if (j == 1) {
//				v[i][2] = sqrt((v[i][0] - X)*(v[i][0] - X) + (v[i][1] - Y)*(v[i][1] - Y));
//			}
//		}
//	}
//	double min = v[0][2];
//	for (int i = 1; i < M; i++) {
//		if (v[i][2] < min) {
//			min = v[i][2];
//		}
//	}
//	cout << min / N << endl;
//	return 0;
//}














//矩形覆盖 -- https://www.nowcoder.com/practice/72a5a919508a4251859fb2cfb987a0e6?tpId=13&&tqId=11163&rp=1&ru=/ta/coding-interviews&qru=/ta/coding-interviews/question-ranking

//class Solution {
//public:
//	int rectCover(int number) {
//		if (number == 0)
//			return 0;
//		if (number == 1)
//			return 1;
//		if (number == 2)
//			return 2;
//		return rectCover(number - 1) + rectCover(number - 2);
//	}
//};

//牛客 -- 从尾到头打印链表 https://www.nowcoder.com/practice/d0267f7f55b3412ba93bd35cfa8e8035?tpId=13&&tqId=11156&rp=1&ru=/ta/coding-interviews&qru=/ta/coding-interviews/question-ranking

/**
*  struct ListNode {
*        int val;
*        struct ListNode *next;
*        ListNode(int x) :
*              val(x), next(NULL) {
*        }
*  };
*/
//class Solution {
//public:
//	vector<int> printListFromTailToHead(ListNode* head) {
//		stack<int> st;
//		vector<int> v;
//		while (head) {
//			st.push(head->val);
//			head = head->next;
//		}
//		while (!st.empty()) {
//			v.push_back(st.top());
//			st.pop();
//		}
//		return v;
//		/*vector<int> v;
//		ListNode* p = NULL;
//		ListNode* q = head;
//		ListNode* s = head;
//		while(s){
//			while(q->next!=p&&q){
//				q=q->next;
//			}
//			v.push_back(q->val);
//			p = q;
//			q = head;
//			s = s->next;
//		}
//		return v;*/
//	}
//};
//
////牛客 --空格替换 https://www.nowcoder.com/practice/4060ac7e3e404ad1a894ef3e17650423?tpId=13&&tqId=11155&rp=1&ru=/ta/coding-interviews&qru=/ta/coding-interviews/question-ranking
//
//class Solution {
//public:
//	void replaceSpace(char *str, int length) {
//		string s;
//		int i = 0;
//		while (length--) {
//			if (str[i] != ' ')
//				s += str[i];
//			else
//				s += "%20";
//			i++;
//		}
//		for (int i = 0; i < s.size(); i++) {
//			str[i] = s[i];
//		}
//	}
//};
//
////牛客 -- 二维数组的查找 https://www.nowcoder.com/practice/abc3fe2ce8e146608e868a70efebf62e?tpId=13&&tqId=11154&rp=1&ru=/ta/coding-interviews&qru=/ta/coding-interviews/question-ranking
//class Solution {
//public:
//	bool Find(int target, vector<vector<int> > array) {
//		if (array.size() == 0)
//			return false;
//		int i = 0;
//		int j = array[0].size() - 1;
//		while (i < array.size() && j >= 0) {
//			if (array[i][j] == target)
//				return true;
//			if (array[i][j] > target)
//				j--;
//			if (array[i][j] < target)
//				i++;
//		}
//		return false;
//	}
//};

// 模拟考试
//int main() {
//	int n = 0;
//	vector<int> v(n);
//	int sum = 0;
//	int x = 0;
//	int count = 0;
//	for (int i = 0; i < n; i++) {
//		cin >> v[i];
//		sum += v[i];
//	}
//	if (sum%n != 0) {
//		cout << -1 << endl;
//	}
//	else {
//		int a = sum / n;
//		for (int i = 0; i < n; i++) {
//			while (v[i] < a) {
//				v[i] += 2;
//				count++;
//			}
//			while (v[i] > a) {
//				v[i] -= 2;
//			}
//		}
//		cout << count << endl;
//	}
//	return 0;
//}
//
//int main() {
//	string s1;
//	string s2;
//	getline(cin, s1);
//	getline(cin, s2);
//	int begin = 0;
//	int end = s2.size();
//	int count = 0;
//	while (end <= s1.size()) {
//		string s3(s1.begin() + begin, s1.begin() + end);
//		if (s2 == s3)
//			count++;
//		begin++;
//		end++;
//	}
//	cout << count << endl;
//	return 0;
//}

////牛客 -- 扑克牌顺子 https://www.nowcoder.com/practice/762836f4d43d43ca9deb273b3de8e1f4?tpId=13&&tqId=11198&rp=1&ru=/ta/coding-interviews&qru=/ta/coding-interviews/question-ranking
//class Solution {
//public:
//	bool IsContinuous(vector<int> numbers) {
//		if (numbers.size() < 5)
//			return false;
//		vector<int> v(14, 0);
//		sort(numbers.begin(), numbers.end());
//		for (int i = 0; i < numbers.size(); i++) {
//			if (numbers[i] == 0) {
//				numbers.erase(numbers.begin());
//				i--;
//			}
//			else {
//				if (v[numbers[i]] != 0)
//					return false;
//				v[numbers[i]]++;
//			}
//		}
//		if (numbers[numbers.size() - 1] - numbers[0] <= 4)
//			return true;
//		return false;
//	}
//};
//
////牛客 --- 包含min函数的栈 https://www.nowcoder.com/practice/4c776177d2c04c2494f2555c9fcc1e49?tpId=13&&tqId=11173&rp=1&ru=/ta/coding-interviews&qru=/ta/coding-interviews/question-ranking
//class Solution {
//public:
//	stack<int> s;
//	stack<int> sm;
//	void push(int value) {
//		s.push(value);
//		if (sm.empty())
//			sm.push(value);
//		if (sm.top() > value)
//			sm.push(value);
//	}
//	void pop() {
//		if (sm.top() == s.top())
//			sm.pop();
//		s.pop();
//	}
//	int top() {
//		return s.top();
//	}
//	int min() {
//		return sm.top();
//	}
//};
//
////牛客 --- 平衡二叉树 https://www.nowcoder.com/practice/8b3b95850edb4115918ecebdf1b4d222?tpId=13&&tqId=11192&rp=1&ru=/ta/coding-interviews&qru=/ta/coding-interviews/question-ranking
//class Solution {
//public:
//	bool IsBalanced_Solution(TreeNode* pRoot) {
//		if (pRoot == NULL)
//			return true;
//		int lefthigh = gethigh(pRoot->left);
//		int righthigh = gethigh(pRoot->right);
//		if (lefthigh - righthigh > 1 || lefthigh - righthigh < -1)
//			return false;
//		IsBalanced_Solution(pRoot->left);
//		IsBalanced_Solution(pRoot->right);
//		return true;
//	}
//	int gethigh(TreeNode* p) {
//		if (p == NULL)
//			return 0;
//		return gethigh(p->left) > gethigh(p->right) ? gethigh(p->left) + 1 : gethigh(p->right) + 1;
//	}
//};
//
////牛客 --- 调整数组使奇数位于偶数之前 https://www.nowcoder.com/practice/beb5aa231adc45b2a5dcc5b62c93f593?tpId=13&&tqId=11166&rp=1&ru=/ta/coding-interviews&qru=/ta/coding-interviews/question-ranking
//class Solution {
//public:
//	void reOrderArray(vector<int> &array) {
//		/*int begin = 0;
//		int end = array.size()-1;
//		while(begin<end){
//			while(array[begin]%2!=0&&begin<end)
//				begin++;
//			while(array[end]%2==0&&begin<end)
//				end--;
//			int tmp = array[begin];
//			array[begin] = array[end];
//			array[end] = tmp;
//		}*/
//		vector<int> tmp;
//		for (int i = 0; i < array.size(); i++) {
//			if (array[i] % 2 != 0)
//				tmp.push_back(array[i]);
//		}
//		for (int i = 0; i < array.size(); i++) {
//			if (array[i] % 2 == 0)
//				tmp.push_back(array[i]);
//		}
//		array = tmp;
//	}
//};

//牛客 --- 和为S的两个数 https://www.nowcoder.com/practice/390da4f7a00f44bea7c2f3d19491311b?tpId=13&&tqId=11195&rp=1&ru=/ta/coding-interviews&qru=/ta/coding-interviews/question-ranking
//class Solution {
//public:
//	vector<int> FindNumbersWithSum(vector<int> array, int sum) {
//		vector<int> v1;
//		if (array.size() == 0)
//			return v1;
//		for (int i = 0; i < array.size() / 2; i++) {
//			int a = sum - array[i];
//			vector<int>::iterator it = find(array.begin(), array.end(), a);
//			if (it != array.end()) {
//				v1.push_back(array[i]);
//				v1.push_back(*it);
//				break;
//			}
//		}
//		if (v1.size() == 0)
//			return v1;
//		return v1;
//		/*vector<int> v1;
//		int min = 0;
//		for(int i=0;i<v.size();i++){
//			if(min>(v[i][0] * v[i][1]))
//				min = v[i][0] * v[i][1];
//			v1.push_back(v[i][0] * v[i][1]);
//		}
//		int j = 0;
//		for(;j<v1.size();j++){
//			if(v1[j]==min)
//				break;
//		}
//		return v[j];*/
//	}
//};
//牛客 --- 求1+2+3+...+n https://www.nowcoder.com/practice/7a0da8fc483247ff8800059e12d7caf1?tpId=13&&tqId=11200&rp=1&ru=/ta/coding-interviews&qru=/ta/coding-interviews/question-ranking

//class Solution {
//public:
//	int Sum_Solution(int n) {
//		if (n == 0)
//			return 0;
//		return n + Sum_Solution(n - 1);
//	}
//};


//牛客 --- 把字符串转换为整数 https://www.nowcoder.com/practice/1277c681251b4372bdef344468e4f26e?tpId=13&&tqId=11202&rp=1&ru=/ta/coding-interviews&qru=/ta/coding-interviews/question-ranking
//int StrToInt(string str) {
//	if (str.size() == 0) {
//		return 0;
//	}
//	int falg = 0;
//	while (str[0] == ' ')
//		str.erase(str.begin());
//	if (str[0] == '-') {
//		falg == 1;
//		str.erase(str.begin());
//	}
//	if (str[0] == '+')
//		str.erase(str.begin());
//	int sum = 0;
//	for (int i = 0; i < str.size(); i++) {
//		if (str[i] <= '9' && str[i] >= '0') {
//			sum += (str[i]-'0') * (int)(pow(10, str.size() - i - 1));
//		}
//		else
//			return 0;
//	}
//	if (falg == 1)
//		sum *= -1;
//	return sum;
//}
//int main() {
//	string s("1a33");
//	int l = StrToInt(s);
//	return 0;
//}

//牛客 --- 双栈实现队列 https://www.nowcoder.com/practice/54275ddae22f475981afa2244dd448c6?tpId=13&&tqId=11158&rp=1&ru=/ta/coding-interviews&qru=/ta/coding-interviews/question-ranking

//class Solution
//{
//public:
//	void push(int node) {
//		stack1.push(node);
//	}
//
//	int pop() {
//		if (stack2.size() <= 0) {
//			while (!stack1.empty()) {
//				int tmp = stack1.top();
//				stack1.pop();
//				stack2.push(tmp);
//			}
//		}
//		int a = stack2.top();
//		stack2.pop();
//		return a;
//	}
//
//private:
//	stack<int> stack1;
//	stack<int> stack2;
//};


//牛客 --变态跳台阶 https://www.nowcoder.com/practice/22243d016f6b47f2a6928b4313c85387?tpId=13&&tqId=11162&rp=1&ru=/ta/coding-interviews&qru=/ta/coding-interviews/question-ranking

//class Solution {
//public:
//	int jumpFloorII(int number) {
//		return pow(2, number - 1);
//	}
//};

//牛客 --- 二叉树的镜像 https://www.nowcoder.com/practice/564f4c26aa584921bc75623e48ca3011?tpId=13&&tqId=11171&rp=1&ru=/ta/coding-interviews&qru=/ta/coding-interviews/question-ranking
/*
struct TreeNode {
	int val;
	struct TreeNode *left;
	struct TreeNode *right;
	TreeNode(int x) :
			val(x), left(NULL), right(NULL) {
	}
};*/
//class Solution {
//public:
//	void Mirror(TreeNode *pRoot) {
//		if (pRoot == NULL)
//			return;
//		TreeNode* tmp = pRoot->left;
//		pRoot->left = pRoot->right;
//		pRoot->right = tmp;
//		Mirror(pRoot->left);
//		Mirror(pRoot->right);
//	}
//};


//牛客---构建乘积数组  https://www.nowcoder.com/practice/94a4d381a68b47b7a8bed86f2975db46?tpId=13&&tqId=11204&rp=1&ru=/ta/coding-interviews&qru=/ta/coding-interviews/question-ranking
//class Solution {
//public:
//	vector<int> multiply(const vector<int>& A) {
//		vector<int> v(A.size());
//		for (int i = 0; i < v.size(); i++) {
//			int ride = 1;
//			for (int j = 0; j < A.size(); ++j) {
//				if (j != i)
//					ride *= A[j];
//			}
//			v[i] = ride;
//		}
//		return v;
//	}
//};

//牛客 --- 数据流中的中位数 https://www.nowcoder.com/practice/9be0172896bd43948f8a32fb954e1be1?tpId=13&&tqId=11216&rp=1&ru=/ta/coding-interviews&qru=/ta/coding-interviews/question-ranking
//class Solution {
//public:
//	vector<int> v;
//	void Insert(int num)
//	{
//		v.push_back(num);
//	}
//
//	double GetMedian()
//	{
//		sort(v.begin(), v.end());
//		if (v.size() % 2 == 0) {
//			return (v[v.size() / 2 - 1] + v[v.size() / 2]) / 2.0;
//		}
//		else
//			return v[v.size() / 2];
//	}
//};

//牛客 -- 滑动窗口最大值 https://www.nowcoder.com/practice/1624bc35a45c42c0bc17d17fa0cba788?tpId=13&&tqId=11217&rp=1&ru=/ta/coding-interviews&qru=/ta/coding-interviews/question-ranking
//class Solution {
//public:
//	vector<int> maxInWindows(const vector<int>& num, unsigned int size)
//	{
//		vector<int> v;
//		if (num.size() < size) {
//			return v;
//		}
//		int begin = 0;
//		int end = begin + size - 1;
//		while (end < num.size()) {
//			int max = num[begin];
//			for (int i = begin; i <= end; i++) {
//				if (num[i] > max)
//					max = num[i];
//			}
//			v.push_back(max);
//			begin++;
//			end++;
//		}
//		return v;
//	}
//};


//牛客 -- 第一次只出现一次的字符 https://www.nowcoder.com/practice/1c82e8cf713b4bbeb2a5b31cf5b0417c?tpId=13&&tqId=11187&rp=1&ru=/ta/coding-interviews&qru=/ta/coding-interviews/question-ranking

//class Solution {
//public:
//	int FirstNotRepeatingChar(string str) {
//		if (str.size() == 0)
//			return -1;
//		if (str.size() == 1)
//			return str[0];
//		for (int i = 0; i < str.size() - 1; ++i) {
//			int falg = 0;
//			for (int j = 0; j < str.size(); ++j) {
//				if (str[i] == str[j] && i != j) {
//					falg = 1;
//					break;
//				}
//			}
//			if (falg == 0)
//				return i;
//		}
//		return -1;
//	}
//};


//牛客 --- 链表环的入口节点 https://www.nowcoder.com/practice/253d2c59ec3e4bc68da16833f79a38e4?tpId=13&&tqId=11208&rp=1&ru=/ta/coding-interviews&qru=/ta/coding-interviews/question-ranking

/*
struct ListNode {
	int val;
	struct ListNode *next;
	ListNode(int x) :
		val(x), next(NULL) {
	}
};
*/
//class Solution {
//public:
//	ListNode* EntryNodeOfLoop(ListNode* pHead)
//	{
//		if (pHead == NULL)
//			return pHead;
//		ListNode* p = pHead;
//		vector<ListNode*> v;
//		while (p) {
//			if (v.size() != 0) {
//				for (int i = 0; i < v.size(); ++i) {
//					if (p == v[i])
//						return p;
//				}
//			}
//			v.push_back(p);
//			p = p->next;
//		}
//		return NULL;
//	}
//};
//
////牛客 --- 二叉树第K个节点 https://www.nowcoder.com/practice/ef068f602dde4d28aab2b210e859150a?tpId=13&&tqId=11215&rp=1&ru=/ta/coding-interviews&qru=/ta/coding-interviews/question-ranking
///*
//struct TreeNode {
//	int val;
//	struct TreeNode *left;
//	struct TreeNode *right;
//	TreeNode(int x) :
//			val(x), left(NULL), right(NULL) {
//	}
//};
//*/
//class Solution {
//public:
//	void push_v(TreeNode* pRoot, vector<TreeNode*> &v) {
//		if (pRoot == NULL)
//			return;
//		push_v(pRoot->left, v);
//		v.push_back(pRoot);
//		push_v(pRoot->right, v);
//	}
//	TreeNode* KthNode(TreeNode* pRoot, int k)
//	{
//		if (pRoot == NULL || k <= 0)
//			return NULL;
//		vector<TreeNode*> v;
//		push_v(pRoot, v);
//		if (k > v.size())
//			return NULL;
//		return v[k - 1];
//	}
//	/*int count = 0;
//	TreeNode* KthNode(TreeNode* pRoot, int k)
//	{
//		if(pRoot!=NULL){
//			TreeNode* a = KthNode(pRoot->left,k);
//			if(a!=NULL)
//				return a;
//			count++;
//			if(count==k)
//				return pRoot;
//			a = KthNode(pRoot->right,k);
//			if(a!=NULL)
//				return a;
//		}
//		return NULL;
//	}*/
//};

// 牛客 -- 排序次数 https://www.nowcoder.com/practice/1712e1cb393b499ba52036b702990839?tpId=182&&tqId=34817&rp=1&ru=/activity/oj&qru=/ta/exam-all/question-ranking
//int main() {
//	int n;
//	cin >> n;
//	vector<int> v(n, 0);
//	for (int i = 0; i < v.size(); i++) {
//		cin >> v[i];
//	}
//	int count = 0;
//	vector<int> v1(v);
//	vector<int> v2;
//	sort(v1.begin(), v1.end());
//	for (int i = 0; i < v1.size(); i++) {
//		for (int j = 0; j < v.size(); j++) {
//			if (v1[i] == v[j]) {
//				v2.push_back(j);
//				break;
//			}
//		}
//	}
//	int k = 0;
//	for (; k < v2.size() - 1; k++) {
//		if (v[k] > v[k + 1])
//			break;
//	}
//	cout << n - k - 1 << endl;
//	return 0;
//}

//牛客 -- 统计字符 https://www.nowcoder.com/practice/e3f67da21c3f45bfb091cf0cabb9bb0f?tpId=182&&tqId=34716&rp=1&ru=/activity/oj&qru=/ta/exam-all/question-ranking

//int main() {
//	string s;
//	while (getline(cin, s)) {
//		vector<int> v(123, 0);
//		for (int i = 0; i < s.size(); ++i) {
//			if ((s[i] <= 'z'&&s[i] >= 'a') || (s[i] >= 'A'&&s[i] <= 'Z')) {
//				v[s[i]]++;
//				if (v[s[i]] == 3) {
//					cout << s[i] << endl;
//					break;
//				}
//			}
//		}
//	}
//	return 0;
//}

//牛客-- 链表分割 https://www.nowcoder.com/practice/0e27e0b064de4eacac178676ef9c9d70?tpId=8&&tqId=11004&rp=2&ru=/activity/oj&qru=/ta/cracking-the-coding-interview/question-ranking
//class Partition {
//public:
//	ListNode* partition(ListNode* pHead, int x) {
//		// write code here
//		if (pHead == NULL || pHead->next == NULL) {
//			return pHead;
//		}
//		ListNode* cur = pHead;
//		ListNode* p1head = new ListNode(0);
//		ListNode* p2head = new ListNode(0);
//		ListNode* p1tail = p1head;
//		ListNode* p2tail = p2head;
//		while (cur) {
//			if (cur->val < x) {
//				p1tail->next = cur;
//				p1tail = p1tail->next;
//			}
//			else {
//				p2tail->next = cur;
//				p2tail = p2tail->next;
//			}
//			cur = cur->next;
//		}
//		p1tail->next = p2head->next;
//		p2tail->next = NULL;
//		return p1head->next;
//	}
//};

//牛客--最大差值 https://www.nowcoder.com/practice/c1ad0923a49b4347bd0bf8070610d046?tpId=182&&tqId=34799&rp=1&ru=/activity/oj&qru=/ta/exam-all/question-ranking

//int main() {
//
//	int n;
//	cin >> n;
//	int sum = 0;
//	vector<int> v(n);
//	for (int i = 0; i < n; i++) {
//		cin >> v[i];
//	}
//	sort(v.begin(), v.end());
//	for (int i = 0; i < v.size() - 1; ++i) {
//		sum = sum > (v[i + 1] - v[i]) ? sum : (v[i + 1] - v[i]);
//	}
//	cout << sum << endl;
//	return 0;
//}

//牛客--求数列第N项 https://www.nowcoder.com/practice/d15363742fe94a0ea4030e5124713fac?tpId=125&&tqId=33748&rp=1&ru=/ta/exam-xiaomi&qru=/ta/exam-xiaomi/question-ranking
//int main() {
//	int n = 0;
//	cin >> n;
//	int a = 1;
//	int b = 1;
//	int count = 0;
//	do {
//		int c = a + b;
//		a = b;
//		b = c;
//		count++;
//	} while (b < n);
//	cout << count << endl;
//	return 0;
//}

//牛客 2的N次方 https://www.nowcoder.com/practice/e9a4919b8848451d9aff81e3cdd133b1?tpId=182&&tqId=34826&rp=1&ru=/activity/oj&qru=/ta/exam-all/question-ranking
//long double x = 2;
//
//long double power(int n) {
//	if (n == 1)
//		return x;
//	return x * power(n - 1);
//}
//
//int main() {
//
//	int n;
//	cin >> n;
//	printf("%.0Lf\n", power(n));
//
//	return 0;
//}

//牛客--字符串压缩算法 https://www.nowcoder.com/practice/2ff3d36b4d4a4bfeb1a7d64f3cc55c15?tpId=182&&tqId=34875&rp=1&ru=/activity/oj&qru=/ta/exam-all/question-ranking
//int main() {
//	string s;
//	string s1;
//	getline(cin, s);
//	int i = 0;
//	int count = 0;
//	while (i < s.size()) {
//		int j = i;
//		for (; j < s.size(); j++) {
//			if (s[j] == s[i]) {
//				count++;
//			}
//			else
//				break;
//		}
//		if (count > 1) {
//			s1.push_back(count - 1 + '0');
//		}
//		s1.push_back(s[i]);
//		i = j;
//		count = 0;
//	}
//	cout << s1 << endl;
//	return 0;
//}

//牛客 --- 回文数索引 https://www.nowcoder.com/practice/b6edb5ca15d34b1eb42e4725a3c68eba?tpId=182&&tqId=34896&rp=1&ru=/activity/oj&qru=/ta/exam-all/question-ranking
//bool is_palind(string &s) {
//	if (s.size() == 0)
//		return true;
//	int begin = 0;
//	int end = s.size() - 1;
//	while (begin < end) {
//		if (s[begin] != s[end])
//			return false;
//		begin++;
//		end--;
//	}
//	return true;
//}
//
//int main() {
//
//	int n = 0;
//	while (cin >> n) {
//		vector<string> v(n);
//		for (int i = 0; i < n; i++) {
//			cin >> v[i];
//		}
//		for (int i = 0; i < n; i++) {
//			if (is_palind(v[i]))
//				cout << "-1" << endl;
//			else {
//				for (int j = 0; j < v[i].size(); j++) {
//					string s1 = v[i];
//					s1.erase(s1.begin() + j);
//					if (is_palind(s1)) {
//						cout << j << endl;
//						break;
//					}
//				}
//			}
//		}
//	}
//	return 0;
//}

//牛客--时间转换 https://www.nowcoder.com/practice/1ff47ce832054d2d84fc66a70e9e1009?tpId=182&&tqId=34892&rp=1&ru=/activity/oj&qru=/ta/exam-all/question-ranking
//int main() {
//
//	string s;
//	cin >> s;
//	int falg = 0;
//	if (s == "12:00:00AM")
//		cout << "00:00:00";
//	else if (s == "12:00:00PM")
//		cout << "12:00:00";
//	else if (s.find('P') != -1) {
//		if ((s[1] - '0') > 7)
//			falg = 1;
//		s[1] = (s[1] - '0' + 2) % 10 + '0';
//		s[0] = (s[0] - '0' + 1) + '0';
//		if (falg == 1)
//			s[0] = (s[0] - '0' + 1) + '0';
//		string s1(s.begin(), s.end() - 2);
//		cout << s1 << endl;
//	}
//	else {
//		string s1(s.begin(), s.end() - 2);
//		cout << s1 << endl;
//	}
//	return 0;
//}

//牛客--密码检查 https://www.nowcoder.com/practice/f2fbd8f61c564ca0b5feaa63ab42dae5?tpId=182&&tqId=34867&rp=1&ru=/activity/oj&qru=/ta/exam-all/question-ranking
//bool is_true(string &s) {
//	if (s.length() < 8)
//		return false;
//	if (s[0] <= '9'&&s[0] >= '0')
//		return 0;
//	int c_num = 0;
//	int c_big = 0;
//	int c_sma = 0;
//	for (int i = 0; i < s.size(); i++) {
//		if (s[i] <= '9'&&s[i] >= '0')
//			c_num++;
//		else if (s[i] <= 'z'&&s[i] >= 'a')
//			c_sma++;
//		else if (s[i] <= 'Z'&&s[i] >= 'A')
//			c_big++;
//		else
//			return false;
//	}
//	if (c_num*c_big != 0 && c_big*c_sma == 0 && c_num*c_sma == 0)
//		return false;
//	return true;
//}
//
//int main() {
//	int n;
//	while (cin >> n) {
//		vector<string> v(n);
//		for (int i = 0; i < n; i++) {
//			cin >> v[i];
//		}
//		for (int i = 0; i < n; i++) {
//			if (is_true(v[i]))
//				cout << "YES" << endl;
//			else
//				cout << "NO" << endl;
//		}
//	}
//	return 0;
//}

//牛客---链表合并 https://www.nowcoder.com/practice/27c833289e5f4f5e9ba3718ce9136759?tpId=182&&tqId=34637&rp=1&ru=/activity/oj&qru=/ta/exam-all/question-ranking

//int main() {
//
//	vector<int> v1;
//	vector<int> v2;
//	vector<int> v;
//	int tmp;
//	while (cin >> tmp) {
//		v1.push_back(tmp);
//		if (cin.get() == '\n')
//			break;
//	}
//	while (cin >> tmp) {
//		v2.push_back(tmp);
//		if (cin.get() == '\n')
//			break;
//	}
//	int i = 0, j = 0;
//	while (i < v1.size() && j < v2.size()) {
//		if (v1[i] < v2[j]) {
//			v.push_back(v1[i]);
//			i++;
//		}
//		else {
//			v.push_back(v2[j]);
//			j++;
//		}
//	}
//	if (i < v1.size()) {
//		for (int k = i; k < v1.size(); k++)
//			v.push_back(v1[k]);
//	}
//	if (j < v2.size()) {
//		for (int k = j; k < v2.size(); k++)
//			v.push_back(v2[k]);
//	}
//	for (int k = 0; k < v.size(); k++) {
//		cout << v[k] << " ";
//	}
//	cout << endl;
//	return 0;
//}

//牛客--不同的bit位 https://www.nowcoder.com/practice/daf9032926614dab91ca624a7759a868?tpId=128&&tqId=33809&rp=1&ru=/ta/exam-meituan&qru=/ta/exam-meituan/question-rankinghttps://www.nowcoder.com/practice/daf9032926614dab91ca624a7759a868?tpId=128&&tqId=33809&rp=1&ru=/ta/exam-meituan&qru=/ta/exam-meituan/question-ranking
//int main() {
//	long m = 0;
//	long n = 0;
//	while (cin >> m >> n) {
//		int count = 0;
//		while (m || n) {
//			if (m % 2 != n % 2)
//				count++;
//			m /= 2;
//			n /= 2;
//		}
//		cout << count << endl;
//	}
//
//
//	return 0;
//}

//牛客--字符覆盖  https://www.nowcoder.com/practice/d7ae059c1cee491989412c4fa39d4384?tpId=143&&tqId=33934&rp=1&ru=/ta/exam-baidu&qru=/ta/exam-baidu/question-ranking
//int main() {
//	string s;
//	string t;
//	cin >> s >> t;
//	sort(t.begin(), t.end(), greater<int>());
//	for (int i = 0; i < t.size(); i++) {
//		for (int j = 0; j < s.size(); j++) {
//			if (s[j] < t[i]) {
//				s[j] = t[i];
//				break;
//			}
//		}
//	}
//	cout << s << endl;
//	return 0;
//}


//牛客--括号匹配 https://www.nowcoder.com/practice/57260c08eaa44feababd05b328b897d7?tpId=182&&tqId=34830&rp=1&ru=/activity/oj&qru=/ta/exam-all/question-ranking
//int main() {
//
//	string s;
//	while (cin >> s) {
//		int falg = 1;
//		stack<char> st;
//		for (int i = 0; i < s.size(); i++) {
//			if (s[i] != '('&&s[i] != ')'&&s[i] != '['&&s[i] != ']') {
//				s.erase(s.begin() + i);
//				i--;
//			}
//		}
//		for (int i = 0; i < s.size(); i++) {
//			if (st.empty()) {
//				st.push(s[i]);
//			}
//			else if (!st.empty()) {
//				if ((st.top() == '('&&s[i] == ')') || (st.top() == '['&&s[i] == ']')) {
//					st.pop();
//				}
//				else
//					st.push(s[i]);
//			}
//		}
//		if (st.empty())
//			cout << "true" << endl;
//		else
//			cout << "false" << endl;
//	}
//	return 0;
//}

//牛客--整数的倒数 https://www.nowcoder.com/practice/dd63c30dfef04770b5813e63f5a2615a?tpId=182&&tqId=34831&rp=1&ru=/activity/oj&qru=/ta/exam-all/question-ranking
//int main() {
//	string x;
//
//	while (cin >> x) {
//		int falg = 0;
//		if (x[0] == '-') {
//			falg = 1;
//			x.erase(x.begin());
//		}
//		reverse(x.begin(), x.end());
//		if (falg == 1)
//			x = "-" + x;
//		cout << x;
//
//		/*int falg = 0;
//		int out;
//		if(x<0){
//			falg = 1;
//			x = x - (2 * x);
//		}
//		stack<int> s;
//		while(x > 0){
//		s.push(x%10);
//			x /= 10;
//		}
//		int i = 0;
//		while(!s.empty()){
//			out+=s.top()*(pow(10,i));
//			s.pop();
//			i++;
//		}
//		if(falg == 1){
//			out = out - (2 * out);
//		}
//		cout<<out<<endl;*/
//	}
//	return 0;
//}

//牛客--缩写 https://www.nowcoder.com/practice/45083499b8c5404fb1db44c6ea4f170a?tpId=182&&tqId=34330&rp=1&ru=/activity/oj&qru=/ta/exam-all/question-ranking
//string abbreviation(string &s) {
//	string s1;
//	if (s.size() == 0)
//		return 0;
//	s1 += s[0];
//	for (int i = 0; i < s.size(); i++) {
//		while (s[i] != ' '&&i < s.size()) {
//			i++;
//		}
//		if (i == s.size() - 1)
//			break;
//		s1 += s[i + 1];
//
//	}
//	return s1;
//}
//
//int main() {
//
//	string s;
//	while (getline(cin, s)) {
//		string s1;
//		s1 = abbreviation(s);
//		cout << s1 << endl;
//	}
//
//	return 0;
//}

//牛客--n个数里最小的k个 https://www.nowcoder.com/practice/cc727473d1e248ccb674eb31bd8683dc?tpId=182&&tqId=34786&rp=1&ru=/activity/oj&qru=/ta/exam-all/question-ranking
//int main() {
//	vector<int> v;
//	int temp;
//	while (cin >> temp && temp != '\n') {
//		v.push_back(temp);
//	}
//	int k = v[v.size() - 1];
//	sort(v.begin(), v.end() - 1);
//	for (int i = 0; i < k; i++) {
//		if (i < k - 1)
//			cout << v[i] << " ";
//		else
//			cout << v[i] << endl;
//	}
//	return 0;
//}

//牛客--矩阵查数 https://www.nowcoder.com/practice/dd5b5b2df5f84bae9b26c99a0a8f8660?tpId=182&&tqId=34869&rp=1&ru=/activity/oj&qru=/ta/exam-all/question-ranking
//bool find_k(vector<vector<int>> &v,int k , int n){
//    int j = 0;
//    for(int i = v.size()-1; i >= 0&&j < n; ){
//        if(k==v[i][j])
//            return true;
//        else if(k<v[i][j]){
//            i--;
//        }
//        else{
//            j++;
//        }
//    }
//    return false;
//}
//
//int main(){
//    int m = 0;
//    int n = 0;
//    int k =0;
//    cin>>m;
//    cin>>n;
//    vector<vector<int>> v(m,vector<int>(n,0));
//    for(int i = 0; i < m; i++){
//        for(int j = 0; j < n; j++){
//            cin>>v[i][j];
//        }
//    }
//    cin>>k;
//    if(find_k(v,k,n)){
//        cout<<"true";
//    }
//    else{
//        cout<<"false";
//    }
//    return 0;
//}
//
//bool find_k(vector<vector<int>> &v, int k, int n) {
//	int j = 0;
//	for (int i = v.size() - 1; i >= 0 && j < n; ) {
//		if (k == v[i][j])
//			return true;
//		else if (k < v[i][j]) {
//			i--;
//		}
//		else {
//			j++;
//		}
//	}
//	return false;
//}
//
//int main() {
//	int m = 0;
//	int n = 0;
//	int k = 0;
//	cin >> m;
//	cin >> n;
//	vector<vector<int>> v(m, vector<int>(n, 0));
//	for (int i = 0; i < m; i++) {
//		for (int j = 0; j < n; j++) {
//			cin >> v[i][j];
//		}
//	}
//	cin >> k;
//	if (find_k(v, k, n)) {
//		cout << "true";
//	}
//	else {
//		cout << "false";
//	}
//	return 0;
//}

//牛客-剪绳子
//class Solution {
//public:
//	int cutRope(int number) {
//		int max = 1;
//		if (number <= 3) {
//			return number - 1;
//		}
//		while (number > 4) {
//			number -= 3;
//			max *= 3;
//		}
//		return max * number;
//	}

//int cutRope(int number) {
//	/*int max = 1;
//	if(number <= 3){
//		return number - 1;
//	}
//	while(number>4){
//		number-=3;
//		max*=3;
//	}
//	return max*number;*/
//	if (number == 2)
//		return 1;
//	if (number == 3)
//		return 2;
//	if (number > 3)
//	{
//		int max = 1;
//		int tmp = number % 3;
//		if (tmp == 1)
//		{
//			max = 2 * 2 * pow(3, number / 3 - 1);
//		}
//		else if (tmp == 2)
//		{
//			max = 2 * pow(3, number / 3);
//		}
//		else {
//			max = pow(3, number / 3);
//		}
//		return max;
//	}
//}
//int main() {
//	cout<<cutRope(16);
//	return 0;
//}
//https://www.nowcoder.com/practice/75e878df47f24fdc9dc3e400ec6058ca?
//tpId=13&&tqId=11168&rp=1&ru=/ta/coding-interviews&qru=/ta/coding-interviews/question-ranking
//class Solution {
//public:
//	ListNode* ReverseList(ListNode* pHead) {
//		if (pHead == NULL || pHead->next == NULL) {
//			return pHead;
//		}
//		ListNode* p = NULL;
//		ListNode* q = NULL;
//		while (pHead) {
//			p = pHead->next;
//			pHead->next = q;
//			q = pHead;
//			pHead = p;
//		}
//		return q;
//		/*if(pHead==NULL||pHead->next==NULL){
//			  return pHead;
//		  }
//		  ListNode* p = NULL;
//		  ListNode* q = NULL;
//		  stack<ListNode*> s;
//		  while(p->next){
//			  s.push(p);
//			  p = p->next;
//		  }
//		  q = p;
//		  while(!s.empty()){
//			  p->next=s.top();
//			  p=p->next;
//			  s.pop();
//		  }
//		  p->next=NULL;
//		  return q;*/
//	}
//};

//https://www.nowcoder.com/practice/435fb86331474282a3499955f0a41e8b?
//tpId=13&&tqId=11191&rp=1&ru=/ta/coding-interviews&qru=/ta/coding-interviews/question-ranking
//class Solution {
//public:
//	int TreeDepth(TreeNode* pRoot)
//	{
//		if (pRoot == NULL) {
//			return 0;
//		}
//		return TreeDepth(pRoot->left) > TreeDepth(pRoot->right) ? TreeDepth(pRoot->left) + 1 : TreeDepth(pRoot->right) + 1;
//	}
//};


//int main() {
//	int a = 8 & 3;
//	cout << a << endl;
//	return 0;
//}

//void* operator new[](size_t size) {
//	return ::operator new(size);
//}
//int main()
//{
//	int *pb = new int[10];
//	delete []pb;
//	return 0;
//}

//牛客 发邮件
//long long Failrec(int n)
//{
//	if (n < 2)
//		return 0;
//	if (n == 2)
//		return 1;
//	if (n == 3)
//		return 2;
//	return (n - 1)*(Failrec(n - 1) + Failrec(n - 2));
//}
//
//
//int main()
//{
//	int n;
//	while (cin >> n)
//	{
//		int count = 0;
//		cout << Failrec(n) << endl;
//	}
//	return 0;
//}


//int main() {
//
//	vector<vector<int>> v(5, vector<int>(6, 1));
//
//	return 0;
//}

//int main() {
//	string s;
//	while (getline(cin, s)) {
//		string s1;
//		getline(cin, s1);
//		vector<string> v;
//		for (int i = 0; i < s.size(); ++i) {
//			if (s[i] == '\"') {
//				v.push_back(s.substr(i + 1, s.find('\"', i + 1) - i - 1));
//				i = s.find('\"', i + 1) + 1;
//			}
//			else {
//				if (s.find(',', i) == s.npos) {
//					v.push_back(s.substr(i, s.size() - i));
//					i = s.size();
//				}
//				else {
//					v.push_back(s.substr(i, s.find(',', i) - i));
//					i = s.find(',', i);
//				}
//			}
//		}
//		cout << ((find(v.begin(), v.end(), s1) != v.end()) ? "Ignore" : "Important!") << endl;
//	}
//	return 0;
//}

//牛客--年会抽奖
//int main() {
//	long long a[21][2] = { {1,0}, {1,0}, {2,1}, {6,2} };
//	for (int i = 4; i < 21; ++i) {
//		a[i][0] = i * a[i - 1][0];
//		a[i][1] = (i - 1) * (a[i - 1][1] + a[i - 2][1]);
//	}
//	int n;
//	while (cin >> n) {
//		double ans = (double)a[n][1] / a[n][0] * 100.00;
//		printf("%02.2lf%\n", ans);
//	}
//	return 0;
//}

//int main() {
//	int n;
//	while (cin >> n) {
//		string s;
//		int a = 10000/n;
//		while (a > 0) {
//			s.insert(s.begin(), a % 10 + '0');
//			a /= 10;
//		}
//		if (n == 1)
//			s.insert(s.begin() + 3, '.');
//		else if (n <= 10)
//			s.insert(s.begin() + 2, '.');
//		else
//			s.insert(s.begin() + 1, '.');
//		s += "%";
//		cout << s << endl;
//	}
//
//	return 0;
//}

//牛客--养兔子
//int main() {
//	int n = 0;
//	long long a[91];
//	a[1] = 1;
//	a[2] = 2;
//	for (int i = 3; i < sizeof(a) / sizeof(a[0]); ++i)
//		a[i] = a[i - 1] + a[i - 2];
//	while (cin >> n) {
//		cout << a[n] << endl;
//	}
//	return 0;
//}

//牛客--收件人列表
//int main() {
//	int n = 0;
//	while (cin >> n) {
//		vector<string> v(n + 1);
//		for (int i = 0; i <= n; ++i) {
//			getline(cin, v[i]);
//		}
//		for (int i = 1; i <= n; ++i) {
//			if (v[i].find(',') == -1 && v[i].find(' ') == -1)
//				cout << v[i];
//			else {
//				v[i] = "\"" + v[i];
//				v[i] += "\"";
//				cout << v[i];
//			}
//			if (i != n)
//				cout << ", ";
//		}
//		cout << endl;
//	}
//
//	return 0;
//}
//int main() {
//
//	string s = "123";
//	s="\""+s;
//	cout << s;
//	return 0;
//}

//牛客--剪布条
//int main() {
//
//	string s1;
//	string s2;
//	while (cin >> s1 >> s2) {
//		int count = 0;
//		if (s2.size() > s1.size())
//			cout << 0 << endl;
//		else {
//			while (s1.size() != 0 && s1.size() >= s2.size()) {
//				string tmp(s1.begin(), s1.begin() + s2.size());
//				if (tmp == s2) {
//					count++;
//					s1.erase(s1.begin(), s1.begin() + s2.size());
//				}
//				else
//					s1.erase(s1.begin());
//			}
//		}
//		cout << count << endl;
//	}
//
//	return 0;
//}

//牛客---客似云中来
//int main() {
//
//	long long a[81];
//	a[1] = 1;
//	a[2] = 1;
//	for (int i = 3; i < 81; ++i)
//		a[i] = a[i - 1] + a[i - 2];
//	int from, to;
//	while (cin >> from >> to) {
//		long long count = 0;
//		for (int i = from; i <= to; ++i) {
//			count += a[i];
//		}
//		cout << count << endl;
//	}
//	return 0;
//}

//牛客--斐波那契凤尾
//int main() {
//
//	int n;
//	int a[100003];
//	a[1] = 1;
//	a[2] = 2;
//	for (int i = 3; i <= 100000; ++i) {
//		a[i] = (a[i - 1] + a[i - 2])%1000000;
//	}
//	while (cin >> n) {
//		if (n >= 30)
//			printf("%06d\n", a[n]);
//		else
//			printf("%d\n", a[n]);
//	}
//
//	return 0;
//}

//
//int is_sum(vector<int> arr, int n, int len) {
//	for (int i = 0; i < len; ++i) {
//		if (n == arr[i])
//			return 1;
//	}
//	for (int i = 0; i < len; ++i) {
//		for (int j = 0; j < len&&j != i; ++j) {
//			if (arr[i] + arr[j] == n)
//				return 1;
//		}
//	}
//	return 0;
//}
//int getFirstUnFormedNum(vector<int> arr, int len) {
//	sort(arr.begin(), arr.end());
//	int min = arr[0];
//	int max = 0;
//	for (int i = 0; i < len; ++i) {
//		max += arr[i];
//	}
//	for (int i = min; i <= max; ++i) {
//		if (is_sum(arr, i, len) == 0 && i != max)
//			return i;
//	}
//	return max + 1;
//}
//
//int main() {
//
//	vector<int> v;
//	v.push_back(2);
//	v.push_back(3);
//	v.push_back(1);
//	cout << getFirstUnFormedNum(v, 3)<<endl;
//
//	return 0;
//}

//牛客--有假币
//int main() {
//
//	long long a = 0;
//	while (cin >> a) {
//		if (a == 0)
//			break;
//		int count = 0;
//		while (a > 1) {
//			if (a % 3)
//				a = a / 3 + 1;
//			else
//				a /= 3;
//			count++;
//		}
//		cout << count << endl;
//	}
//	return 0;
//}
//牛客--分桃子
//using namespace std;
//int main() {
//
//	int n = 0;
//	while (cin >> n) {
//		if (n == 0)
//			break;
//		long count = pow(5, n) - 4;
//		long oldmonkey = pow(4, n) + n - 4;
//		cout << count << " " << oldmonkey << endl;
//	}
//	return 0;
//}

//牛客--奇数位全部为奇数或偶数位全部为偶数
//void oddInOddEvenInEven(vector<int>& arr, int len) {
//	int i = 0;
//	int j = 1;
//	while (i < len&&j < len) {
//		if (arr[i] % 2 == 0) {
//			i += 2;
//			continue;
//		}
//		if (arr[j] % 2 != 0) {
//			j += 2;
//			continue;
//		}
//		swap(arr[i], arr[j]);
//		j += 2;
//		i += 2;
//	}
//}
//void oddInOddEvenInEven(vector<int>& arr, int len) {
//	int j = 0;
//	for (int i = 0; i < len; i++) {
//		if (arr[i] % 2 == 0) {
//			swap(arr[j], arr[i]);
//			j += 2;
//		}
//	}
//}

//int main() {
//
//	vector<int> v;
//	v.push_back(1);
//	v.push_back(2);
//	v.push_back(3);
//	v.push_back(4);
//	oddInOddEvenInEven(v, 4);
//	for (auto &e : v) {
//		cout << e << endl;
//	}
//	return 0;
//}


//牛客--另类加法

//class Solution {
//public:
//	int Add(int num1, int num2)
//	{
//		if (num2 == 0)
//			return num1;
//		int sum = num1 ^ num2;
//		int carry = (num1&num2) << 1;
//		return Add(sum, carry);
//	}
//};

//牛客--三角形
//int main() {
//	double a, b, c;
//	while (cin >> a >> b >> c) {
//		if (a + b > c&&a + c > b&&b + c > a)
//			cout << "Yes" << endl;
//		else
//			cout << "No" << endl;
//	}
//
//	return 0;
//}

//牛客---快到碗里来
#define p 3.14
//int main() {
//
//	double cat, boal;
//	while (cin >> cat >> boal) {
//		double sboal = 2 * boal*p;
//		if (cat < sboal)
//			cout << "Yes" << endl;
//		else
//			cout << "No" << endl;
//	}
//	return 0;
//}

//牛客--变态跳台阶
//int jumpFloorII(int number) {
//	if (number == 0)
//		return number;
//	int total = 1;
//	for (int i = 1; i < number; i++)
//		total *= 2;
//	return total;
//}
//
////int jumpFloorII(int number) {
////	if (number <= 0)
////		return 0;
////	if (number == 1)
////		return 1;
////	if (number == 2)
////		return 2;
////	return jumpFloorII(number - 1) + jumpFloorII(number - 2);
////}
//int main() {
//	cout << jumpFloorII(5) << endl;
//	return 0;
//}


//牛客--数根
//int main() {
//	string s;
//	while (cin >> s) {
//		int count = 0;
//		for (int i = 0; i < s.size(); ++i) {
//			count = (count + s[i] - '0') % 9;
//		}
//		if (count == 0)
//			count = 9;
//		cout << count << endl;
//	}
//}
//牛客---年终奖
//class Bonus {
//public:
//
//	int getMost(vector<vector<int> > board) {
//		// write code here
//		for (int i = 0; i < 6; ++i) {
//			for (int j = 0; j < 6; ++j) {
//				if (i == 0 && j == 0)
//					continue;
//				else if (i == 0) {
//					board[i][j] += board[i][j - 1];
//				}
//				else if (j == 0) {
//					board[i][j] += board[i - 1][j];
//				}
//				else {
//					board[i][j] += max(board[i][j - 1], board[i - 1][j]);
//				}
//			}
//		}
//		return board[5][5];
//	}
//};

//牛客--微信红包
//class Gift {
//public:
//	static int getValue(vector<int> gifts, int n) {
//		// write code here
//		sort(gifts.begin(), gifts.end());
//		vector<int> hash(gifts[gifts.size() - 1] + 1, 0);
//		for (int i = 0; i < gifts.size(); ++i) {
//			hash[gifts[i]]++;
//		}
//		int j = 0;
//		for (j = 0; j < hash.size(); ++j) {
//			if (hash[j] > gifts.size() / 2) {
//				return j;
//			}
//		}
//		return 0;
//	}
//};
//int main() {
//	vector<int> gifts;
//	gifts.push_back(1);
//	gifts.push_back(2);
//	gifts.push_back(3);
//	gifts.push_back(2);
//	gifts.push_back(2);
//	int a = Gift::getValue(gifts, 5);
//	return 0;
//}

//找出字符串中第一次出现一次的字符
//
//int main() {
//
//	string s;
//	while (getline(cin, s)) {
//		int i = 0;
//		for (i = 0; i < s.size(); ++i) {
//			if (s.find(s[i]) == s.rfind(s[i])) {
//				cout << s[i] << endl;
//				break;
//			}
//		}
//		if (i == s.size())
//			cout << -1 << endl;
//	}
//
//	return 0;
//}

//牛客---小易的升级之路

//int max_val(int power, int boss) {
//	if (boss == 0)
//		return power;
//	else
//		return max_val(boss, power%boss);
//}
//
//int main() {
//	int n;
//	while (cin >> n) {
//		int power;
//		cin >> power;
//		vector<int> v(100000);
//		for (int i = 0; i < n; ++i) {
//			cin >> v[i];
//		}
//		for (int i = 0; i < n; ++i) {
//			if (v[i] <= power)
//				power += v[i];
//			else
//				power += max_val(power, v[i]);
//		}
//		cout << power << endl;
//	}
//	return 0;
//}

//牛客---公共子序列长度
//int main() {
//	string str1, str2;
//	while (cin >> str1 >> str2) {
//		int len1 = str1.size();
//		int len2 = str2.size();
//		int max = 0;
//		vector<vector<int>> dp(len1 + 1, vector<int>(len2 + 1, 0));
//		for (int i = 1; i <= len1; ++i) {
//			for (int j = 1; j <= len2; ++j) {
//				if (tolower(str1[i - 1]) == tolower(str2[j - 1]))
//					dp[i][j] = dp[i - 1][j - 1] + 1;
//				if (dp[i][j] > max)
//					max = dp[i][j];
//			}
//		}
//		cout << max << endl;
//	}
//	return 0;
//}

//牛客--字符串反转

//int main() {
//
//	string s;
//	while (getline(cin, s)) {
//		reverse(s.begin(), s.end());
//		cout << s << endl;
//	}
//
//	return 0;
//}


//牛客--汽水瓶

//int max_drink(int a) {
//	if (a < 3)
//		return 0;
//	int count = 0;
//	while (a) {
//		if (a > 2) {
//			count += a / 3;
//			a = a % 3 + a / 3;
//		}
//		else if (a == 2) {
//			count += 1;
//			a = 0;
//		}
//		else
//			return count;
//	}
//	return count;
//}
//int main() {
//	vector<int> v(11, 0);
//	for (int i = 0; i < 11; ++i) {
//		cin >> v[i];
//		if (v[i] == 0)
//			break;
//	}
//	for (int i = 0; i < 11; ++i) {
//		if (v[i] != 0)
//			cout << max_drink(v[i]) << endl;
//		else
//			break;
//	}
//	return 0;
//}


//牛客---字符串通配符（80%通过  有bug）
//bool is_match(string s1, string s2) {
//	int count = 1;
//	for (int i = 0; i < s1.size() - 1; i++) {
//		if (s1[i] == '*'&&s1[i + 1] == '?') {
//			s1.erase(s1.begin() + i + 1);
//			count++;
//			i--;
//		}
//	}
//	for (int i = 0, j = 0; i < s1.size() && j < s2.size(); ++i, ++j) {
//		while (s1[i] != '?'&&s1[i] != '*'&&i < s1.size()) {
//			if (s1[i] != s2[j])
//				return false;
//			++i;
//			++j;
//		}
//		if (s1[i] == '?') { ++i; ++j; }
//
//		else if (s1[i] == '*' && (i == s1.size() - 1))
//			return true;
//		else {
//			j = s2.find(s1[i + 1], j);
//			i += count;
//		}
//	}
//	return true;
//}
//
//int main() {
//
//	string s1;
//	string s2;
//	while (cin >> s1) {
//		cin >> s2;
//		bool a = is_match(s1, s2);
//		if (a) cout << "true" << endl;
//		else cout << "false" << endl;
//	}
//
//	return 0;
//}

//牛客--统计每月兔子总数
//int fib(int m) {
//	if (m < 3)
//		return 1;
//	else
//		return fib(m - 1) + fib(m - 2);
//}
//
//int main() {
//	int month = 0;
//	while (cin >> month) {
//		int count = fib(month);
//		cout << count << endl;
//	}
//	return 0;
//}

//牛客--超长正整数相加
//string addlonginterger(string s1, string s2) {
//
//	while (s1.size() < s2.size())
//		s1 = "0" + s1;
//	while (s1.size() > s2.size())
//		s2 = "0" + s2;
//	int flag = 0;
//	for (int i = s1.size() - 1; i >= 0; i--) {
//		int sum = s1[i] - '0' + s2[i] - '0' + flag;
//		s1[i] = sum % 10 + '0';
//		if (sum > 9) flag = 1;
//		else flag = 0;
//	}
//	if (flag == 1) s1 = '1' + s1;
//	return s1;
//}
//
//int main() {
//
//	string s1;
//	string s2;
//	while (cin >> s1) {
//		cin >> s2;
//		string sum = addlonginterger(s1, s2);
//		cout << sum << endl;
//	}
//
//	return 0;
//}

//杨辉三角的变形
//int main() {
//	int n = 0;
//	while (cin >> n) {
//		int count = 1;
//		for (int i = 3; i <= n; i++) {
//			count += (i - 1);
//		}
//		if (n < 3) cout << -1 << endl;
//		else if (n % 2 != 0) cout << 2 << endl;
//		else {
//			if (count % 2 == 0)
//				cout << 3 << endl;
//			else
//				cout << 4 << endl;
//		}
//	}
//	return 0;
//}

//int main() {
//	char *ptr;
//	char str[] = "abcdefg";
//	ptr = str;
//	ptr += 5;
//	return 0;
// }

//完美数
//int main() {
//	int a[4] = { 6, 28, 496, 8128 };
//	int n = 0;
//	while (cin >> n) {
//		int count = 0;
//		if (n < 6) cout << count << endl;
//		for (int i = 0; i < 3; i++) {
//			if (n >= a[i] && n < a[i + 1]) {
//				cout << i + 1 << endl;
//				break;
//			}
//		}
//	}
//	return 0;
//}

//牛客--整数二进制中1的个数
//int num_count(int n) {
//	int count = 0;
//	while (n) {
//		if (n % 2 == 1)
//			count++;
//		n /= 2;
//	}
//	return count;
//}
//
//int main() {
//	int val = 0;
//	while (cin >> val) {
//		int count = num_count(val);
//		cout << count << endl;
//	}
//	return 0;
//}


//牛客---日期到天数转换
//bool isleapyear(int year) {
//	if (year % 4 == 0 && year % 100 != 0 || year % 400 == 0)
//		return true;
//	return false;
//}
//
//int iConverDateToDay(int year, int month, int day) {
//	int outday = 0;
//	char s[13] = { 29,31,28,31,30,31,30,31,31,30,31,30,31 };
//	if (year < 1 || month < 1 || month>12 || day < 1) return -1;
//	if (!isleapyear(year)) {
//		if (day > s[month])
//			return -1;
//	}
//	else {
//		if (month == 2 && day > 29 || month != 2 && day > s[month])
//			return -1;
//	}
//	for (int i = 1; i < month; ++i) {
//		outday += s[i];
//	}
//	if (month > 2 && isleapyear(year))
//		outday += 1;
//	outday += day;
//	return outday;
//}
//
//int main() {
//	int year = 0;
//	int month = 0;
//	int day = 0;
//	while (cin >> year) {
//		cin >> month;
//		cin >> day;
//		int count = 0;
//		count = iConverDateToDay(year, month, day);
//		cout << count << endl;
//	}
//	return 0;
//}

//牛客--最大连续bit数
//vector<int> num_byte(int n) {
//	vector<int> v;
//	while (n) {
//		v.insert(v.begin(), n % 2);
//		n /= 2;
//	}
//	return v;
//}
//
//int main() {
//
//	int n = 0;
//	while (cin >> n) {
//		vector<int> v;
//		v = num_byte(n);
//		v.insert(v.end(), 0);
//		int count = 0;
//		int max = 0;
//		for (int i = 0; i < v.size(); ++i) {
//			if (v[i] == 0) {
//				if (max < count) {
//					max = count;
//				}
//				count = 0;
//			}
//			if (v[i] == 1) {
//				count++;
//			}
//		}
//		cout << max << endl;
//	}
//	return 0;
//}


//牛客---最近公共祖先

//class LCA {
//public:
//	int getLCA(int a, int b) {
//		// write code here
//		while (a&&b) {
//			while (a > b) {
//				a /= 2;
//			}
//			while (b > a) {
//				b /= 2;
//			}
//			if (a == b) {
//				return a;
//			}
//		}
//	}
//};


//牛客--密码强度
//int main()
//{
//	string s;
//	s.resize(1000);
//	while (cin >> s)
//	{
//		int n;
//		int f[5] = { 0 };
//		int ans = 0;
//		int num = 0;
//		int letter_small = 0;
//		int capital = 0;
//		int character = 0;
//		n = s.size();
//		for (int i = 0; i < n; i++)
//		{
//			if (s[i] >= '0'&&s[i] <= '9')
//				num++;
//			else if (s[i] >= 'a'&&s[i] <= 'z')
//				letter_small++;
//			else if (s[i] >= 'A'&&s[i] <= 'Z')
//				capital++;
//			else
//				character++;
//		}
//		//判断长度
//		if (n <= 4)
//			f[0] = 5;
//		else if (n > 4 && n < 8)
//			f[0] = 10;
//		else if (n >= 8)
//			f[0] = 25;
//		//判断字母
//		if (letter_small + capital == 0)
//			f[1] = 0;
//		else if ((letter_small > 0 && capital == 0) || (letter_small == 0 && capital > 0))
//			f[1] = 10;
//		else if (letter_small > 0 && capital > 0)
//			f[1] = 20;
//		//判断数字
//		if (num == 0)
//			f[2] = 0;
//		else if (num == 1)
//			f[2] = 10;
//		else if (num > 1)
//			f[2] = 20;
//		//判断符号
//		if (character == 0)
//			f[3] = 0;
//		else if (character == 1)
//			f[3] = 10;
//		else if (character > 1)
//			f[3] = 25;
//		if (letter_small + capital > 0 && num > 0)
//			f[5] = 2;
//		else if (letter_small + capital > 0 && num > 0 && character > 0)
//			f[5] = 3;
//		else if (letter_small > 0 && capital > 0 && num > 0 && character > 0)
//			f[5] = 5;
//		ans = f[0] + f[1] + f[2] + f[3] + f[4];
//		if (ans >= 90)
//			cout << "VERY_SECURE" << endl;
//		else if (ans >= 80)
//			cout << "SECURE" << endl;
//		else if (ans >= 70)
//			cout << "VERY_STRONG" << endl;
//		else if (ans >= 60)
//			cout << "STRONG" << endl;
//		else if (ans >= 50)
//			cout << "AVERAGE" << endl;
//		else if (ans >= 25)
//			cout << "WEAK" << endl;
//		else
//			cout << "VERY_WEAK" << endl;
//	}
//	return 0;
//}
//

//牛客--井字棋
//class Board {
//public:
//	bool checkWon(vector<vector<int> > board) {
//		// write code here
//		int len = board.size();
//		for (int i = 0; i < len; i++)
//		{
//			int sum = 0;
//			for (int j = 0; j < len; j++)
//				sum += board[i][j];
//			if (sum == len)
//				return true;
//		}
//		for (int i = 0; i < len; i++)
//		{
//			int sum = 0;
//			for (int j = 0; j < len; j++)
//				sum += board[j][i];
//			if (sum == len)
//				return true;
//		}
//		int temp = 0;
//		for (int i = 0; i < len; i++)
//		{
//			temp += board[i][i];
//		}
//		if (temp == len) return true;
//		temp = 0;
//		for (int i = 0; i < len; i++)
//		{
//			temp += board[i][len - i - 1];
//		}
//		if (temp == len) return true;
//
//		return false;
//	}
//};

//牛客--走格子问题
//using namespace std;
//int totalMethod(int n, int m) {
//	if (n == 0 && m == 0) {
//		return 0;
//	}
//	if (n == 0 || m == 0) {
//		return 1;
//	}
//	return totalMethod(n - 1, m) + totalMethod(n, m - 1);
//}
//int main() {
//	int m = 0;
//	int n = 0;
//	while (cin >> n) {
//		cin >> m;
//		cout << totalMethod(n, m) << endl;
//	}
//
//	return 0;
//}



//牛客---另类加法
//class UnusualAdd {
//public:
//	int addAB(int A, int B) {
//		// write code here
//		int C = A & B;
//		while (C) {
//			A = A ^ B;
//			B = C << 1;
//			C = A & B;
//		}
//		return A | B;
//	}
//};


//void fun(int* a)
//{
//	*a = 8;
//}
//int main()
//{
//	int a = 5;
//	fun(&a);
//	cout << a << endl;
//	return 0;
//}
//牛客--最小公倍数
//int main() {
//
//	int a = 0;
//	int b = 0;
//	while (cin >> a) {
//		cin >> b;
//		if (a < b) {
//			int c = a;
//			a = b;
//			b = c;
//		}
//		int i = 0;
//		for (i = b; i > 1; --i) {
//			if (a%i == 0 && b%i == 0) {
//				b /= i;
//			}
//		}
//		cout << a * b << endl;
//	}
//	return 0;
//}


//牛客--两种排序方法
//bool is_lexord(vector<string> v) {
//	if (v.size() == 1 || v.size() == 0) return true;
//	for (int i = 1; i < v.size(); ++i) {
//
//		if (v[i] <= v[i - 1])
//			return false;
//	}
//	return true;
//}
//bool is_len(vector<string> v) {
//	if (v.size() == 1 || v.size() == 0) return true;
//	for (int i = 1; i < v.size(); ++i) {
//		if (v[i].size() <= v[i - 1].size())
//			return false;
//	}
//	return true;
//}
//
//int main() {
//
//	int n = 0;
//	while (cin >> n) {
//		vector<string> v_str;
//		v_str.resize(n);
//		for (int i = 0; i < n; ++i) {
//			cin >> v_str[i];
//		}
//		if (is_len(v_str) && is_lexord(v_str))
//			cout << "both" << endl;
//		else if (is_len(v_str) && !is_lexord(v_str))
//			cout << "lengths" << endl;
//		else if (!is_len(v_str) && is_lexord(v_str))
//			cout << "lexicographically" << endl;
//		else
//			cout << "none" << endl;
//	}
//
//	return 0;
//}

//合法括号序列判断
//class Parenthesis {
//public:
//	bool chkParenthesis(string A, int n) {
//		// write code here
//		stack<char> st;
//		for (int i = 0; i < n; ++i) {
//			if (st.empty()) {
//				st.push(A[i]);
//			}
//			else if (st.top() == '('&&A[i] == ')') {
//				st.pop();
//			}
//			else if (A[i] == '(') {
//				st.push(A[i]);
//			}
//		}
//		if (st.empty()) return true;
//		return false;
//	}
//};

//斐波那契数列
//int main() {
//	vector<int> v(100, 0);
//	v[0] = 0;
//	v[1] = 1;
//	for (int i = 2; i < v.size(); ++i) {
//		v[i] = v[i - 1] + v[i - 2];
//	}
//	int val = 0;
//	while (cin >> val) {
//		int i = 0;
//		for (; i < v.size(); i++) {
//			if (val >= v[i] && val <= v[i + 1]) {
//				break;
//			}
//		}
//		int front = val - v[i];
//		int next = v[i + 1] - val;
//		cout << (front > next ? next : front) << endl;
//
//	}
//	return 0;
//}

//牛客---把字符串转换为整数
//int StrToInt(string str) {
//	int val = 0;
//	int flag = 0;
//	if (str.size() == 0) return 0;
//	if (str[0] == '-')
//		flag = 1;
//	if (str[0] == '-' || str[0] == '+')
//		str.erase(str.begin());
//	for (int i = 1; i < str.size(); ++i) {
//		if (str[i]<'1' || str[i]>'9') {
//			return 0;
//		}
//	}
//	for (int i = str.size() - 1, j = 0; i >= 0; --i, ++j) {
//		val += ((str[i] - '0')*pow(10, j));
//	}
//	if (flag == 1)
//		val = 0 - val;
//	return val;
//}
//int main() {
//	string s = "+12345";
//	int a = StrToInt(s);
//	cout << a << endl;
//	return 0;
//}

//int is_reverse(string tmp) {
//	int first = 0;
//	int last = tmp.size() - 1;
//	while (first < last) {
//		if (tmp[first] != tmp[last]) {
//			return -1;
//		}
//		first++;
//		last--;
//	}
//	return 1;
//}
//
//int main() {
//
//	string A;
//	string B;
//	while (cin >> A) {
//		cin >> B;
//		int count = 0;
//		for (int i = 0; i < A.size(); i++) {
//			string tmp(A.begin(), A.begin() + i);
//			tmp += B;
//			string tmp1(A.begin() + i, A.end());
//			tmp += tmp1;
//			int x = is_reverse(tmp);
//			if (x == 1) {
//				count++;
//			}
//		}
//		if (is_reverse(A + B) == 1) {
//			count++;
//		}
//		cout << count << endl;
//	}
//	return 0;
//}

//int main() {
//	int x = 1;
//	do {
//		printf("%2d", x++);
//	} while (x--);
//	return 0;
//}

//int main() {
//
//	int M;
//	int N;
//	while (cin >> M) {
//		int flag = 0;
//		if (M < 0) {
//			flag = 1;
//			M = 0 - M;
//		}
//		cin >> N;
//		string s; 
//			char str[16] = { '0','1','2','3','4','5','6','7','8','9','A','B','C','D','E','F' };
//			if (M == 0) cout << "0" << endl;
//			if (M == 1) cout << "1" << endl;
//		while (M > 0) {
//			int val = M % N;
//			s = str[val] + s;
//			M /= N;
//		}
//		if (flag = 1)
//			s = '-' + s;
//		cout << s << endl;
//	}
//	return 0;
//}

////牛客---计算糖果
//int main() {
//	vector<int> v(4, 0);
//	for (int i = 0; i < 4; ++i) {
//		cin >> v[i];
//	}
//	int flag = 0;
//	int a; int b; int c;
//	for (a = 0; a <= 30; a++) {
//		for (b = 0; b <= 30; b++) {
//			for (c = 0; c <= 30; c++) {
//				if (a - b == v[0] && b - c == v[1] && a + b == v[2] && b + c == v[3]) {
//					cout << a << " " << b << " " << c << endl;
//					flag = 1;
//					break;
//				}
//			}
//			if (flag == 1) break;
//		}
//		if (flag == 1) break;
//	}
//	if (a == 31 && b == 31 && c == 31)
//		cout << "No" << endl;
//	return 0;
//}

//牛客----数组中出现次数超过一半的数字
//int MoreThanHalfNum_Solution(vector<int> numbers) {
//	if (numbers.size() == 0) return 0;
//	if (numbers.size() == 1) return numbers[0];
//	sort(numbers.begin(), numbers.end());
//	vector<int> hash(numbers[numbers.size()-1]+1, 0);
//	for (int i = 0; i < numbers.size(); ++i) {
//		hash[numbers[i]]++;
//	}
//	for (int i = 0; i < hash.size(); ++i) {
//		if (hash[i] > (numbers.size() / 2)) {
//			return i;
//		}
//	}
//	return 0;
//}
//int main() {
//	int arr[9] = { 1,2,3,2,2,2,5,4,2 };
//	vector<int> v(arr,arr+9);
//	int a = MoreThanHalfNum_Solution(v);
//	cout << a << endl;
//	return 0;
//}

////牛客---字符串中找出连续最长的数字串
//int main() {
//	string str;
//	while (getline(cin,str)) {
//		int max = 0;
//		int falg = 0;
//		for (int i = 0; i < str.size(); ++i) {
//			int count = 0;
//			while (str[i] > '9'&&str[i] < '0'&&i < str.size()) {
//				++i;
//			}
//
//			while (str[i] >= '0'&&str[i] <= '9'&&i < str.size()) {
//				count++;
//				++i;
//			}
//			if (count > max) {
//				max = count;
//				falg = i;
//			}
//		}
//		string s(str.begin() + falg - max, str.begin() + falg);
//		cout << s << endl;
//	}
//
//	return 0;
//}

////牛客---倒置字符串
//void my_reverse(char* begin, char* end) {
//	while (begin < end) {
//		char tmp = *begin;
//		*begin = *end;
//		*end = tmp;
//		begin++;
//		end--;
//	}
//}
//
//int main() {
//	string s;
//	while (getline(cin, s)) {
//		reverse(s.begin(), s.end());
//		int first = 0;
//		int last = 0;
//		while (last != s.size()) {
//			while (s[last] == ' '&&last != s.size()) {
//				first++;
//				last++;
//			}
//			while (s[last] != ' '&&last != s.size()) {
//				last++;
//			}
//			if (s[last] == ' '&&last != s.size()) {
//				my_reverse(&s[first], &s[last - 1]);
//				first = last + 1;
//				last = first;
//			}
//
//		}
//		int a = s.rfind(' ');
//		my_reverse(&s[a + 1], &s[s.size() - 1]);
//		while (s[s.size() - 1] == ' ') {
//			s.erase(s.end());
//		}
//		cout << s << endl;
//	}
//	return 0;
//}


//牛客---排序子序列
//int main() {
//	int n = 0;
//	while (cin >> n) {
//		vector<int> v(n + 1, 0);
//		int count = 0;
//		for (int i = 0; i < n; ++i) {
//			cin >> v[i];
//		}
//		for (int i = 0; i < n; ++i) {
//			if (v[i] < v[i + 1]) {
//				while (i < n&&v[i] <= v[i + 1])
//					i++;
//				count++;
//			}
//			else if (v[i] > v[i + 1]) {
//				while (i < n&&v[i] >= v[i + 1])
//					i++;
//				count++;
//			}
//		}
//		cout << count << endl;
//	}
//	return 0;
//}

////牛客  删除公共字符
//int main() {
//	string s1;
//	string s2;
//    while (getline(cin, s1)) {
//	getline(cin, s2);
//	int i = 0;
//	int j = 0;
//	for (i = 0; i < s2.size(); ++i) {
//		int size = s1.size();
//			for (j = 0; j < size; ++j) {
//				if (s1[j] == s2[i]) {
//					s1.erase(s1.begin() + j);
//				}
//			}
//		}
//		cout << s1 << endl;
//
//	}
//
//	return 0;
//}


//牛客组队竞速
//int main() {
//	int n = 0;
//
//	while (cin >> n) {
//		vector<int> v(3 * n, 0);
//		for (int i = 0; i < 3 * n; ++i) {
//			cin >> v[i];
//		}
//		sort(v.begin(), v.end());
//		long max = 0;
//		int x = 3 * n - 2;
//		while (n--) {
//			max += v[x];
//			x -= 2;
//		}
//		cout << max << endl;
//	}
//
//	return 0;
//}

//https://leetcode-cn.com/problems/remove-all-adjacent-duplicates-in-string/submissions/

//class Solution {
//public:
//	string removeDuplicates(string S) {
//		stack<char> s;
//		for (int i = 0; i < S.size(); ++i) {
//			if (s.empty()) s.push(S[i]);
//			else if (s.top() == S[i]) {
//				s.pop();
//			}
//			else {
//				s.push(S[i]);
//			}
//		}
//		
//		stack<char> s1;
//		string str;
//		int len = s.size();
//		for (int i = 0; i < len; ++i) {
//			s1.push(s.top());
//			s.pop();
//		}
//		for (int i = 0; i < len; ++i) {
//			str.push_back(s1.top());
//			s1.pop();
//		}
//		return str;
//	}
//};
//
//string stringToString(string input) {
//	assert(input.length() >= 2);
//	string result;
//	for (int i = 1; i < input.length() - 1; i++) {
//		char currentChar = input[i];
//		if (input[i] == '\\') {
//			char nextChar = input[i + 1];
//			switch (nextChar) {
//			case '\"': result.push_back('\"'); break;
//			case '/': result.push_back('/'); break;
//			case '\\': result.push_back('\\'); break;
//			case 'b': result.push_back('\b'); break;
//			case 'f': result.push_back('\f'); break;
//			case 'r': result.push_back('\r'); break;
//			case 'n': result.push_back('\n'); break;
//			case 't': result.push_back('\t'); break;
//			default: break;
//			}
//			i++;
//		}
//		else {
//			result.push_back(currentChar);
//		}
//	}
//	return result;
//}
//
//int main() {
//	string line;
//	while (getline(cin, line)) {
//		string S = stringToString(line);
//
//		string ret = Solution().removeDuplicates(S);
//
//		string out = (ret);
//		cout << out << endl;
//	}
//	return 0;
//}


//class Solution {
//public:
//	string removeDuplicates(string S) {
//		stack<char> s;
//		for (int i = 0; i < S.size(); ++i) {
//			if (s.empty()) s.push(S[i]);
//			else if (s.top() == S[i]) {
//				s.pop();
//			}
//			else {
//				s.push(S[i]);
//			}
//		}
//		string str;
//		for (int i = 0; i < s.size(); ++i) { //有bug
//			str.push_back(s.top());
//			s.pop();
//		}
//		return str;
//	}
//};
//
//string stringToString(string input) {
//	assert(input.length() >= 2);
//	string result;
//	for (int i = 1; i < input.length() - 1; i++) {
//		char currentChar = input[i];
//		if (input[i] == '\\') {
//			char nextChar = input[i + 1];
//			switch (nextChar) {
//			case '\"': result.push_back('\"'); break;
//			case '/': result.push_back('/'); break;
//			case '\\': result.push_back('\\'); break;
//			case 'b': result.push_back('\b'); break;
//			case 'f': result.push_back('\f'); break;
//			case 'r': result.push_back('\r'); break;
//			case 'n': result.push_back('\n'); break;
//			case 't': result.push_back('\t'); break;
//			default: break;
//			}
//			i++;
//		}
//		else {
//			result.push_back(currentChar);
//		}
//	}
//	return result;
//}
//
//int main() {
//	string line;
//	while (getline(cin, line)) {
//		string S = stringToString(line);
//
//		string ret = Solution().removeDuplicates(S);
//
//		string out = (ret);
//		cout << out << endl;
//	}
//	return 0;
//}

//https://leetcode-cn.com/problems/is-subsequence/submissions/

//class Solution {
//public:
//	bool isSubsequence(string s, string t) {
//		if (s.size() == 0) {
//			return true;
//		}
//		int a = 0;
//		int len = s.size();
//		for (int i = 0; i < t.size(); ++i) {
//			if (s[a] == t[i])
//				a++;
//			if (a == len)
//				return true;
//		}
//		return false;
//	}
//};

//https://leetcode-cn.com/problems/power-of-three/submissions/

//class Solution {
//public:
//	bool isPowerOfThree(int n) {
//		if (n == 0) return false;
//		if (n == 1) return true;
//		long m = 1;
//		while (m < n) {
//			m *= 3;
//			if (m == n)
//				return true;
//		}
//		return false;
//	}
//};

//https://leetcode-cn.com/problems/linked-list-cycle/submissions/

/**
 * Definition for singly-linked list.
 * struct ListNode {

 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */

 //class Solution {
 //public:
 //	bool hasCycle(ListNode *head) {
 //		ListNode* fast = head;
 //		ListNode* slow = head;
 //
 //		while (fast&&fast->next) {
 //			fast = fast->next->next;
 //			slow = slow->next;
 //			if (fast == slow)
 //				return true;
 //		}
 //		return false;
 //	}
 //};

 //https://leetcode-cn.com/problems/max-consecutive-ones/submissions/
 //
 //class Solution {
 //public:
 //	int findMaxConsecutiveOnes(vector<int>& nums) {
 //		int max = 0;
 //		int sum = 0;
 //		for (int i = 0; i < nums.size(); ++i) {
 //			if (nums[i] == 1) {
 //				sum++;
 //			}
 //			else
 //				sum = 0;
 //			if (sum > max) {
 //				max = sum;
 //			}
 //		}
 //		return max;
 //	}
 //};

 //https://leetcode-cn.com/problems/third-maximum-number/

 //class Solution {
 //public:
 //	int thirdMax(vector<int>& nums) {
 //		sort(nums.begin(), nums.end());
 //		for (int i = 0; i < nums.size() - 1; ++i) {
 //			if (nums[i] == nums[i + 1]) {
 //				nums.erase(nums.begin() + i + 1);
 //				i--;
 //			}
 //		}
 //		if (nums.size() < 3)
 //			return nums[nums.size() - 1];
 //		return nums[nums.size() - 3];
 //	}
 //};


 //https://leetcode-cn.com/problems/minimum-depth-of-binary-tree/submissions/

 /**
  * Definition for a binary tree node.
  * struct TreeNode {
  *     int val;
  *     TreeNode *left;
  *     TreeNode *right;
  *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
  * };
  */
  //class Solution {
  //public:
  //	int minDepth(TreeNode* root) {
  //		if (!root) return 0;
  //		int l = 0;
  //		int r = 0;
  //		l = minDepth(root->left);
  //		r = minDepth(root->right);
  //		return (l != 0 && r != 0) ? (l < r ? l : r) + 1 : l + r + 1;
  //	}
  //};

  //https://leetcode-cn.com/problems/search-insert-position/submissions/
  //
  //class Solution {
  //public:
  //	int searchInsert(vector<int>& nums, int target) {
  //		if (target <= nums[0] || nums.size() == 0) {
  //
  //			return 0;
  //		}
  //		for (int i = 0; i < nums.size() - 1; ++i) {
  //			if (target > nums[i] && target <= nums[i + 1]) {
  //				return i + 1;
  //			}
  //		}
  //		return nums.size();
  //	}
  //};

  //https://leetcode-cn.com/problems/student-attendance-record-i/submissions/

  //class Solution {
  //public:
  //	bool checkRecord(string s) {
  //		int count = 0;
  //		for (int i = 0; i < s.size(); ++i) {
  //			if (s[i] == 'A') {
  //
  //				count++;
  //
  //			}
  //			if (i < s.size() - 2 && s[i] == 'L' && s[i] == s[i + 1] && s[i] == s[i + 2]) {
  //				return false;
  //			}
  //		}
  //		if (count > 1) {
  //			return false;
  //		}
  //		return true;
  //	}
  //};

  //https://leetcode-cn.com/problems/find-all-numbers-disappeared-in-an-array/submissions/
  //class Solution {
  //public:
  //	vector<int> findDisappearedNumbers(vector<int>& nums) {
  //		vector<int> v;
  //		sort(nums.begin(), nums.end());
  //		for (int i = 0; i < nums.size(); ++i) {
  //			int j = (nums[i] - 1) % nums.size();
  //			nums[j] += nums.size();
  //		}
  //		for (int i = 0; i < nums.size(); ++i) {
  //			if (nums[i] <= nums.size()) {
  //				v.push_back(i + 1);
  //			}
  //		}
  //		return v;
  //	}
  //};
  //
  //void trimLeftTrailingSpaces(string &input) {
  //	input.erase(input.begin(), find_if(input.begin(), input.end(), [](int ch) {
  //		return !isspace(ch);
  //	}));
  //}
  //
  //void trimRightTrailingSpaces(string &input) {
  //	input.erase(find_if(input.rbegin(), input.rend(), [](int ch) {
  //		return !isspace(ch);
  //	}).base(), input.end());
  //}
  //
  //vector<int> stringToIntegerVector(string input) {
  //	vector<int> output;
  //	trimLeftTrailingSpaces(input);
  //	trimRightTrailingSpaces(input);
  //	input = input.substr(1, input.length() - 2);
  //	stringstream ss;
  //	ss.str(input);
  //	string item;
  //	char delim = ',';
  //	while (getline(ss, item, delim)) {
  //		output.push_back(stoi(item));
  //	}
  //	return output;
  //}
  //
  //string integerVectorToString(vector<int> list, int length = -1) {
  //	if (length == -1) {
  //		length = list.size();
  //	}
  //
  //	if (length == 0) {
  //		return "[]";
  //	}
  //
  //	string result;
  //	for (int index = 0; index < length; index++) {
  //		int number = list[index];
  //		result += to_string(number) + ", ";
  //	}
  //	return "[" + result.substr(0, result.length() - 2) + "]";
  //}
  //
  //int main() {
  //	string line;
  //	while (getline(cin, line)) {
  //		vector<int> nums = stringToIntegerVector(line);
  //
  //		vector<int> ret = Solution().findDisappearedNumbers(nums);
  //
  //		string out = integerVectorToString(ret);
  //		cout << out << endl;
  //	}
  //	return 0;
  //}

  //https://leetcode-cn.com/problems/number-of-1-bits/submissions/

  //class Solution {
  //public:
  //	int hammingWeight(uint32_t n) {
  //		int count = 0;
  //		while (n) {
  //			if (n % 2 == 1)
  //				count++;
  //			n /= 2;
  //		}
  //		return count;
  //	}
  //};
  //
  //int stringToInteger(string input) {
  //	return stoi(input);
  //}
  //
  //int main() {
  //	string line;
  //	while (getline(cin, line)) {
  //		int n = stringToInteger(line);
  //
  //		int ret = Solution().hammingWeight(n);
  //
  //		string out = to_string(ret);
  //		cout << out << endl;
  //	}
  //	return 0;
  //}

  //https://leetcode-cn.com/problems/nim-game/submissions/
  //class Solution {
  //public:
  //	bool canWinNim(int n) {
  //		if (n % 4 == 0) {
  //			return false;
  //		}
  //		return true;
  //	}
  //};
  //
  //int stringToInteger(string input) {
  //	return stoi(input);
  //}
  //
  //string boolToString(bool input) {
  //	return input ? "True" : "False";
  //}
  //
  //int main() {
  //	string line;
  //	while (getline(cin, line)) {
  //		int n = stringToInteger(line);
  //
  //		bool ret = Solution().canWinNim(n);
  //
  //		string out = boolToString(ret);
  //		cout << out << endl;
  //	}
  //	return 0;
  //}

  //https://leetcode-cn.com/problems/merge-sorted-array/

  //class Solution {
  //public:
  //	void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
  //		for (int i = m, j = 0; i < m + n, j < n; ++i, ++j) {
  //			nums1[i] = nums2[j];
  //		}
  //		sort(nums1.begin(), nums1.end());
  //	}
  //};
  //
  //void trimLeftTrailingSpaces(string &input) {
  //	input.erase(input.begin(), find_if(input.begin(), input.end(), [](int ch) {
  //		return !isspace(ch);
  //	}));
  //}
  //
  //void trimRightTrailingSpaces(string &input) {
  //	input.erase(find_if(input.rbegin(), input.rend(), [](int ch) {
  //		return !isspace(ch);
  //	}).base(), input.end());
  //}
  //
  //vector<int> stringToIntegerVector(string input) {
  //	vector<int> output;
  //	trimLeftTrailingSpaces(input);
  //	trimRightTrailingSpaces(input);
  //	input = input.substr(1, input.length() - 2);
  //	stringstream ss;
  //	ss.str(input);
  //	string item;
  //	char delim = ',';
  //	while (getline(ss, item, delim)) {
  //		output.push_back(stoi(item));
  //	}
  //	return output;
  //}
  //
  //int stringToInteger(string input) {
  //	return stoi(input);
  //}
  //
  //string integerVectorToString(vector<int> list, int length = -1) {
  //	if (length == -1) {
  //		length = list.size();
  //	}
  //
  //	if (length == 0) {
  //		return "[]";
  //	}
  //
  //	string result;
  //	for (int index = 0; index < length; index++) {
  //		int number = list[index];
  //		result += to_string(number) + ", ";
  //	}
  //	return "[" + result.substr(0, result.length() - 2) + "]";
  //}
  //
  //int main() {
  //	string line;
  //	while (getline(cin, line)) {
  //		vector<int> nums1 = stringToIntegerVector(line);
  //		getline(cin, line);
  //		int m = stringToInteger(line);
  //		getline(cin, line);
  //		vector<int> nums2 = stringToIntegerVector(line);
  //		getline(cin, line);
  //		int n = stringToInteger(line);
  //
  //		Solution().merge(nums1, m, nums2, n);
  //
  //		string out = integerVectorToString(nums1);
  //		cout << out << endl;
  //	}
  //	return 0;
  //}

  //https://leetcode-cn.com/problems/majority-element/submissions/

  //class Solution {
  //public:
  //	int majorityElement(vector<int>& nums) {
  //		int target = nums[0];
  //		int count = 1;
  //		for (int i = 1; i < nums.size(); i++)
  //			if (nums[i] != target)
  //			{
  //				count--;
  //				if (count == 0)
  //				{
  //					target = nums[i];
  //					count = 1;
  //				}
  //			}
  //			else count++;
  //		return target;
  //	}
  //};

  //https://leetcode-cn.com/problems/sqrtx/

  //class Solution {
  //public:
  //	int mySqrt(int x) {
  //		long long num = x / 2 + 1;
  //		for (long long i = 0; i <= num; ++i) {
  //			if ((i*i <= x) && ((i + 1)*(i + 1) > x)) {
  //				return i;
  //			}
  //		}
  //		return -1;
  //	}
  //};
  //
  //int stringToInteger(string input) {
  //	return stoi(input);
  //}
  //
  //int main() {
  //	string line;
  //	while (getline(cin, line)) {
  //		int x = stringToInteger(line);
  //
  //		int ret = Solution().mySqrt(x);
  //
  //		string out = to_string(ret);
  //		cout << out << endl;
  //	}
  //	return 0;
  //}

  //https://leetcode-cn.com/problems/add-binary/submissions/

  //class Solution {
  //public:
  //	string addBinary(string a, string b) {
  //
  //		int a_len = a.size();
  //		int b_len = b.size();
  //		while (a_len < b_len) {
  //			a = '0' + a;
  //			a_len++;
  //		}
  //		while (b_len < a_len) {
  //			b = '0' + b;
  //			b_len++;
  //		}
  //		for (int i = a_len - 1; i > 0; --i) {
  //			a[i] = a[i] - '0' + b[i];
  //			if (a[i] >= '2') {
  //				a[i] = (a[i] - '0') % 2 + '0';
  //				a[i - 1] = a[i - 1] + 1;
  //			}
  //		}
  //		a[0] = a[0] - '0' + b[0];
  //		if (a[0] >= '2') {
  //			a[0] = (a[0] - '0') % 2 + '0';
  //			a = '1' + a;
  //		}
  //		return a;
  //	}
  //};
  //
  //string stringToString(string input) {
  //	assert(input.length() >= 2);
  //	string result;
  //	for (int i = 1; i < input.length() - 1; i++) {
  //		char currentChar = input[i];
  //		if (input[i] == '\\') {
  //			char nextChar = input[i + 1];
  //			switch (nextChar) {
  //			case '\"': result.push_back('\"'); break;
  //			case '/': result.push_back('/'); break;
  //			case '\\': result.push_back('\\'); break;
  //			case 'b': result.push_back('\b'); break;
  //			case 'f': result.push_back('\f'); break;
  //			case 'r': result.push_back('\r'); break;
  //			case 'n': result.push_back('\n'); break;
  //			case 't': result.push_back('\t'); break;
  //			default: break;
  //			}
  //			i++;
  //		}
  //		else {
  //			result.push_back(currentChar);
  //		}
  //	}
  //	return result;
  //}
  //
  //int main() {
  //	string line;
  //	while (getline(cin, line)) {
  //		string a = stringToString(line);
  //		getline(cin, line);
  //		string b = stringToString(line);
  //
  //		string ret = Solution().addBinary(a, b);
  //
  //		string out = (ret);
  //		cout << out << endl;
  //	}
  //	return 0;
  //}

  //https://leetcode-cn.com/problems/plus-one/submissions/
  //class Solution {
  //public:
  //	vector<int> plusOne(vector<int>& digits) {
  //		int i = digits.size() - 1;
  //		for (; i >= 0; --i) {
  //			if (digits[i] == 9) {
  //				digits[i] = 0;
  //				if (i - 1 < 0) {
  //					digits[i] = 1;
  //					digits.push_back(0);
  //				}
  //			}
  //			else {
  //				digits[i]++;
  //				break;
  //			}
  //
  //		}
  //		return digits;
  //	}
  //};

  //https://leetcode-cn.com/problems/remove-element/submissions/

  //class Solution {
  //public:
  //	int removeElement(vector<int>& nums, int val) {
  //		for (int i = 0; i < nums.size(); i++) {
  //			if (nums[i] == val) {
  //				nums.erase(nums.begin() + i);
  //				--i;
  //			}
  //		}
  //		return nums.size();
  //	}
  //};

  //https://leetcode-cn.com/problems/intersection-of-two-arrays/submissions/

  //class Solution {
  //public:
  //	vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
  //		vector<int> v;
  //		if (!nums1.size() || !nums2.size())
  //			return v;
  //
  //		for (int i = 0; i < nums1.size(); ++i) {
  //			for (int j = 0; j < nums2.size(); ++j) {
  //				if (nums1[i] == nums2[j]) {
  //					v.push_back(nums1[i]);
  //				}
  //			}
  //		}
  //		if (!v.size())
  //			return v;
  //		sort(v.begin(), v.end());
  //		for (int i = 0; i < v.size() - 1; ++i) {
  //			if (v[i] == v[i + 1]) {
  //				v.erase(v.begin() + i + 1);
  //				--i;
  //			}
  //		}
  //		return v;
  //	}
  //};

  //https://leetcode-cn.com/problems/base-7/
  //class Solution {
  //public:
  //	string convertToBase7(int num) {
  //		int base = num;
  //		string s;
  //		while (base) {
  //			
  //			if (base % 7 == 0) {
  //				s.insert(s.begin(), '0');
  //			}
  //			else
  //			s.insert(s.begin(), base%7 + '0');
  //			base /= 7;
  //			
  //		}
  //		if (num < 0) {
  //			s.insert(s.begin(), '-');
  //		}
  //		return s;
  //	}
  //};
  //
  //int stringToInteger(string input) {
  //	return stoi(input);
  //}
  //
  //int main() {
  //	string line;
  //	while (getline(cin, line)) {
  //		int num = stringToInteger(line);
  //
  //		string ret = Solution().convertToBase7(num);
  //
  //		string out = (ret);
  //		cout << out << endl;
  //	}
  //	return 0;
  //}



  //int main() {
  //	int n = 0;
  //	while (cin >> n) {
  //		vector<int> v(n);
  //		for (int i = 0; i < n; ++i) {
  //			cin >> v[i];
  //		}
  //		int count = n - 1;
  //		for (int i = n - 1; i > 0; i--) {
  //			if (v[i] > v[i - 1]) {
  //				count--;
  //			}
  //			else break;
  //		}
  //		cout << count << endl;
  //	}
  //	return 0;
  //}

  //https://www.nowcoder.com/practice/1664fe871878496aa600b6e09557982b?tpId=98&&tqId=33045&rp=1&ru=/activity/oj&qru=/ta/2019test/question-ranking

  //
  //int main() {
  //	int num = 0;
  //	vector<int> v;
  //	while (cin >> num) {
  //		v.push_back(num);
  //	}
  //	sort(v.begin(), v.end());
  //	for (int i = 0; i < v.size() - 1; ++i) {
  //		if (v[i] == v[i + 1]) {
  //			cout << v[i] << endl;
  //			break;
  //		}
  //	}
  //	return 0;
  //}

  //https://leetcode-cn.com/problems/fibonacci-number/submissions/

  //class Solution {
  //public:
  //	int fib(int N) {
  //		if (N == 0) {
  //			return 0;
  //		}
  //		if (N < 3) {
  //			return 1;
  //		}
  //		int a = 1;
  //		int b = 1;
  //		int c = 0;
  //		while (N > 2) {
  //			c = a + b;
  //			a = b;
  //			b = c;
  //			N--;
  //		}
  //		return c;
  //	}
  //};

  //https://www.nowcoder.com/practice/78f83c3f12d2464591ebc5a7
  //3183db35?tpId=101&&tqId=33207&rp=1&ru=/activity/oj&qru=/ta
  ///programmer-code-interview-guide/question-ranking

  //struct list_node {
  //	int val;
  //	struct list_node * next;
  //};
  //
  //
  //list_node * input_list(void)
  //{
  //	int n, val;
  //	list_node * phead = new list_node();
  //	list_node * cur_pnode = phead;
  //	scanf("%d", &n);
  //	for (int i = 1; i <= n; ++i) {
  //		scanf("%d", &val);
  //		if (i == 1) {
  //			cur_pnode->val = val;
  //			cur_pnode->next = NULL;
  //		}
  //		else {
  //			list_node * new_pnode = new list_node();
  //			new_pnode->val = val;
  //			new_pnode->next = NULL;
  //			cur_pnode->next = new_pnode;
  //			cur_pnode = new_pnode;
  //		}
  //	}
  //	return phead;
  //}
  //
  //
  //list_node * selection_sort(list_node * head)
  //{
  //	//////在下面完成代码
  //	vector<int> v;
  //	list_node * p = head;
  //	while (p) {
  //		v.push_back(p->val);
  //		p = p->next;
  //	}
  //	sort(v.begin(), v.end());
  //	p = head;
  //	for (int i = 0; i < v.size(); ++i) {
  //		p->val = v[i];
  //		p = p->next;
  //	}
  //	return head;
  //}
  //
  //
  //void print_list(list_node * head)
  //{
  //	while (head != NULL) {
  //		printf("%d ", head->val);
  //		head = head->next;
  //	}
  //	puts("");
  //}
  //
  //
  //int main()
  //{
  //	list_node * head = input_list();
  //	list_node * new_head = selection_sort(head);
  //	print_list(new_head);
  //	return 0;
  //}

  //https://leetcode-cn.com/problems/hamming-distance/submissions/
  //
  //class Solution {
  //public:
  //	int hammingDistance(int x, int y) {
  //		int num = x ^ y;
  //		int count = 0;
  //		while (num)
  //		{
  //			if (num & 1) count++;
  //			num >>= 1;
  //		}
  //		return count;
  //	}
  //};

  //https://leetcode-cn.com/problems/convert-a-number-to-hexadecimal/submissions/
  //class Solution {
  //public:
  //	string toHex(int num) {
  //		if (num == 0) {
  //			return "0";
  //		}
  //		string str = "";
  //		string s[16] = { "0","1","2","3","4","5","6","7","8","9","a","b","c","d","e","f" };
  //		unsigned int num1 = num;
  //		while (num1 != 0) {
  //			str = s[num1 % 16] + str;
  //			num1 /= 16;
  //		}
  //		return str;
  //	}
  //};


  //https://leetcode-cn.com/problems/move-zeroes/submissions/

  //class Solution {
  //public:
  //	void moveZeroes(vector<int>& nums) {
  //		int count = 0;
  //		vector<int>::iterator it = nums.begin();
  //		while (it != nums.end()) {
  //			if (*it == 0) {
  //				it = nums.erase(it);
  //				count++;
  //				it--;
  //			}
  //			if (it != nums.end())
  //				it++;
  //		}
  //		while (count) {
  //			nums.push_back(0);
  //			count--;
  //		}
  //	}
  //};

  // Forward declaration of isBadVersion API.
  //bool isBadVersion(int version) {
  //	if (version < 2) {
  //		return false;
  //	}
  //	else {
  //		return true;
  //	}
  //}
  //
  //class Solution {
  //public:
  //	int static firstBadVersion(int n) {
  //		if (n == 1) {
  //			return 1;
  //		}
  //		int l = 0;
  //		int r = n - 1;
  //		while (l < r) {
  //			int mid = l + (r - l) / 2;
  //			if (!isBadVersion(mid)) {
  //				l = mid + 1;
  //			}
  //			else {
  //				r = mid - 1;
  //			}
  //		}
  //		return r;
  //	}
  //};
  //int main() {
  //	int a=Solution::firstBadVersion(2);
  //	return 0;
  //}


  ////https://leetcode-cn.com/problems/missing-number/submissions/
  //class Solution {
  //public:
  //	int missingNumber(vector<int>& nums) {
  //		sort(nums.begin(), nums.end());
  //		for (int i = 0; i < nums.size(); ++i) {
  //			if (i != nums[i]) {
  //				return i;
  //			}
  //		}
  //		return nums.size();
  //	}
  //};

  ////https://leetcode-cn.com/problems/ugly-number/submissions/
  //
  //class Solution {
  //public:
  //	bool isUgly(int num) {
  //		if (num == 0) {
  //			return false;
  //		}
  //		while (num != 1) {
  //			if (num % 2 == 0) {
  //				num /= 2;
  //			}
  //			else if (num % 3 == 0) {
  //				num /= 3;
  //			}
  //			else if (num % 5 == 0) {
  //				num /= 5;
  //			}
  //			else {
  //				return false;
  //			}
  //		}
  //		return true;
  //	}
  //};

  //
  //https://leetcode-cn.com/problems/valid-perfect-square/submissions/
  //
  //class Solution {
  //public:
  //	bool isPerfectSquare(int num) {
  //		if (num == 1) {
  //			return true;
  //		}
  //		for (long i = 0; i <= num / 2; ++i) {
  //			if (i*i == num) {
  //				return true;
  //			}
  //		}
  //		return false;
  //	}
  //};
  //
  //https://leetcode-cn.com/problems/find-the-difference/
  //
  //
  //class Solution {
  //public:
  //	char findTheDifference(string s, string t) {
  //		方法一
  //		/*
  //		sort(s.begin(),s.end());
  //		sort(t.begin(),t.end());
  //		for(int i=0; i<s.size(); ++i){
  //			if(s[i]!=t[i]){
  //				return t[i];
  //			}
  //		}
  //		return t[s.size()];
  //		*/
  ///*
  //		方法二
  //		if (s.size() == 0) {
  //			return t[0];
  //		}
  //		for (int i = 0; i < t.size(); ++i) {
  //			s.push_back(t[i]);
  //		}
  //		char a = s[0];
  //		for (int j = 1; j < s.size(); ++j) {
  //			a ^= s[j];
  //		}
  //		return a;
  //	}
  //};
  //
  //https://leetcode-cn.com/problems/guess-number-higher-or-lower/submissions/
  //
  // Forward declaration of guess API.
  // @param num, your guess
  // @return -1 if my number is lower, 1 if my number is higher, otherwise return 0
  //int guess(int num);
  //
  //class Solution {
  //public:
  //	int guessNumber(int n) {
  //		if (n == 1) {
  //			return 1;
  //		}
  //		int l = 0;
  //		int r = n;
  //		while (l <= r) {
  //			int mid = l + (r - l) / 2;
  //			if (guess(mid) == 0) {
  //				return mid;
  //			}
  //			if (guess(mid) == -1) {
  //				r = mid - 1;
  //			}
  //			if (guess(mid) == 1) {
  //				l = mid + 1;
  //			}
  //		}
  //		return -1;
  //		/*  递归算法有问题，无法处理大数
  //		if(guess(n)==-1){
  //			return guessNumber(n-1);
  //		}
  //		if(guess(n)==1){
  //			return guessNumber(n+1);
  //		}
  //		return n;
  //		*/
  ///*
  //	}
  //};
  //
  //
  //https://leetcode-cn.com/problems/lowest-common-ancestor-of-a-binary-search-tree/submissions/
  ///**
  // * Definition for a binary tree node.
  // * struct TreeNode {
  // *     int val;
  // *     TreeNode *left;
  // *     TreeNode *right;
  // *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
  // * };
  // */
  ///*
  //class Solution {
  //public:
  //	TreeNode* lowestCommonAncestor(TreeNode* root, TreeNode* p, TreeNode* q) {
  //		if (root == NULL || root == p || root == q
  //			|| (root != NULL && root->val > p->val&&root->val < q->val)
  //			|| (root != NULL && root->val<p->val&&root->val>q->val)) {
  //			return root;
  //		}
  //
  //		if (p->val < root->val&&q->val < root->val&&root != NULL) {
  //			return lowestCommonAncestor(root->left, p, q);
  //		}
  //		if (p->val > root->val&&q->val > root->val&&root != NULL) {
  //			return lowestCommonAncestor(root->right, p, q);
  //		}
  //		return root;
  //	}
  //};
  //
  //https://leetcode-cn.com/problems/lowest-common-ancestor-of-a-binary-tree/
  //
  ///**
  // * Definition for a binary tree node.
  // * struct TreeNode {
  // *     int val;
  // *     TreeNode *left;
  // *     TreeNode *right;
  // *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
  // * };
  // */
  ///*
  //class Solution {
  //public:
  //	TreeNode* lowestCommonAncestor(TreeNode* root, TreeNode* p, TreeNode* q) {
  //		if (root == NULL || root == p || root == q) {
  //			return root;
  //		}
  //		TreeNode* left = lowestCommonAncestor(root->left, p, q);
  //		TreeNode* right = lowestCommonAncestor(root->right, p, q);
  //		if (left&&right) {
  //			return root;
  //		}
  //		return left ? left : right;
  //	}
  //};
  //
  //
  //
  //
  //
  //https://leetcode-cn.com/problems/valid-anagram/
  //class Solution {
  //public:
  //	bool isAnagram(string s, string t) {
  //		sort(s.begin(), s.end());
  //		sort(t.begin(), t.end());
  //		if (s.size() != t.size()) {
  //			return false;
  //		}
  //		for (int i = 0; i < s.size(); ++i) {
  //			if (s[i] != t[i]) {
  //				return false;
  //			}
  //		}
  //		return true;
  //	}
  //};
  //
  //https://leetcode-cn.com/problems/isomorphic-strings/submissions/
  //
  //class Solution {
  //public:
  //	bool isIsomorphic(string s, string t) {
  //		if (s.size() == 0) return true;
  //		for (int i = 0; i < s.size(); ++i) {
  //			if (s.find(s[i]) != t.find(t[i])) {
  //				return false;
  //			}
  //		}
  //		return true;
  //	}
  //};
  //
  //
  //
  //https://leetcode-cn.com/problems/palindrome-linked-list/submissions/
  //
  ///**
  // * Definition for singly-linked list.
  // * struct ListNode {
  // *     int val;
  // *     ListNode *next;
  // *     ListNode(int x) : val(x), next(NULL) {}
  // * };
  // */
  ///*
  //class Solution {
  //public:
  //	bool isPalindrome(ListNode* head) {
  //		if (head == NULL || head->next == NULL) {
  //			return true;
  //		}
  //		ListNode* fast = head;
  //		ListNode* slow = head;
  //		stack<int> s;
  //		while (fast->next != NULL && fast->next->next != NULL) {
  //			fast = fast->next->next;
  //			slow = slow->next;
  //		}
  //		if (fast->next) {
  //			slow = slow->next;
  //		}
  //		while (slow) {
  //			s.push(slow->val);
  //			slow = slow->next;
  //		}
  //		while (!s.empty()) {
  //			if (s.top() != head->val) {
  //				return false;
  //			}
  //			s.pop();
  //			head = head->next;
  //		}
  //		return true;
  //
  //		这个方法有问题  但是现在仍然没有解决 
  //		/*
  //		vector<int> s;
  //		if(head==NULL){
  //			return true;
  //		}
  //		while(!head){
  //			s.push_back(head->val);
  //			head=head->next;
  //		}
  //		int begin = 0;
  //		int end = s.size()-1;
  //		while(begin<end){
  //			if(s[begin]!=s[end]){
  //			return false;
  //			}
  //			begin++;
  //			end--;
  //		}
  //		return true;
  //		*/
  //	}
  //};
  //
  //
  //https://leetcode-cn.com/problems/add-digits/
  //
  //class Solution {
  //public:
  //	int addDigits(int num) {
  //		return (num - 1) % 9 + 1;
  //	}
  //};
  //
  //
  //https://leetcode-cn.com/problems/count-primes/submissions/
  //
  //class Solution {
  //public:
  //	int countPrimes(int n) {
  //		if (n <= 0) {
  //			return 0;
  //		}
  //		int num[n];
  //		int count = 0;
  //		for (int i = 0; i < n; i++)
  //		{
  //			num[i] = i;
  //		}
  //
  //		for (int j = 2; j < n; j++)
  //		{
  //			if (0 != num[j])
  //			{
  //				for (int k = 2; k*j < n; k++)
  //				{
  //					num[k*j] = 0;
  //				}
  //			}
  //		}
  //		for (int z = 2; z < n; ++z) {
  //			if (num[z] != 0) {
  //				count++;
  //			}
  //		}
  //		return count;
  //	}
  //};
  //
  //
  //https://leetcode-cn.com/problems/power-of-two/submissions/
  //class Solution {
  //public:
  //	bool isPowerOfTwo(int n) {
  //		if (n <= 0) {
  //			return false;
  //		}
  //		for (int i = 0; i < 32; ++i) {
  //			if (n == 1) {
  //				return true;
  //			}
  //			if (n % 2 == 1) {
  //				return false;
  //			}
  //			n /= 2;
  //		}
  //		return true;
  //	}
  //};
  //
  //https://leetcode-cn.com/problems/delete-node-in-a-linked-list/submissions/
  ///**
  // * Definition for singly-linked list.
  // * struct ListNode {
  // *     int val;
  // *     ListNode *next;
  // *     ListNode(int x) : val(x), next(NULL) {}
  // * };
  // */
  //class Solution {
  //public:
  //	void deleteNode(ListNode* node) {
  //		ListNode* t = node->next;
  //		node->val = node->next->val;
  //		node->next = node->next->next;
  //		delete t;
  //		t = NULL;
  //	}
  //};
  //
  //https://leetcode-cn.com/problems/reverse-linked-list/
  //
  //
  ///**
  // * Definition for singly-linked list.
  // * struct ListNode {
  // *     int val;
  // *     struct ListNode *next;
  // * };
  // */
  //typedef struct ListNode node;
  //
  //struct ListNode* reverseList(struct ListNode* head) {
  //	node* pre = NULL;
  //	node* cur = head;
  //	node* next = NULL;
  //	while (cur) {
  //		next = cur->next;
  //		cur->next = pre;
  //		pre = cur;
  //		cur = next;
  //	}
  //	return pre;
  //}
  //
  //https://leetcode-cn.com/problems/palindrome-number/submissions/
  //
  //class Solution {
  //public:
  //	bool isPalindrome(int x) {
  //		vector<int> v;
  //		if (x < 0) {
  //			return false;
  //		}
  //		if (x >= 0 && x <= 9) {
  //			return true;
  //		}
  //		while (x) {
  //			v.push_back(x % 10);
  //			x /= 10;
  //		}
  //		int begin = 0;
  //		int end = v.size() - 1;
  //		while (begin < end) {
  //			if (v[begin] != v[end]) {
  //				return false;
  //			}
  //			begin++;
  //			end--;
  //		}
  //		return true;
  //	}
  //};
  //
  //https://leetcode-cn.com/problems/reverse-integer/submissions/
  //class Solution {
  //public:
  //	int reverse(int x) {
  //		if (x >= -9 && x <= 9) {
  //			return x;
  //		}
  //		long p = 0;
  //		while (x) {
  //			p *= 10;
  //			if (p > INT_MAX || p < INT_MIN)
  //			{
  //				return 0;
  //			}
  //			p += x % 10;
  //			x /= 10;
  //		}
  //		return p;
  //	}
  //};
  //
  //
  //https://leetcode-cn.com/problems/two-sum/submissions/
  //class Solution {
  //public:
  //	vector<int> twoSum(vector<int>& nums, int target) {
  //		vector<int> v;
  //		for (int i = 0; i < nums.size() - 1; ++i) {
  //			for (int j = i + 1; j < nums.size(); ++j) {
  //				if (nums[i] + nums[j] == target) {
  //					v.push_back(i);
  //					v.push_back(j);
  //					return v;
  //				}
  //
  //			}
  //		}
  //		return v;
  //	}
  //};
  //
  //https://www.nowcoder.com/practice/
  //1221ec77125d4370833fd3ad5ba72395?
  //tpId=37&&tqId=21260&rp=1&ru=/act
  //ivity/oj&qru=/ta/huawei/question-ranking
  //递归
  //int get_total_val(int month) {
  //	if (month < 3) {
  //		return 1;
  //	}
  //	else {
  //		return get_total_val(month - 2) + get_total_val(month - 1);
  //	}
  //
  //}
  //
  //int main() {
  //	int month = 0;
  //	while (cin >> month) {
  //		int sum = 0;
  //
  //		sum = get_total_val(month);
  //		cout << sum << endl;
  //	}
  //
  //	return 0;
  //}
  //
  //非递归
  //int main() {
  //
  //	int month = 0;
  //	while (cin >> month) {
  //		int num1 = 1;
  //		int num2 = 1;
  //		int tmp;
  //		for (int i = 3; i <= month; ++i) {
  //			tmp = num1 + num2;
  //			num1 = num2;
  //			num2 = tmp;
  //		}
  //		cout << tmp << endl;
  //	}
  //	return 0;
  //}
  //
  //
  //
  //https://leetcode-cn.com/problems/implement-queue-using-stacks/submissions/
  //class MyQueue {
  //public:
  //	stack<int> old_stack;
  //	stack<int> new_stack;
  //	/** Initialize your data structure here. */
  //	MyQueue() {
  //
  //	}
  //
  //	/** Push element x to the back of queue. */
  //	void push(int x) {
  //		new_stack.push(x);
  //	}
  //
  //	/** Removes the element from in front of queue and returns that element. */
  //	int pop() {
  //		swap_stack();
  //		int a = old_stack.top();
  //		old_stack.pop();
  //		return a;
  //	}
  //
  //	/** Get the front element. */
  //	int peek() {
  //		swap_stack();
  //		return old_stack.top();
  //	}
  //	void swap_stack() {
  //		if (!old_stack.empty()) return;
  //		while (!new_stack.empty()) {
  //			old_stack.push(new_stack.top());
  //			new_stack.pop();
  //		}
  //	}
  //	/** Returns whether the queue is empty. */
  //	bool empty() {
  //		if (old_stack.empty() && new_stack.empty()) {
  //			return true;
  //		}
  //		return false;
  //	}
  //};
  //
  ///**
  // * Your MyQueue object will be instantiated and called as such:
  // * MyQueue* obj = new MyQueue();
  // * obj->push(x);
  // * int param_2 = obj->pop();
  // * int param_3 = obj->peek();
  // * bool param_4 = obj->empty();
  // */
  //
  //
  //https://www.nowcoder.com/practice/51dcb4eef6004f6f
  //8f44d927463ad5e8?tpId=98&tqId=32825&tPage=1&rp=1
  //&ru=%2Fta%2F2019test&qru=%2Fta%2F2019test%2Fquestion-ranking
  //
  //int main() {
  //	int l, r;
  //	while (cin >> l >> r) {
  //		int count = 0;
  //		for (int i = l; i <= r; ++i) {
  //			if (i % 3 == 2 || i % 3 == 0) {
  //				count++;
  //			}
  //		}
  //		cout << count << endl;
  //	}
  //	return 0;
  //}
  //
  //
  //int main() {
  //	vector<int> arr;
  //	int count = 0;
  //	int l = 0;
  //	int r = 0;
  //	arr.push_back(0);
  //	for (int i = 1; i < 1000; ++i) {
  //		arr.push_back(i*(1 + i) / 2);
  //	}
  //	cin >> l >> r;
  //	for (int j = l; j <= r; ++j) {
  //		if (arr[j] % 3 == 0) {
  //			count++;
  //		}
  //	}
  //	cout << count << endl;
  //	return 0;
  //}
  //
  //
  //
  //https://leetcode-cn.com/problems/invert-binary-tree/submissions/
  ///**
  // * Definition for a binary tree node.
  // * struct TreeNode {
  // *     int val;
  // *     TreeNode *left;
  // *     TreeNode *right;
  // *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
  // * };
  // */
  //class Solution {
  //public:
  //	TreeNode* invertTree(TreeNode* root) {
  //		if (root == NULL) {
  //			return root;
  //		}
  //		TreeNode* tmp = root;
  //		tmp = root->left;
  //		root->left = root->right;
  //		root->right = tmp;
  //		invertTree(root->left);
  //		invertTree(root->right);
  //		return root;
  //	}
  //};
  //
  //
  //https://leetcode-cn.com/problems/implement-stack-using-queues/
  //class MyStack {
  //public:
  //	/** Initialize your data structure here. */
  //	deque<int> q1;
  //	MyStack() {
  //
  //	}
  //
  //	/** Push element x onto stack. */
  //	void push(int x) {
  //		q1.push_back(x);
  //
  //	}
  //
  //	/** Removes the element on top of the stack and returns that element. */
  //	int pop() {
  //		if (!q1.empty()) {
  //			int a = top();
  //			q1.pop_back();
  //			return a;
  //		}
  //		return -1;
  //	}
  //
  //	/** Get the top element. */
  //	int top() {
  //		if (!q1.empty())
  //			return q1[q1.size() - 1];
  //		return -1;
  //	}
  //
  //	/** Returns whether the stack is empty. */
  //	bool empty() {
  //		if (q1.empty())
  //			return true;
  //		return false;
  //	}
  //};
  //
  ///**
  // * Your MyStack object will be instantiated and called as such:
  // * MyStack* obj = new MyStack();
  // * obj->push(x);
  // * int param_2 = obj->pop();
  // * int param_3 = obj->top();
  // * bool param_4 = obj->empty();
  // */
  //
  //
  //
  //https://leetcode-cn.com/problems/contains-duplicate-ii/submissions/
  //class Solution {
  //public:
  //	bool static containsNearbyDuplicate(vector<int>& nums, int k) {
  //		for (int i = 0; i < nums.size(); ++i) {
  //			int l = 0;
  //			vector<int>::iterator it = find(nums.begin() + i + 1, nums.end(), nums[i]);
  //			if (it != nums.end()) {
  //				l = it - (nums.begin() + i);
  //				if (l <= k) {
  //					return true;
  //				}
  //			}
  //		}
  //		return false;
  //	}
  //};
  //int main() {
  //
  //	vector<int> v;
  //	v.push_back(1);
  //	v.push_back(2);
  //	v.push_back(3);
  //	v.push_back(1);
  //	bool a = Solution::containsNearbyDuplicate(v, 3);
  //	cout << a;
  //
  //
  //	return 0;
  //}
  //
  //https://leetcode-cn.com/problems/contains-duplicate/
  //class Solution {
  //public:
  //	bool containsDuplicate(vector<int>& nums) {
  //		int end = nums.size();
  //		sort(nums.begin(), nums.end());
  //		for (int i = 0; i < end - 1; ++i) {
  //			if (nums[i] == nums[i + 1]) {
  //				return true;
  //			}
  //		}
  //		return false;
  //	}
  //};
  //
  //
  //https://leetcode-cn.com/problems/reverse-vowels-of-a-string/submissions/
  //class Solution {
  //public:
  //	string  static reverseVowels(string s) {
  //		if (s.size() != 0) {
  //			int begin = 0;
  //			int end = s.size() - 1;
  //			while (begin < end) {
  //				while (s[begin] != 'a'&&s[begin] != 'A' &&s[begin] != 'e'
  //					&&s[begin] != 'i'&&s[begin] != 'o'&&s[begin] != 'u'
  //					&&s[begin] != 'E' &&s[begin] != 'I'&&s[begin] != 'O'
  //					&&s[begin] != 'U'&&begin < end) {
  //					begin++;
  //				}
  //				while (s[end] != 'a'&&s[end] != 'A'&&s[end] != 'e'&&s[end] != 'i'
  //					&&s[end] != 'o' &&s[end] != 'u'&&s[end] != 'E'
  //					&&s[end] != 'I'&&s[end] != 'O'&&s[end] != 'U'
  //					&&begin < end) {
  //					end--;
  //				}
  //				char tmp;
  //				tmp = s[begin];
  //				s[begin] = s[end];
  //				s[end] = tmp;
  //				begin++;
  //				end--;
  //			}
  //		}
  //		return s;
  //	}
  //};
  //int main() {
  //	string  s = "leetcode";
  //	string s1;
  //	s1 = Solution::reverseVowels(s);
  //	return 0;
  //}
  //int main() {
  //	list<int> s;
  //
  //	return 0;
  //}
  //
  //https://leetcode-cn.com/problems/remove-duplicates-from-sorted-array/submissions/
  //
  //class Solution {
  //public:
  //	int removeDuplicates(vector<int>& nums) {
  //		if (nums.size() > 1) {
  //			for (int i = 0; i < nums.size() - 1; i++) {
  //				vector<int>::iterator it = nums.begin() + i + 1;
  //				for (int j = i + 1; j < nums.size(); ++j) {
  //					if (nums[i] == nums[j]) {
  //						it = nums.erase(it);
  //						j--;
  //					}
  //				}
  //			}
  //		}
  //
  //		return nums.size();
  //	}
  //};
  //
  //
  //
  //
  //
  //https://leetcode-cn.com/problems/kth-largest-element-in-an-array/
  //
  //
  //class Solution {
  //public:
  //	int findKthLargest(vector<int>& nums, int k) {
  //		sort(nums.begin(), nums.end(), greater<int>());
  //		for (int i = 0; i < nums.size(); ++i) {
  //			for (int j = i; j < nums.size(); ++j) {
  //				if (nums[i] != nums[j]) {
  //					--k;
  //				}
  //				if (k == 1) {
  //					return nums[j];
  //				}
  //			}
  //		}
  //		return nums[nums.size() - 1];
  //	}
  //};
