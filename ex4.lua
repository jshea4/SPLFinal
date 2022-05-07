function addToNumber(x)
    x = x + 1
end
function editTable(t)
   t.myMessage = "hello" 
end

local x = 5
local tab = { myMessage = "abcde" }

addToNumber(x) --Pass by value, so x doesn't change
print(x) --prints 5

editTable(tab) --Pass by reference, so 'myMessage' is overwritten
print(tab.myMessage) --prints "hello"