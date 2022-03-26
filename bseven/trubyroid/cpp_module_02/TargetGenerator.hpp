#ifndef TARGETGENERATOR_HPP
#define TARGETGENERATOR_HPP

# include "Warlock.hpp"

class TargetGenerator {
    private:
        vector<ATarget *> arr;

        TargetGenerator(const TargetGenerator &copy);
        TargetGenerator &operator=(const TargetGenerator &obj);
    public:
        TargetGenerator();
        ~TargetGenerator();
        void learnTargetType(ATarget *);
        void forgetTarget(string const &);
        ATarget *createTarget(string const &);
};

#endif