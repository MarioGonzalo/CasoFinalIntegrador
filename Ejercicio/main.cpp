#include <vector>
#include <string>
#include <map>
#include "json11.hpp"
#include "JSONLib.h"

using namespace std;

struct Entorno;

class Json;

class Variant {
public:
    std::string to_string();
    std::string to_json_string();
    static Variant from_json_string(std::string sjson);
    typedef Variant (*proc_type)(const std::vector<Variant> &);

    typedef std::vector<Variant>::const_iterator iter;
    typedef std::map<std::string, Variant> map;

    variant_type type;
    std::string val;
    std::vector<Variant> list;
    proc_type proc;
    Entorno *env;

    Variant(variant_type type = Symbol) : type(type), env(0), proc(0) {}

    Variant(variant_type type, const std::string &val) : type(type), val(val), env(0), proc(0) {}

    Variant(proc_type proc) : type(Proc), proc(proc), env(0) {}

    std::string to_string() {
        // Provide actual implementation for to_string()
        return "Implementation for to_string()";
    }

    std::string to_json_string() {
        // Provide actual implementation for to_json_string()
        return "Implementation for to_json_string()";
    }

    static Variant from_json_string(std::string sjson) {
        // Provide actual implementation for from_json_string()
        return Variant();
    }
};

int main() {
    // Your main function code here

    return 0;
}
