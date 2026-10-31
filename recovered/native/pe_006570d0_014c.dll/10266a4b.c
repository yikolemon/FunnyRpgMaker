/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 10266a4b */

/* Library Function - Single Match
    public: void __thiscall __crt_stdio_input::string_input_adapter<char>::unget(int)
   
   Libraries: Visual Studio 2017 Release, Visual Studio 2019 Release */

void __thiscall
__crt_stdio_input::string_input_adapter<char>::unget(string_input_adapter<char> *this,int param_1)

{
  int iVar1;
  
  iVar1 = *(int *)(this + 8);
  if ((iVar1 != *(int *)this) && ((iVar1 != *(int *)(this + 4) || (param_1 != -1)))) {
    *(int *)(this + 8) = iVar1 + -1;
  }
  return;
}

