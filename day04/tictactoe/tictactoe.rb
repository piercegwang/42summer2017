#!/usr/bin/ruby
cur = {row1: [" "," "," | "," "," | "," "," "], space1: ["-----------"], row2: [" "," "," | "," "," | "," "," "], space: ["-----------"], row3: [" "," "," | "," "," | "," "," "]}
$columns = [nil,1,3,5]
$x_o = true

def printBoard(boardH)
	boardH.each_value do |x|
		x.each {|y| print y}
		print "\n"
	end
end

def placeXO(board,c,r,xo) #method to place the X or O with args column, and row. true == X, false == O
	curarray = board["row#{r}".to_sym]
	column = $columns[c]
	if xo == true
		curarray[column] = "X"
	else
		curarray[column] = "O"
	end
end

def switchTurn()
	if $x_o  == true
		$x_o = false
	else
		$x_o = true
	end
end

#main program
print "Instructions: Input a column and row when prompted.\n"
for x in 1..9
	printBoard(cur)
	print "Player 1's (X) turn.\nColumn:  "
	player1C = gets.chomp.to_i
	print "\nRow: "
	player1R = gets.chomp.to_i
	placeXO(cur,player1C,player1R,$x_o)
	switchTurn()
	#next turn
	printBoard(cur)
	print "Player 2's (O) turn.\nColumn: "
	player2C = gets.chomp.to_i
	print "\nRow: "
	player2R = gets.chomp.to_i
	placeXO(cur,player2C,player2R,$x_o)
	switchTurn()
end
