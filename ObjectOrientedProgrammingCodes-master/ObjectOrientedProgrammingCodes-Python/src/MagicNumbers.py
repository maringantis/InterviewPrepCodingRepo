def arithmatic_boggle(magic_number, numbers):
    index = 0
    tmp = 0
    #if len(numbers) == 0 and magic_number == 0:
    #    return True
    if isMagicNumber(magic_number, numbers, index, tmp):
        print('Magic Number')
        return True
    else:
        print('Not a Magic Number')
        return False

def isMagicNumber(magicNum, arr, ind, tp):
    if len(arr) > ind:
        return (isMagicNumber(magicNum, arr, ind+1, tp+arr[ind]) or isMagicNumber(magicNum, arr, ind+1, tp-arr[ind]))

    if magicNum == tp:
        return True
    else:
        return False

arithmatic_boggle()
