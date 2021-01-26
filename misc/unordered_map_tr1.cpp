#include <tr1/unordered_map>

#include <iostream>
#include <string>
 
int main()
{
    // Create an unordered_map of three strings (that map to strings)
    std::tr1::unordered_map<std::string, std::string> u;
    u.insert({"RED","#FF0000"});
    u.insert({"GREEN","#00FF00"});
    u.insert({"BLUE","#0000FF"});
 
    // Iterate and print keys and values of unordered_map
    for( std::pair<std::string, std::string> n : u ) {
        std::cout << "Key:[" << n.first << "] Value:[" << n.second << "]\n";
    }
 
    // Add two new entries to the unordered_map
    u["BLACK"] = "#000000";
    u["WHITE"] = "#FFFFFF";
 
    // Output values by key
    std::cout << "The HEX of color RED is:[" << u["RED"] << "]\n";
    std::cout << "The HEX of color BLACK is:[" << u["BLACK"] << "]\n";
 
    return 0;
}