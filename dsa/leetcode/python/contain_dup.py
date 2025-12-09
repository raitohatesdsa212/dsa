
num = [1,2,3,1]
freq = {}
def cd(nums)->bool:
    n = len(set(num))
    return len(num) != n

print(cd(num))

