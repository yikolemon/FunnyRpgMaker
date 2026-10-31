/* Ghidra pseudocode. Image: pe_00a0fad0_8664.exe Address: 140138460 */

void FUN_140138460(void)

{
  *(undefined ***)((longlong)&PTR_DAT_1401c97b0 + (longlong)*(int *)(PTR_DAT_1401c97b0 + 4)) =
       std::basic_ostream<char,std::char_traits<char>_>::vftable;
  *(int *)((longlong)*(int *)(PTR_DAT_1401c97b0 + 4) + 0x1401c97ac) =
       *(int *)(PTR_DAT_1401c97b0 + 4) + -0x10;
  PTR_vftable_1401c97c0 = (undefined *)std::ios_base::vftable;
  FUN_1400d3ba0(&PTR_vftable_1401c97c0);
  return;
}

