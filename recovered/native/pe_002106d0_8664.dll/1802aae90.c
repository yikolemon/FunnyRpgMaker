/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 1802aae90 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1802aae90(void)

{
  *(undefined ***)((longlong)&DAT_180419040 + (longlong)*(int *)(DAT_180419040 + 4)) =
       std::basic_ostream<wchar_t,std::char_traits<wchar_t>_>::vftable;
  *(int *)(&DAT_18041903c + *(int *)(DAT_180419040 + 4)) = *(int *)(DAT_180419040 + 4) + -0x10;
  _DAT_180419050 = std::ios_base::vftable;
  FUN_18023ef00(&DAT_180419050);
  return;
}

