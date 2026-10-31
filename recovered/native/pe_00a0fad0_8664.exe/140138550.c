/* Ghidra pseudocode. Image: pe_00a0fad0_8664.exe Address: 140138550 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_140138550(void)

{
  *(undefined ***)((longlong)&DAT_1401d4890 + (longlong)*(int *)(DAT_1401d4890 + 4)) =
       std::basic_ostream<wchar_t,std::char_traits<wchar_t>_>::vftable;
  *(int *)(&DAT_1401d488c + *(int *)(DAT_1401d4890 + 4)) = *(int *)(DAT_1401d4890 + 4) + -0x10;
  _DAT_1401d48a0 = std::ios_base::vftable;
  FUN_1400d3ba0(&DAT_1401d48a0);
  return;
}

