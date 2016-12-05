#include "Museum.h"

Museum::Museum(const std::string &Name, const std::string &Exposure, double Cost) : Name(Name), Exposure(Exposure),
                                                                                    Cost(Cost) {}

Museum::Museum() {}

const std::string &Museum::getName() const {
    return Name;
}

void Museum::setName(const std::string &Name) {
    Museum::Name = Name;
}

const std::string &Museum::getExposure() const {
    return Exposure;
}

void Museum::setExposure(const std::string &Exposure) {
    Museum::Exposure = Exposure;
}

double Museum::getCost() const {
    return Cost;
}

void Museum::setCost(double Cost) {
    Museum::Cost = Cost;
}

std::ostream &operator<<(std::ostream &os, const Museum &museum) {
    os << "\nName: " << museum.Name << "\nExposure: " << museum.Exposure << "\nCost: " << museum.Cost;
    return os;
}

Museum::~Museum() {

}
