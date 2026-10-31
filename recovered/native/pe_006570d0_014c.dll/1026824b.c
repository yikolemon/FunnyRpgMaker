/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 1026824b */

/* Library Function - Multiple Matches With Same Base Name
    bool __cdecl __crt_strtox::parse_floating_point_possible_nan_is_snan<char,class
   __crt_strtox::input_adapter_character_source<class __crt_stdio_input::console_input_adapter<char>
   > >(char &,class __crt_strtox::input_adapter_character_source<class
   __crt_stdio_input::console_input_adapter<char> > &)
    bool __cdecl __crt_strtox::parse_floating_point_possible_nan_is_snan<char,class
   __crt_strtox::input_adapter_character_source<class __crt_stdio_input::stream_input_adapter<char>
   > >(char &,class __crt_strtox::input_adapter_character_source<class
   __crt_stdio_input::stream_input_adapter<char> > &)
    bool __cdecl __crt_strtox::parse_floating_point_possible_nan_is_snan<char,class
   __crt_strtox::input_adapter_character_source<class __crt_stdio_input::string_input_adapter<char>
   > >(char &,class __crt_strtox::input_adapter_character_source<class
   __crt_stdio_input::string_input_adapter<char> > &)
   
   Libraries: Visual Studio 2015, Visual Studio 2017, Visual Studio 2019 */

undefined1 parse_floating_point_possible_nan_is_snan<>(char *param_1)

{
  char cVar1;
  int iVar2;
  
  iVar2 = 0;
  while ((*param_1 == (&DAT_10324ba0)[iVar2] || (*param_1 == (&DAT_10324ba8)[iVar2]))) {
    cVar1 = FUN_1026705b();
    iVar2 = iVar2 + 1;
    *param_1 = cVar1;
    if (iVar2 == 5) {
      return 1;
    }
  }
  return 0;
}

