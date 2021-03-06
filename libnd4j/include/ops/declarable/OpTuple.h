//
// Created by raver119 on 11.10.2017.
//

#ifndef LIBND4J_OPTUPLE_H
#define LIBND4J_OPTUPLE_H

#include <vector>
#include <initializer_list>
#include <NDArray.h>

namespace nd4j {
    namespace ops {
        class OpTuple {
        public:
            const char * _opName;
            std::vector<nd4j::NDArray<float> *> _inputs;
            std::vector<nd4j::NDArray<float> *> _outputs;
            std::vector<float> _tArgs;
            std::vector<Nd4jLong> _iArgs;

            OpTuple(const char *opName);
            OpTuple(const char *opName, std::initializer_list<nd4j::NDArray<float> *>&& inputs, std::initializer_list<float>&& tArgs, std::initializer_list<Nd4jLong>&& iArgs);
            ~OpTuple();

            OpTuple* addInput(nd4j::NDArray<float>* array);
            OpTuple* addOutput(nd4j::NDArray<float>* array);
            OpTuple* setTArgs(std::initializer_list<float> tArgs);
            OpTuple* setIArgs(std::initializer_list<Nd4jLong> iArgs);
        };
    }
}


#endif //LIBND4J_OPTUPLE_H
