/* Ghidra pseudocode. Image: pe_00a0fad0_8664.exe Address: 1401385d0 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1401385d0(void)

{
  *(undefined ***)((longlong)&DAT_1401d49b0 + (longlong)*(int *)(DAT_1401d49b0 + 4)) =
       std::basic_ostream<wchar_t,std::char_traits<wchar_t>_>::vftable;
  *(int *)(&DAT_1401d49ac + *(int *)(DAT_1401d49b0 + 4)) = *(int *)(DAT_1401d49b0 + 4) + -0x10;
  _DAT_1401d49c0 = std::ios_base::vftable;
  FUN_1400d3ba0(&DAT_1401d49c0);
  return;
}

