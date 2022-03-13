class Solution
{
    public:
        bool isValid(string s)
{
  if (s.size() == 1)
    return false;
  else
  {
    stack<int> st;
    for (int i = 0; i < s.size(); i++)
    {
      if (s[i] == '(' || s[i] == '{' || s[i] == '[')
      {
        st.push(s[i]);
      }
      else
      {
        if(st.size() == 0) return false;
        char ch = st.top();
        st.pop();
        if (s[i] == ')' && ch == '(')
          continue;
        else if (s[i] == ']' && ch == '[')
          continue;
        else if (s[i] == '}' && ch == '{')
          continue;
        else
          return false;
      }
    }
    if (st.size() != 0)
      return false;
  }
  return true;
}
};