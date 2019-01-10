#include <eosiolib/eosio.hpp>

using namespace eosio;

class helloworld : public eosio::contract {
  public:
      using contract::contract;

      ACTION hi( name user ) {
         print( "Hello, ", user );
      }
};


EOSIO_DISPATCH( helloworld, (hi) )
