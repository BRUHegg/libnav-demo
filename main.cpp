#include <libnav/navaid_db.hpp>

int main()
{
    libnav::NavaidDB nav_db("earth_fix.dat", "earth_nav.dat");
    std::cout << "Loading navaid data base\n";
    libnav::DbErr err_wpt = nav_db.get_wpt_err();
    libnav::DbErr err_navaid = nav_db.get_navaid_err();
    if(err_wpt != libnav::DbErr::SUCCESS)
    {
        std::cout << "Problems encountered when loading waypoint data base\n";
    }
    if(err_navaid != libnav::DbErr::SUCCESS)
    {
        std::cout << "Problems encountered when loading navaid data base\n";
    }
    std::cout << "Navaid data base loaded\n";
}
