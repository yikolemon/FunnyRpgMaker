/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 1026805e */

/* Library Function - Multiple Matches With Different Base Names
    public: bool __thiscall <lambda_0b87716a0b73cdfba1cd37fcaaa20711>::operator()(void)const 
    public: bool __thiscall <lambda_644f8ab42ed3fd1d660977a2364b3a7d>::operator()(void)const 
    public: bool __thiscall <lambda_c7c3f778895f47e7f4eff38a8fef279a>::operator()(void)const 
    public: bool __thiscall <lambda_e41f1170c8800e4a6fed1afad60fab6f>::operator()(void)const 
     6 names - too many to list
   
   Libraries: Visual Studio 2017 Release, Visual Studio 2019 Release */

void __fastcall FID_conflict_operator__(undefined4 *param_1)

{
  __crt_strtox::input_adapter_character_source<__crt_stdio_input::string_input_adapter<char>_>::
  unget((input_adapter_character_source<__crt_stdio_input::string_input_adapter<char>_> *)*param_1,
        *(char *)param_1[1]);
  *(undefined1 *)param_1[1] = 0;
  restore_state(*(undefined4 *)param_1[2],((undefined4 *)param_1[2])[1]);
  return;
}

