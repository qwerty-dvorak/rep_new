def generate_all_subsequences(lst):
    n = len(lst)
    all_subsequences = []
    for i in range(1 << n):
        subsequence = []
        for j in range(n):
            if i & (1 << j):
                subsequence.append(lst[j])
        all_subsequences.append(subsequence)
    return all_subsequences

li = [1, 2, 3, 4]
all_subsequences = generate_all_subsequences(li)
all_pairs = []
for i in range(len(all_subsequences)):
    for j in range(i + 1, len(all_subsequences)):
        pair = (all_subsequences[i], all_subsequences[j])
        all_pairs.append(pair)
print(all_pairs)
