import java.util.HashMap;
import java.util.HashSet;
import java.util.Map;
import java.util.Set;

class q36 {
    public boolean isValidSudoku(char[][] board) {
        Map<Integer, Set<Character>> cols = new HashMap<>();
        Map<Integer, Set<Character>> rows = new HashMap<>();
        Map<String, Set<Character>> squares = new HashMap<>();

        for (int r = 0; r < 9; r++) {
            for (int c = 0; c < 9; c++) {
                if (board[r][c] == '.') continue;
                String squareKey = (r / 3) + "," + (c / 3);
                if (!rows.containsKey(r)) {
                    rows.put(r, new HashSet<>());
                }
                if (!cols.containsKey(c)) {
                    cols.put(c, new HashSet<>());
                }
                if (!squares.containsKey(squareKey)) {
                    squares.put(squareKey, new HashSet<>());
                }

                if (rows.get(r).contains(board[r][c]) ||
                        cols.get(c).contains(board[r][c]) ||
                        squares.get(squareKey).contains(board[r][c])) {
                    return false;
                }
                rows.get(r).add(board[r][c]);
                cols.get(c).add(board[r][c]);
                squares.get(squareKey).add(board[r][c]);
            }
        }
        return true;
    }
}