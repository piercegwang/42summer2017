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

if !check_params?(ARGV)
	    puts "Usage : ./make_me_rich.rb [buy/sell] amount"
else
	    user_token = "2mLxhc5KpJGFsWuyU5Mv"
		post_url = "http://btc42.42.us.org/exchange"
		get_url = "http://btc42.42.us.org/value.json/?user_token=#{user_token}"
		operation = ARGV[0]
		amount = ARGV[1].to_i

		params = {'user_token' => user_token, 'btc_amount' => amount, 'kind' => operation}
		x = Net::HTTP.post_form(URI(post_url), params)
		post_response = JSON.parse(x.body)
		if post_response["succes"]
			get_response = Net::HTTP.get(URI(get_url))
			data = JSON.parse(get_response)
			puts "#{data["money_dollar"]} dollars"
			puts "#{data["money_btc"]} bitcoins"
		else
			puts "Transaction failed"
		end
end
