/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 1026d106 */

/* Library Function - Single Match
    public: bool __thiscall <lambda_32aa245da1b5b882fa96db788295c8b2>::operator()(void)const 
   
   Libraries: Visual Studio 2017 Release, Visual Studio 2019 Release */

bool __thiscall
<lambda_32aa245da1b5b882fa96db788295c8b2>::operator()
          (<lambda_32aa245da1b5b882fa96db788295c8b2> *this)

{
  __crt_strtox::c_string_character_source<char>::unget
            (*(c_string_character_source<char> **)this,**(char **)(this + 4));
  **(undefined1 **)(this + 4) = 0;
  **(undefined4 **)this = **(undefined4 **)(this + 8);
  return true;
}

