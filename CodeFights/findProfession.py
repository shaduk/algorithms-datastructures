

def prof(index):
    if(index == 1 or index == 2):
        return "Engineer"
    if(index == 3):
        return "Doctor"
    if(index%2 == 0):
        if(prof(index/2) == "Engineer"):
            return "Engineer"
        return "Doctor"
    else:
        if(prof((index-1)/2) == "Engineer"):
            return "Doctor"
        return "Engineer"

def findProfession(level, pos):
    index = 2**(level-1) + pos - 1
    return prof(index)