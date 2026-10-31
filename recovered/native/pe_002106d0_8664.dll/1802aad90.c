/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 1802aad90 */

void FUN_1802aad90(void)

{
  *(undefined ***)((longlong)&PTR_DAT_180403860 + (longlong)*(int *)(PTR_DAT_180403860 + 4)) =
       std::basic_ostream<char,std::char_traits<char>_>::vftable;
  *(int *)((longlong)*(int *)(PTR_DAT_180403860 + 4) + 0x18040385c) =
       *(int *)(PTR_DAT_180403860 + 4) + -0x10;
  PTR_vftable_180403870 = (undefined *)std::ios_base::vftable;
  FUN_18023ef00(&PTR_vftable_180403870);
  return;
}

