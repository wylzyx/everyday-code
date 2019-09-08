//用栈结构实现，栈中存放左括号，当遇到右括号之后，检查栈中是否有左括号，如果有则出栈，如果没有， 则说明不匹配
class Parenthesis {
public:    
	bool chkParenthesis(string A, int n) {             
		stack<char> sc;        
		for (auto ele : A) {            
			switch (ele) {                
			case '(':                    
				sc.push(ele);                    
				break;                
			case ')': {                        
				if (sc.empty() || sc.top() != '(')                            
					return false;                        
				else                            
					sc.pop();                    
			}                    
				break;             
			default:                 
				return false;            
			}        
		}        
		return true;    
	} 
};