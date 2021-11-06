##
##
## QWASAR.IO -- my_data_process
##
##
## @param {String[]} param_1
##
## @return {string}
##
require 'csv'

def my_data_process(param_1)

    col_arr = Array.new(9)

    map = {}

    param_1.each_with_index do |item, index|
        if (index == 0 )

            colums = item.split(',')    
            colums.each_with_index do |v, i|
                col_arr[i] = v;
                case i
                    when 0, 4 , 5 , 6 , 7 , 9
                        map[v] = {}
                end
            end
        end
        if (index > 0 )
            colums = item.split(',')    
            colums.each_with_index do |v, i|
                case i
                    when 0 , 4 , 5, 6 , 7, 9
                        map_int = map[col_arr[i]]
                        if map_int.has_key?(v)
                            map_int[v] += 1
                        else
                            map_int[v] = 1    
                        end
                end
            end
        end
    end
    return map
end
