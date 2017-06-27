#!/usr/bin/ruby

def find_the_gingers(para)
	para.select {|k,v|v == :red}.keys
end

Dupont_family = {
	"matthew" => :red,
	"mary" => :blonde,
	"virginia" => :brown,
	"gaetan" => :red,
	"fred" => :red,
}
p find_the_gingers(Dupont_family)
