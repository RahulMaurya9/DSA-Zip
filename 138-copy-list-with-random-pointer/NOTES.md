Create hash map put <Node , Node> of every node
​
run 2 time loop and do the connection like
map.get(cur).next = map.get(cur.nextt);
map.get(cur).random = map.get(cur.random);
​
​
Optimal approach
1. Iterate the original list and duplicate each node. The duplicate
of each node follows its original immediately.
2. Iterate the new list and assign the random pointer for each
duplicated node.
3. Restore the original list and extract the duplicated nodes.