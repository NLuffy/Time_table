#ifndef SCHEDULE_H
#define SCHEDULE_H

#include <bits/stdc++.h>
#include "Period.h"

using namespace std;

enum AlgorithmState {
    AS_USER_STOPPED,
    AS_CRITERIA_STOPEED,
    AS_RUNNING
};

class Schedule {
    private:
        // Number of crossover points of parent's class table
        int _numberOfCrossoverPoints;

        // Number of classes that is moved randomly by single mutation operation
        int _mutationSize;

        // Probability that crossover will occur
        int _crossoverProbability;

        // Probability that mutation will occur
        int _mutationProbability;

        // Fitness value of chromosome
        double _fitness;

        // Flags of class requirements satisfaction
        vector<bool> _criteria;

        // Time-space slots, one entry represent one hour for one section
        vector<list<Period*>> _slots;

        // Class table for chromosome
        // Used to determine first time-space slot used by class
        unordered_map<Period*, int> _classes;

        // Number of periods in a day
        int _periodsPerDay;

        // Number of weekdays in a week
        int _weekDays;

        // Number of sections
        int _numSections; 

        // Total number of periods in all sections combined
        int _totalPeriods;

    public:
        // Initializes chromosomes with configuration block (setup of chromosome)
        Schedule(int numCrossoverPoints, int mutationSize, int crossoverProbability, 
                 int mutationProbability, int periodsPerDay, int weekDays, int numSections, int totalSubjects);

        // Copy constructor
        Schedule(const Schedule &c, bool setupOnly);

        // Makes copy of chromosome
        Schedule* makeCopy(bool setupOnly) const;

        // Makes new chromosome with same setup but with randomly chosen code
        Schedule* makeNewFromPrototype() const;

        // Performs crossover operation using two chromosomes and returns pointer to offspring
        Schedule* crossover(const Schedule& parent2) const;

        // Performs mutation on chromosome
        void mutation();

        // Calculates fitness value of chromosomes
        void calculateFitness();

        // Returns fitness value of chromosomes
        double getFitness() const { return _fitness; }

        // Returns reference to table of classes
        inline const unordered_map<Period*, int>& getClasses() const { return _classes; }

        // Returns array of flags of class requirement satisfaction 
        inline const vector<bool>& getCriteria() const { return _criteria; }

        // Returns reference to array of time-space slots 
        inline const vector<list<Period*>>& getSlots() const { return _slots; }   
};

class Algorithm {
    private:
        // Population of chromosomes
        vector<Schedule*> _chromosomes;

        // Indicates whether chromosome belongs to best chromosome group
        vector<bool> _bestFlags;

        // Indices of best chromosomes
        vector<int> _bestChromosomes;

        // Number of best chromosomes currently saved in best chromosome group
        int _currentBestSize;

        // Number of chromosomes which are replaced in each generation by offspring
        int _replaceByGeneration;

        // Prototype of chromosomes in population
        Schedule* _prototype;

        // Current generation
        int _currentGeneration;

        // State of execution of algorithm
        AlgorithmState _state;

        // Tries to add chromosomes in best chromosome group
        void addToBest(int chromosomeIndex);

        // Returns TRUE if chromosome belongs to best chromosome group
        bool isInBest(int chromosomeIndex);

        // Clears best chromosome group
        void clearBest();

        public:
            // Initializes genetic algorithm
            Algorithm(int numberOfChromosomes, int replaceByGen, int trackBest, 
                      Schedule* prototype, Schedule* observer);

            // Frees used resources
            ~Algorithm();

            // Starts and executes algorithm
            void start();

            // Stops execution of algorithms
            void stop();

            // Returns pointer to best chromosome in population
            Schedule* getBestChromosome() const;

            // Returns current generation
            inline int getCurrentGeneration() const { return _currentGeneration; }
};

#endif