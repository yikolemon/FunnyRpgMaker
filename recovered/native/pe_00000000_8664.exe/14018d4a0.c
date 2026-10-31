/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 14018d4a0 */

/* Library Function - Multiple Matches With Same Base Name
    private: void __cdecl std::basic_filebuf<unsigned short,struct std::char_traits<unsigned short>
   >::_Reset_back(void) __ptr64
    private: void __cdecl std::basic_filebuf<wchar_t,struct std::char_traits<wchar_t>
   >::_Reset_back(void) __ptr64
   
   Libraries: Visual Studio 2015 Release, Visual Studio 2017 Release, Visual Studio 2019 Release */

void Reset_back(longlong param_1)

{
  longlong lVar1;
  longlong lVar2;
  
  if (**(longlong **)(param_1 + 0x18) == param_1 + 0x70) {
    lVar1 = *(longlong *)(param_1 + 0x88);
    lVar2 = *(longlong *)(param_1 + 0x90);
    **(longlong **)(param_1 + 0x18) = lVar1;
    **(longlong **)(param_1 + 0x38) = lVar1;
    **(undefined4 **)(param_1 + 0x50) = (int)(lVar2 - lVar1 >> 1);
  }
  return;
}

