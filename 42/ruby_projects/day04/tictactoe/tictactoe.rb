#!/usr/bin/ruby
curBoard = {row1: [" "," "," | "," "," | "," "," "], space1: ["-----------"], row2: [" "," "," | "," "," | "," "," "], space: ["-----------"], row3: [" "," "," | "," "," | "," "," "]}
$columns = [nil,1,3,5]
$x_o = true
$foundWin = false
playernumber = 2.to_s
$tie = false

def printBoard(boardH) #function to print a the current board that is given in the parameters
	boardH.each_value do |x|
		x.each {|y| print y}
		print "\n"
	end
end

def placeXO(board,c,r,xo) #method to place the X or O with args column, and row. true == X, false == O
	curarray = board["row#{r}".to_sym]
	column = $columns[c]
	if xo == true and curarray[column] == " "
		curarray[column] = "X"
	elsif xo == false and curarray[column] == " "
		curarray[column] = "O"
	end
end

def moveValid?(board,c,r,xo) #a method that checks if the move input in its parameters is valid
	curarray = board["row#{r}".to_sym]
	column = $columns[c]
	if c > 3 or r > 3 or c < 1 or r < 1
		return false
	elsif curarray[column].include?("X") == true or curarray[column].include?("O") == true
		return false
	else
		return true
	end
end

def switchTurn() #switches global turn variable
	if $x_o  == true
		$x_o = false
	else
		$x_o = true
	end
end

def didWin(board,c,r,xo) #checks if the move played is a winning move
	@winningPairs = [1,3]
	@special = 0
	@le = ""
	if $x_o == true
		@le = "X"
	else
		@le = "O"
	end
	#go through every possible combination of win (not the best way, but it works)
	if @le == board[:row1][$columns[1]] and  @le == board[:row1][$columns[2]] and @le == board[:row1][$columns[3]]
		$foundWin = true
	elsif @le == board[:row2][$columns[1]] and @le == board[:row2][$columns[2]] and @le == board[:row2][$columns[3]]
		$foundWin = true
	elsif @le == board[:row3][$columns[1]] and @le == board[:row3][$columns[2]] and @le== board[:row3][$columns[3]]
		$foundWin = true
	elsif @le == board[:row1][$columns[1]] and @le == board[:row2][$columns[1]] and @le == board[:row3][$columns[1]]
		$foundWin = true
	elsif @le == board[:row1][$columns[2]] and @le == board[:row2][$columns[2]] and @le== board[:row3][$columns[2]]
		$foundWin = true
	elsif @le == board[:row1][$columns[3]] and @le == board[:row2][$columns[3]] and @le == board[:row3][$columns[3]]
		$foundWin = true
	elsif @le == board[:row1][$columns[1]] and @le == board[:row2][$columns[2]] and @le == board[:row3][$columns[3]]
		$foundWin = true
	elsif @le == board[:row1][$columns[3]] and @le == board[:row2][$columns[2]] and @le == board[:row3][$columns[1]]
		$foundWin = true
	else
		$foundWin = false
	end
end

#main program that uses the functions overall to run the tic tac toe program
def tictactoe()
	cur = {row1: [" "," "," | "," "," | "," "," "], space1: ["-----------"], row2: [" "," "," | "," "," | "," "," "], space: ["-----------"], row3: [" "," "," | "," "," | "," "," "]}
	$columns = [nil,1,3,5]
	$x_o = true
	$foundWin = false
	playernumber = 2.to_s
	counter = 0
	print "Instructions: Input a column and row when prompted seperated by a single comma. ('2 2')\n"
	while $foundWin == false and counter < 9 do #while no one has won, do turns
		printBoard(cur)
		print "Player 1's (X) turn. Input: " #start player 1's turn
		player1Input = gets.chomp.split(' ')
		while player1Input[0] == nil or player1Input[1] == nil
			print "Move was not valid. Please try again: "
			player1Input = gets.chomp.split(' ')
			player1C = player1Input[0].to_i
			player1R = player1Input[1].to_i
		end
		player1C = player1Input[0].to_i
		player1R = player1Input[1].to_i
		if moveValid?(cur,player1C,player1R,$x_o) == false
			while moveValid?(cur,player1C,player1R,$x_o) == false
				print "Move was not valid. Please try again: "
				player1Input = gets.chomp.split(' ')
				player1C = player1Input[0].to_i
				player1R = player1Input[1].to_i
			end
		end #all above this end is making sure input is valid from user, next is placing the x and determining if it is a win
		placeXO(cur,player1C,player1R,$x_o)
		counter += 1
		if counter > 8 and $fondWin == false
			$tie = true
			break
		end
		didWin(cur,player1C,player1R,$x_o)
		if $foundWin == true #check if move was winning move, if so, break while loop
			break
		end
		switchTurn() #starting player 2's turn, do everything I did for player 1 except for player 2
		#next turn
		printBoard(cur)
		print "Player 2's (O) turn. Input: "
		player2Input = gets.chomp.split(' ')
		while player2Input[0] == nil or player2Input[1] == nil
			print "Move was not valid. Please try again: "
			player2Input = gets.chomp.split(' ')
			player2C = player2Input[0].to_i
			player2R = player2Input[1].to_i
		end
		player2C = player2Input[0].to_i
		player2R = player2Input[1].to_i
		if moveValid?(cur,player2C,player2R,$x_o) == false
			while moveValid?(cur,player2C,player2R,$x_o) == false
				print "Move was not valid. Please try again: "
				player2Input = gets.chomp.split(' ')
				player2C = player2Input[0].to_i
				player2R = player2Input[1].to_i
			end
		end
		placeXO(cur,player2C,player2R,$x_o)
		counter += 1
		didWin(cur,player2C,player2R,$x_o)
		switchTurn()
		#no need to check if won, while loop will automatically do that for us at the loop
	end
	print "\n"
	print "
	╔═══╗─────────────╔╗───╔╗───╔╗
	║╔═╗║────────────╔╝╚╗──║║──╔╝╚╗
	║║─╚╬══╦═╗╔══╦═╦═╩╗╔╬╗╔╣║╔═╩╗╔╬╦══╦═╗╔══╗
	║║─╔╣╔╗║╔╗╣╔╗║╔╣╔╗║║║║║║║║╔╗║║╠╣╔╗║╔╗╣══╣
	║╚═╝║╚╝║║║║╚╝║║║╔╗║╚╣╚╝║╚╣╔╗║╚╣║╚╝║║║╠══║
	╚═══╩══╩╝╚╩═╗╠╝╚╝╚╩═╩══╩═╩╝╚╩═╩╩══╩╝╚╩══╝
	──────────╔═╝║
	──────────╚══╝\n" #print the awesome congrats ASCII code (I got it off the internet, just sayin)
	printBoard(cur)
end
tictactoe()

if $x_o == true #change boolean turn variable to number to input into final win print
	$playernumber = 1.to_s
end
if $tie == true
	print "Tie! Good game.\nWant a rematch? (y/n): "
else
	print "\nPlayer #{$playernumber} won! Good game.\nWant to play again? (y/n): "
end
answer = gets.chomp
if answer.downcase == "y"
	while answer.downcase == "y"
		tictactoe()
		if $x_o == true #change boolean turn variable to number to input into final win print
			$playernumber = 1.to_s
		end
		if $tie == true
			print "Tie! Good game.\nWant a rematch? (y/n): "
		else
			print "\nPlayer #{$playernumber} won! Good game.\nWant to play again? (y/n): "
		end
		answer = gets.chomp
	end
else
	print "Ok! Ending program. Thanks for playing!\n"
end
