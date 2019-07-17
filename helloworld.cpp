#include <eosiolib/eosio.hpp>

using namespace eosio;

CONTRACT helloworld: public contract {
    public:
        using contract::contract;

        ACTION hi(name user){
            
            check(has_auth(get_self() ),"ㄲㅈ");
            print("hello, ", user);
            //require_auth(user); === 인증된사용자아니면 에러 

            //has_auth() -> T or F 구별용으로쓰임
            
        }

    private:

};