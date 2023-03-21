#include <iostream>
#include <ctime>
#include <ratio>
#include <chrono>

int main ()
{
    using std::chrono::system_clock;

    std::chrono::duration<int,std::ratio<60*60*24> > one_day (1);

    system_clock::time_point today = system_clock::now();
    system_clock::time_point tomorrow = today + one_day;

    std::time_t tt;

    tt = system_clock::to_time_t ( today );
    std::cout << "today is: " << ctime(&tt);

    tt = system_clock::to_time_t ( tomorrow );
    std::cout << "tomorrow will be: " << ctime(&tt);

    using namespace std::chrono;
    std::cout<<"=================================================\n";

    system_clock::time_point tp_epoch;	// epoch value

    time_point <system_clock,duration<int>> tp_seconds (duration<int>(1));

    system_clock::time_point tp (tp_seconds);

    std::cout << "1 second since system_clock epoch = ";
    std::cout << tp.time_since_epoch().count();
    std::cout << " system_clock periods." << std::endl;

    // display time_point:
    std::time_t t1 = system_clock::to_time_t(tp);
    return 0;
}
