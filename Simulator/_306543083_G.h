#include <vector>
#include "SensorInformation.h"
#include "Direction.h"
#include "AbstractAlgorithm.h"

class _306543083_G: public AbstractAlgorithm
{
    const AbstractSensor* sensor;

private:
    vector<Direction> stepsList;
    int stepsLeft;
    int steps;

    void saveStep(Direction d);

public:
    _306543083_G(){};
    unique_ptr<AbstractAlgorithm> make_unique();
    void setSensor(const AbstractSensor& sensor);
    Direction step();
    void setConfiguration(map<string, int> config);
    void aboutToFinish(int stepsTillFinishing);
    Direction getDirection(const SensorInformation &locationInfo);
    ~_306543083_G() {}
};