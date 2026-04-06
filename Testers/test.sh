#!/bin/bash

# test text

aa=test
bb=$(test)
cc=${aa}

testFunction() {
        echo "Test Function"
}

ls
cd

if [ ${aa} = "test" ]; then
        echo "aa is test"
        elif [ ${aa} != testtest ]; then
                echo "aa is not testtest"
        else
                echo "test"
fi