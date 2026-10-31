/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 10266a6a */

/* Library Function - Single Match
    public: __thiscall __crt_stdio_input::input_processor<char,class
   __crt_stdio_input::string_input_adapter<char> >::input_processor<char,class
   __crt_stdio_input::string_input_adapter<char> >(class
   __crt_stdio_input::string_input_adapter<char> const &,unsigned __int64,char const * const,struct
   __crt_locale_pointers * const,char * const)
   
   Libraries: Visual Studio 2017 Release, Visual Studio 2019 Release */

input_processor<char,__crt_stdio_input::string_input_adapter<char>_> * __thiscall
__crt_stdio_input::input_processor<char,__crt_stdio_input::string_input_adapter<char>_>::
input_processor<char,__crt_stdio_input::string_input_adapter<char>_>
          (input_processor<char,__crt_stdio_input::string_input_adapter<char>_> *this,
          string_input_adapter<char> *param_1,__uint64 param_2,char *param_3,
          __crt_locale_pointers *param_4,char *param_5)

{
  undefined4 in_stack_00000008;
  
  *(undefined4 *)this = in_stack_00000008;
  *(undefined4 *)(this + 4) = (undefined4)param_2;
  *(undefined4 *)(this + 8) = *(undefined4 *)param_1;
  *(undefined4 *)(this + 0xc) = *(undefined4 *)(param_1 + 4);
  *(undefined4 *)(this + 0x10) = *(undefined4 *)(param_1 + 8);
  FUN_10266316(in_stack_00000008,param_2);
  *(undefined4 *)(this + 0x70) = 0;
  *(char **)(this + 0x68) = param_3;
  *(__crt_locale_pointers **)(this + 0x6c) = param_4;
  return this;
}

