/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 102664e2 */

/* Library Function - Single Match
    private: bool __thiscall
   __crt_stdio_input::format_string_parser<char>::scan_optional_literal_character_trail_bytes_tchar(char)
   
   Library: Visual Studio 2019 Release */

bool __thiscall
__crt_stdio_input::format_string_parser<char>::scan_optional_literal_character_trail_bytes_tchar
          (format_string_parser<char> *this,char param_1)

{
  format_string_parser<char> fVar1;
  ushort *puVar2;
  
  puVar2 = ___pctype_func();
  if ((short)puVar2[(byte)this[0x14]] < 0) {
    fVar1 = **(format_string_parser<char> **)(this + 8);
    if (fVar1 == (format_string_parser<char>)0x0) {
      *(undefined4 *)(this + 0x10) = 0;
      *(undefined2 *)(this + 0x14) = 0;
      this[0x16] = (format_string_parser<char>)0x0;
      *(undefined4 *)(this + 0x18) = 0;
      *(undefined4 *)(this + 0x1c) = 0;
      *(undefined4 *)(this + 0x20) = 0;
      this[0x24] = (format_string_parser<char>)0x0;
      *(undefined4 *)(this + 0x28) = 0;
      *(undefined4 *)(this + 0xc) = 0x2a;
      return false;
    }
    this[0x15] = fVar1;
    *(format_string_parser<char> **)(this + 8) = *(format_string_parser<char> **)(this + 8) + 1;
  }
  return true;
}

