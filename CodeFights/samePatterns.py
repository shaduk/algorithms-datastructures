
'''Given an array strings, determine whether it follows the sequence given in the patterns array. In other words, there should be no i and j for which strings[i] = strings[j] and patterns[i] ≠ patterns[j] or for which strings[i] ≠ strings[j] and patterns[i] = patterns[j].

Example

For strings = ["cat", "dog", "dog"] and patterns = ["a", "b", "b"], the output should be
areFollowingPatterns(strings, patterns) = true;
For strings = ["cat", "dog", "doggy"] and patterns = ["a", "b", "b"], the output should be
areFollowingPatterns(strings, patterns) = false.
'''



def samePattern(str1, str2):
    dic = {}
    for i in range(0, len(str1)):
        if str1[i] not in dic:
            dic[str1[i]] = str2[i]
        elif str1[i] in dic:
            if dic[str1[i]] != str2[i]:
                return False
    return True

def areFollowingPatterns(strings, patterns):
    if(len(strings) != len(patterns)):
        return False
    return samePattern(strings, patterns) and samePattern(patterns, strings)
    