#!/usr/bin/ruby

require 'net/http'
require 'json'

def check_params?(args)
	    if ARGV.length != 2
			        return false
					    end
		    command = ARGV[0]
			    amount = ARGV[1]
				    if command != "buy" && command != "sell"
						        return false
								    end
					    if amount.to_i.to_s != amount
							        return false
									    end
						    return true
end

user_token = "2mLxhc5KpJGFsWuyU5Mv"
post_url = "http://btc42.42.us.org/exchange"
post_url = URI(post_url)
get_url = "http://btc42.42.us.org/value.json/?user_token=#{user_token}"
get_url = URI(get_url)
operation = ARGV[0]
amount = ARGV[1].to_i

params = {'user_token' => user_token, 'btc_amount' => nil, 'kind' => nil}
=begin
x = Net::HTTP.post_form(URI(post_url), params)
post_response = JSON.parse(x.body)
=end

def getCurrent()
	getResp = Net::HTTP.get(get_url)
	hashEverything = JSON.parse(getResp)
	values = []
	#somehash
	hashEverything["values"].each do |x|
		values.push(x["value"])
	end
	values.reverse!
	return hashEverything
end

def pennyStocks(x)
	if x["current"].to_i < 4
	  print "sold stock\n"
		#buy stocks
		print "bought stock\n"
	elsif x["current"].to_i > 10
		#sell stocks
		print "sold stock\n"
	end
end
loop do
	sleep(5)
	pennyStocks(getCurrent)
end
