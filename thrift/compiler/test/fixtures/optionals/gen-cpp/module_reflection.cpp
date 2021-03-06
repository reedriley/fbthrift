/**
 * Autogenerated by Thrift
 *
 * DO NOT EDIT UNLESS YOU ARE SURE THAT YOU KNOW WHAT YOU ARE DOING
 *  @generated
 */
#include "thrift/compiler/test/fixtures/optionals/gen-cpp/module_reflection.h"
#include <thrift/lib/cpp/Reflection.h>

 namespace module_reflection_ {

// Reflection initializer for struct module.Color
void reflectionInitializer_11194926431654439212(::apache::thrift::reflection::Schema& schema) {
  const uint64_t id = 11194926431654439212U;
  if (schema.dataTypes.count(id)) return;
  ::apache::thrift::reflection::DataType& dt = schema.dataTypes[id];
  dt.name = "struct module.Color";
  schema.names[dt.name] = id;
  dt.__isset.fields = true;
  {
    ::apache::thrift::reflection::StructField& f = dt.fields[1];
    f.isRequired = true;
    f.type = 7U;
    f.name = "red";
    f.order = 0;
  }
  {
    ::apache::thrift::reflection::StructField& f = dt.fields[2];
    f.isRequired = true;
    f.type = 7U;
    f.name = "green";
    f.order = 1;
  }
  {
    ::apache::thrift::reflection::StructField& f = dt.fields[3];
    f.isRequired = true;
    f.type = 7U;
    f.name = "blue";
    f.order = 2;
  }
  {
    ::apache::thrift::reflection::StructField& f = dt.fields[4];
    f.isRequired = true;
    f.type = 7U;
    f.name = "alpha";
    f.order = 3;
  }
}

void  reflectionInitializer_11194926431654439212(::apache::thrift::reflection::Schema&);  // struct module.Color
// Reflection initializer for struct module.Vehicle
void reflectionInitializer_11029503283921871788(::apache::thrift::reflection::Schema& schema) {
  const uint64_t id = 11029503283921871788U;
  if (schema.dataTypes.count(id)) return;
  ::apache::thrift::reflection::DataType& dt = schema.dataTypes[id];
  dt.name = "struct module.Vehicle";
  schema.names[dt.name] = id;
  dt.__isset.fields = true;
  {
    ::apache::thrift::reflection::StructField& f = dt.fields[1];
    f.isRequired = true;
    f.type = 11194926431654439212U;
    f.name = "color";
    f.order = 0;
  }
  {
    ::apache::thrift::reflection::StructField& f = dt.fields[2];
    f.isRequired = false;
    f.type = 1U;
    f.name = "licensePlate";
    f.order = 1;
  }
  {
    ::apache::thrift::reflection::StructField& f = dt.fields[3];
    f.isRequired = false;
    f.type = 1U;
    f.name = "description";
    f.order = 2;
  }
  {
    ::apache::thrift::reflection::StructField& f = dt.fields[4];
    f.isRequired = false;
    f.type = 1U;
    f.name = "name";
    f.order = 3;
  }
  reflectionInitializer_11194926431654439212(schema);  // struct module.Color
}

// Reflection initializer for set<i64>
static void reflectionInitializer_13240717138325130634(::apache::thrift::reflection::Schema& schema) {
  const uint64_t id = 13240717138325130634U;
  if (schema.dataTypes.count(id)) return;
  ::apache::thrift::reflection::DataType& dt = schema.dataTypes[id];
  dt.name = "set<i64>";
  schema.names[dt.name] = id;
  dt.__isset.valueType = true;
  dt.valueType = 6U;
}

// Reflection initializer for enum module.Animal
static void reflectionInitializer_11268218794008757992(::apache::thrift::reflection::Schema& schema) {
  const uint64_t id = 11268218794008757992U;
  if (schema.dataTypes.count(id)) return;
  ::apache::thrift::reflection::DataType& dt = schema.dataTypes[id];
  dt.name = "enum module.Animal";
  schema.names[dt.name] = id;
  dt.__isset.enumValues = true;
  static const std::pair<const char*, int32_t> enumValues[] = {
    {"CAT", 2},
    {"DOG", 1},
    {"TARANTULA", 3},
  };
  dt.enumValues.insert(enumValues, enumValues + 3);
}

static void  reflectionInitializer_11268218794008757992(::apache::thrift::reflection::Schema&);  // enum module.Animal
// Reflection initializer for map<enum module.Animal, string>
static void reflectionInitializer_8021126195852166827(::apache::thrift::reflection::Schema& schema) {
  const uint64_t id = 8021126195852166827U;
  if (schema.dataTypes.count(id)) return;
  ::apache::thrift::reflection::DataType& dt = schema.dataTypes[id];
  dt.name = "map<enum module.Animal, string>";
  schema.names[dt.name] = id;
  dt.__isset.mapKeyType = true;
  dt.mapKeyType = 11268218794008757992U;
  dt.__isset.valueType = true;
  dt.valueType = 1U;
  reflectionInitializer_11268218794008757992(schema);  // enum module.Animal
}

void  reflectionInitializer_11029503283921871788(::apache::thrift::reflection::Schema&);  // struct module.Vehicle
// Reflection initializer for list<struct module.Vehicle>
static void reflectionInitializer_4398152853717283049(::apache::thrift::reflection::Schema& schema) {
  const uint64_t id = 4398152853717283049U;
  if (schema.dataTypes.count(id)) return;
  ::apache::thrift::reflection::DataType& dt = schema.dataTypes[id];
  dt.name = "list<struct module.Vehicle>";
  schema.names[dt.name] = id;
  dt.__isset.valueType = true;
  dt.valueType = 11029503283921871788U;
  reflectionInitializer_11029503283921871788(schema);  // struct module.Vehicle
}

void  reflectionInitializer_11194926431654439212(::apache::thrift::reflection::Schema&);  // struct module.Color
static void  reflectionInitializer_11268218794008757992(::apache::thrift::reflection::Schema&);  // enum module.Animal
static void  reflectionInitializer_13240717138325130634(::apache::thrift::reflection::Schema&);  // set<i64>
static void  reflectionInitializer_4398152853717283049(::apache::thrift::reflection::Schema&);  // list<struct module.Vehicle>
static void  reflectionInitializer_8021126195852166827(::apache::thrift::reflection::Schema&);  // map<enum module.Animal, string>
// Reflection initializer for struct module.Person
void reflectionInitializer_17004913262661492556(::apache::thrift::reflection::Schema& schema) {
  const uint64_t id = 17004913262661492556U;
  if (schema.dataTypes.count(id)) return;
  ::apache::thrift::reflection::DataType& dt = schema.dataTypes[id];
  dt.name = "struct module.Person";
  schema.names[dt.name] = id;
  dt.__isset.fields = true;
  {
    ::apache::thrift::reflection::StructField& f = dt.fields[1];
    f.isRequired = true;
    f.type = 6U;
    f.name = "id";
    f.order = 0;
  }
  {
    ::apache::thrift::reflection::StructField& f = dt.fields[2];
    f.isRequired = true;
    f.type = 1U;
    f.name = "name";
    f.order = 1;
  }
  {
    ::apache::thrift::reflection::StructField& f = dt.fields[3];
    f.isRequired = false;
    f.type = 4U;
    f.name = "age";
    f.order = 2;
  }
  {
    ::apache::thrift::reflection::StructField& f = dt.fields[4];
    f.isRequired = false;
    f.type = 1U;
    f.name = "address";
    f.order = 3;
  }
  {
    ::apache::thrift::reflection::StructField& f = dt.fields[5];
    f.isRequired = false;
    f.type = 11194926431654439212U;
    f.name = "favoriteColor";
    f.order = 4;
  }
  {
    ::apache::thrift::reflection::StructField& f = dt.fields[6];
    f.isRequired = false;
    f.type = 13240717138325130634U;
    f.name = "friends";
    f.order = 5;
  }
  {
    ::apache::thrift::reflection::StructField& f = dt.fields[7];
    f.isRequired = false;
    f.type = 6U;
    f.name = "bestFriend";
    f.order = 6;
  }
  {
    ::apache::thrift::reflection::StructField& f = dt.fields[8];
    f.isRequired = false;
    f.type = 8021126195852166827U;
    f.name = "petNames";
    f.order = 7;
  }
  {
    ::apache::thrift::reflection::StructField& f = dt.fields[9];
    f.isRequired = false;
    f.type = 11268218794008757992U;
    f.name = "afraidOfAnimal";
    f.order = 8;
  }
  {
    ::apache::thrift::reflection::StructField& f = dt.fields[10];
    f.isRequired = false;
    f.type = 4398152853717283049U;
    f.name = "vehicles";
    f.order = 9;
  }
  reflectionInitializer_11194926431654439212(schema);  // struct module.Color
  reflectionInitializer_11268218794008757992(schema);  // enum module.Animal
  reflectionInitializer_13240717138325130634(schema);  // set<i64>
  reflectionInitializer_4398152853717283049(schema);  // list<struct module.Vehicle>
  reflectionInitializer_8021126195852166827(schema);  // map<enum module.Animal, string>
}

}

