/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 10266a35 */

/* Library Function - Single Match
    public: int __thiscall __crt_stdio_input::string_input_adapter<char>::get(void)
   
   Library: Visual Studio 2019 Release */

int __thiscall __crt_stdio_input::string_input_adapter<char>::get(string_input_adapter<char> *this)

{
  byte bVar1;
  byte *pbVar2;
  
  pbVar2 = *(byte **)(this + 8);
  if (pbVar2 == *(byte **)(this + 4)) {
    return -1;
  }
  bVar1 = *pbVar2;
  *(byte **)(this + 8) = pbVar2 + 1;
  return (uint)bVar1;
}

