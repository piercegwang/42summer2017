#!/usr/bin/ruby

def find_the_gingers(para)
	redheads = para.select {|k,v| v == :red}
	names = []
	redheads.each_key { |key| names.push(key) }
	print names
end

Dupont_family = {
	"matthew" => :red,
	"mary" => :blonde,
	"virginia" => :brown,
	"gaetan" => :red,
	"fred" => :red,
}
find_the_gingers(Dupont_family)
