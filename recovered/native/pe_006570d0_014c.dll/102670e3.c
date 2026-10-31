/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 102670e3 */

/* Library Function - Multiple Matches With Same Base Name
    public: bool __thiscall __crt_strtox::input_adapter_character_source<class
   __crt_stdio_input::console_input_adapter<char> >::restore_state(unsigned __int64)
    public: bool __thiscall __crt_strtox::input_adapter_character_source<class
   __crt_stdio_input::stream_input_adapter<char> >::restore_state(unsigned __int64)
    public: bool __thiscall __crt_strtox::input_adapter_character_source<class
   __crt_stdio_input::string_input_adapter<char> >::restore_state(unsigned __int64)
   
   Libraries: Visual Studio 2015, Visual Studio 2017, Visual Studio 2019 */

undefined4 __thiscall restore_state(int param_1,int param_2,int param_3)

{
  undefined4 uVar1;
  
  if ((param_2 == *(int *)(param_1 + 0x10)) && (param_3 == *(int *)(param_1 + 0x14))) {
    uVar1 = 1;
  }
  else {
    **(undefined1 **)(param_1 + 0x18) = 0;
    uVar1 = 0;
  }
  return uVar1;
}

