/* Ghidra pseudocode. Image: pe_00a0fad0_8664.exe Address: 1401383e0 */

void FUN_1401383e0(void)

{
  *(undefined ***)((longlong)&PTR_DAT_1401c9740 + (longlong)*(int *)(PTR_DAT_1401c9740 + 4)) =
       std::basic_ostream<char,std::char_traits<char>_>::vftable;
  *(int *)((longlong)*(int *)(PTR_DAT_1401c9740 + 4) + 0x1401c973c) =
       *(int *)(PTR_DAT_1401c9740 + 4) + -0x10;
  PTR_vftable_1401c9750 = (undefined *)std::ios_base::vftable;
  FUN_1400d3ba0(&PTR_vftable_1401c9750);
  return;
}

