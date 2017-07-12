def groupingDishes(dishes):
    table = {}
    for dish in dishes:
        size = len(dish)
        for i in range(1, size):
            if dish[i] in table:
                table[dish[i]].append(dish[0])
            else:
                table[dish[i]] = [dish[0]]
    ans = []
    for key, val in sorted(table.iteritems()):
        dishes = []
        if len(val) > 1:
            dishes = [key] + sorted(val)
            ans.append(dishes)
    return ans 
