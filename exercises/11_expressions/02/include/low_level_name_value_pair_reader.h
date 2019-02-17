#ifndef _PAIR_
#define _PAIR_

#include <vector>
#include <map>

class Pair {

  private:
      std::map<std::string, std::vector<float>> input;

  public:
      void Read();

      std::map<std::string, float> SumForEachName() const;
      std::map<std::string, float> MeanForEachName() const;

      float SumForAllName() const;
      float MeanForAllName() const;

      std::map<std::string, std::vector<float>> GetInput() const;
};

#endif
