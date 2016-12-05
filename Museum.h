#ifndef MUSEUM_MUSEUM_H
#define MUSEUM_MUSEUM_H

#include <iostream>

class Museum {
private:
    std::string Name;
    std::string Exposure;
    double Cost;
public:
    Museum(const std::string &Name, const std::string &Exposure, double Cost);
    Museum();

    const std::string &getName() const;
    void setName(const std::string &Name);

    const std::string &getExposure() const;
    void setExposure(const std::string &Exposure);

    double getCost() const;
    void setCost(double Cost);


    friend std::ostream &operator<<(std::ostream &os, const Museum &museum);

    virtual ~Museum();


};


#endif //MUSEUM_MUSEUM_H
