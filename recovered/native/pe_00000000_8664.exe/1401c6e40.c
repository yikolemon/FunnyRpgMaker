/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 1401c6e40 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1401c6e40(void)

{
  *(undefined ***)((longlong)&DAT_140f2b020 + (longlong)*(int *)(DAT_140f2b020 + 4)) =
       std::basic_ostream<wchar_t,std::char_traits<wchar_t>_>::vftable;
  *(int *)(&DAT_140f2b01c + *(int *)(DAT_140f2b020 + 4)) = *(int *)(DAT_140f2b020 + 4) + -0x10;
  _DAT_140f2b030 = std::ios_base::vftable;
  FUN_140188f70(&DAT_140f2b030);
  return;
}

