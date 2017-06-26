#!/usr/bin/ruby
require 'net/http'
require 'json'

user_token = "2mLxhc5KpJGFsWuyU5Mv"
url = "http://btc42.42.us.org/value.json/?user_token=#{user_token}"
uri = URI(url)
response = Net::HTTP.get(uri)
results = JSON.parse(response)
print results
puts results["current"]
