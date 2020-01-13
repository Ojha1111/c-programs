t=int(input())
for i in range(t):
    string=input()
    stack=[]
    flag=0
    for char in string:
        if char == '{' or char == '[' or char == '(':
            stack.append(char)
        elif char == '}' or char == ']' or char == ')':
            if len(stack) != 0:
                if (stack[-1] == '(' and char == ')') or (stack[-1] == '{' and char == '}') or (stack[-1] == '[' and char == ']'):
                    stack.pop()
            else:
                flag=1
                break

    
    if len(stack) == 0 and flag!=1:
        print('balanced')
    else:
        print('not balanced')
