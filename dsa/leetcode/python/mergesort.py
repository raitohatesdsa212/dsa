def merge_sort(array):
    if len(array) <= 1:
        return array
    mid = len(array) // 2
    left = merge_sort(array[:mid])
    right = merge_sort(array[mid:])
    return conquer(left, right)
def conquer(left, right):
    mem = []
    i = j = 0
    while i < len(left) and j < len(right):
        if left[i] < right[j]:
            mem.append(left[i])
            i += 1
        else:
            mem.append(right[j])
            j += 1
    mem.extend(left[i:])
    mem.extend(right[j:])
    return mem
