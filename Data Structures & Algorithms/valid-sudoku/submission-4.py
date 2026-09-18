class Solution:
    def isValidSudoku(self, board: List[List[str]]) -> bool:
        n=len(board)
        m=len(board[0])
        col=defaultdict(list)
        row=defaultdict(list)
        box=defaultdict(list)
        for i in range(n):
            for j in  range(m):
                c=board[i][j]
                if  c == '.':
                    continue
                box_id=((i//3),(j//3))
                if (c in col[i]) or (c in row[j]) or  (c in box[box_id]):
                    return False
                col[i].append(c)
                row[j].append(c)
                box[box_id].append(c)

        return True
