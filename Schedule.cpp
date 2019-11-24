#include "Schedule.h"

Schedule::Schedule(int numCrossoverPoints, int mutationSize, int crossoverProbability, 
                   int mutationProbability, int periodsPerDay, int weekDays, 
                   int numSections, int totalSubjects) {
    this->_mutationSize = mutationSize;
    this->_numberOfCrossoverPoints = numCrossoverPoints;
    this->_crossoverProbability = crossoverProbability;
    this->_mutationProbability = mutationProbability;
    this->_fitness = 0;
    this->_periodsPerDay = periodsPerDay;
    this->_weekDays = weekDays;
    this->_numSections = numSections;
    this->_totalPeriods = totalSubjects;

    this->_slots.resize(this->_periodsPerDay*this->_weekDays*this->_numSections);
    this->_criteria.resize(this->_totalPeriods*this->_weekDays);
}

Schedule::Schedule(const Schedule& c, bool setupOnly) {
    if (!setupOnly) {
        this->_slots = c._slots;
        this->_classes = c._classes;
        this->_criteria = c._criteria;
        this->_fitness = c._fitness; 
    } else {
        this->_slots.resize(c._periodsPerDay*c._weekDays*c._numSections);
        this->_criteria.resize(c._totalPeriods*c._weekDays);
    }

    this->_numberOfCrossoverPoints = c._numberOfCrossoverPoints;
    this->_mutationSize = c._mutationSize;
    this->_crossoverProbability = c._crossoverProbability;
    this->_mutationProbability = c._mutationProbability;
}

Schedule* Schedule::makeCopy(bool setupOnly) const {
    return new Schedule(*this, setupOnly);
}

Schedule* Schedule::makeNewFromPrototype() const {
    int size = this->_slots.size();

    // make new chromosme, copy chromosome setup
    Schedule* newChromosome = new Schedule(*this, true);

    // place classes at random position
    return NULL;
}