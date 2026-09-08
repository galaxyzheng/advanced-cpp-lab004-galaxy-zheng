#include "Person.h"

void checkempty(const std::string& property, const std::string& PropertyName) {
    if (property.empty()) { // from Faculty constructor example
        throw std::invalid_argument(PropertyName + " cannot be empty");
    }
}
// TODO: Implement default constructor and parameterized constructor with validation.
Person::Person() : name_("John Doe"), id_("unspecified"), email_("unspecified") {}

// TODO: Implement default constructor and parameterized constructor with validation.
Person::Person(std::string name, std::string id, std::string email) {
    checkempty(name, "name"); // check if any fields are empty
    checkempty(id, "id");
    checkempty(email, "email");
}

//TODO: Implement getName and setName methods.
const std::string& Person::getName() const noexcept {std::cout << name_; return name_; }
void Person::setName(const std::string& name) {
    checkempty(name, "name");
    name_ = name;
 }


// TODO: Implement getId and setId methods.
const std::string& Person::getId() const noexcept {std::cout << id_; return id_; }
void Person::setId(const std::string& id) {
    checkempty(id, "id");
    id_ = id;
}

// TODO: Implement getEmail and setEmail methods.
const std::string& Person::getEmail() const noexcept {std::cout << email_; return email_; }
void Person::setEmail(const std::string& email) {
    checkempty(email, "email");
    email_ = email;
}

std::ostream& operator<<(std::ostream& os, const Person& person) {
    os << person.getName() << " (" << person.getId() << ")";
    return os;
}
