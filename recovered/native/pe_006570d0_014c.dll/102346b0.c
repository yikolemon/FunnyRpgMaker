/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 102346b0 */

/* Library Function - Multiple Matches With Same Base Name
    private: void __thiscall std::basic_filebuf<unsigned short,struct std::char_traits<unsigned
   short> >::_Reset_back(void)
    private: void __thiscall std::basic_filebuf<wchar_t,struct std::char_traits<wchar_t>
   >::_Reset_back(void)
   
   Libraries: Visual Studio 2015 Release, Visual Studio 2017 Release, Visual Studio 2019 Release */

void __fastcall Reset_back(int param_1)

{
  int iVar1;
  int iVar2;
  
  if (**(int **)(param_1 + 0xc) == param_1 + 0x3c) {
    iVar1 = *(int *)(param_1 + 0x50);
    iVar2 = *(int *)(param_1 + 0x54);
    **(int **)(param_1 + 0xc) = iVar1;
    **(int **)(param_1 + 0x1c) = iVar1;
    **(int **)(param_1 + 0x2c) = iVar2 - iVar1 >> 1;
  }
  return;
}

