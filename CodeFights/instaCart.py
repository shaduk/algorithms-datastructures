def isAdmissibleOverpayment(prices, notes, x):
    sumprice = 0
    for i in range(0,len(prices)):
        note = notes[i].split(' ')
        if(note[0] != "Same"):
            percent = int(note[0].split('.')[0])
            if(note[1] == 'higher'):
                
                sumprice = sumprice + (100/float(100+percent))*prices[i]
            elif(note[1] == 'lower'):
               
                sumprice = sumprice + (100/float(100-percent))*prices[i]
                
        else:
         
            sumprice = sumprice + prices[i]
          
    if(sum(prices)-sumprice <= x):
        return True
    else:
        return False