/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 102666dd */

/* Library Function - Single Match
    private: void __thiscall
   __crt_stdio_input::format_string_parser<char>::scan_optional_wide_modifier(void)
   
   Libraries: Visual Studio 2017 Debug, Visual Studio 2017 Release, Visual Studio 2019 Debug, Visual
   Studio 2019 Release */

void __thiscall
__crt_stdio_input::format_string_parser<char>::scan_optional_wide_modifier
          (format_string_parser<char> *this)

{
  char cVar1;
  
  cVar1 = **(char **)(this + 8);
  if (cVar1 == 'w') {
    *(char **)(this + 8) = *(char **)(this + 8) + 1;
  }
  else if ((cVar1 != 'C') && (cVar1 != 'S')) {
    return;
  }
  this[0x24] = (format_string_parser<char>)0x1;
  return;
}

