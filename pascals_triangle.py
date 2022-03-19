def pascal(rep):
    if rep == 0:
        row = [0,1,0]
        print(row)
        return(row)
    else:
        row = pascal(rep - 1)
        new_row = []
        for i in range (0,rep + 1):
            new_row.append(row[i] + row[i + 1])
        new_row.insert(0,0)
        new_row.append(0)
        print(new_row)
        return(new_row)

pascal(5)