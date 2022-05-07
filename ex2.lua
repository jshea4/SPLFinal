tab = {"a", "b", "c"}

--memory currently in use:
print(collectgarbage("count"))  --Output: 24.4873046875

tab = nil --signify table data isn't in use

--run cycle of garbage collection
collectgarbage("collect")
print(collectgarbage("count"))  --Output: 23.4453125