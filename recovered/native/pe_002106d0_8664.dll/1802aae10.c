/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 1802aae10 */

void FUN_1802aae10(void)

{
  *(undefined ***)((longlong)&PTR_DAT_1804038d0 + (longlong)*(int *)(PTR_DAT_1804038d0 + 4)) =
       std::basic_ostream<char,std::char_traits<char>_>::vftable;
  *(int *)((longlong)*(int *)(PTR_DAT_1804038d0 + 4) + 0x1804038cc) =
       *(int *)(PTR_DAT_1804038d0 + 4) + -0x10;
  PTR_vftable_1804038e0 = (undefined *)std::ios_base::vftable;
  FUN_18023ef00(&PTR_vftable_1804038e0);
  return;
}

