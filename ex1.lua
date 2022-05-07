function inorder(root)
    if root == nil then 
        return 
    end
    inorder(root.left)
    print(root.data)
    inorder(root.right)
end

local root = {                  --   Test tree visualization:     
    data = 2,                   --              2                 
    left = { data = 1 },        --            /  \				
    right = {                   --           1    4               
        data = 4,               --               / \              
        left = { data = 3 },    --              3   5             
        right = { data = 5 }
    }
}

inorder(root)]]
--[[
    Output: 
    1
    2
    3
    4
    5
]]