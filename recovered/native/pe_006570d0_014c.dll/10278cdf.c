/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 10278cdf */

/* Library Function - Multiple Matches With Same Base Name
    public: __thiscall `anonymous namespace'::argument_list<char>::~argument_list<char>(void)
    public: __thiscall `anonymous namespace'::argument_list<char>::~argument_list<char>(void)
    public: __thiscall `anonymous namespace'::argument_list<wchar_t>::~argument_list<wchar_t>(void)
    public: __thiscall `anonymous namespace'::argument_list<wchar_t>::~argument_list<wchar_t>(void)
   
   Library: Visual Studio 2015 Release */

void __fastcall ~argument_list<>(undefined4 *param_1)

{
  undefined4 *puVar1;
  
  for (puVar1 = (undefined4 *)*param_1; puVar1 != (undefined4 *)param_1[1]; puVar1 = puVar1 + 1) {
    FUN_10274120(*puVar1);
  }
  FUN_10274120(*param_1);
  return;
}

