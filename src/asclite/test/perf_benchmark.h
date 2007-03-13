// Class automatically generated by Dev-C++ New Class wizard

#ifndef PERF_BENCHMARK_H
#define PERF_BENCHMARK_H

#include "benchmark.h" // inheriting class's header file
#include "speechset.h"

/**
 * This benchmark contain some more advanced test for the 
 * Levenshtein graph to test how it can support bigger segments.
 */
class PerfBenchmark : public Benchmark
{
	public:
		// class constructor
		PerfBenchmark();
		// class destructor
		~PerfBenchmark();
    /**
		 * Access the standard cost no index
		 */
		int GetCost(int index, string type);
		
	private:
    /**
     * Contain the collection of min cost
     * for the various cost methods
     */
    map<string, vector<int> > costs;
    
    /**
     * Methods to create a linear segment.
     */
    Segment* CreateSampleSegment(int nb, string hop);
    map<string, string> props;
};

#endif // PERF_BENCHMARK_H
