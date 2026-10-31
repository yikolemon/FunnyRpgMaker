/* Ghidra pseudocode. Image: pe_00bf40d0_8664.exe Address: 1400b51d0 */

void FUN_1400b51d0(void)

{
  *(undefined ***)((longlong)&PTR_DAT_14012eb40 + (longlong)*(int *)(PTR_DAT_14012eb40 + 4)) =
       std::basic_ostream<char,std::char_traits<char>_>::vftable;
  *(int *)((longlong)*(int *)(PTR_DAT_14012eb40 + 4) + 0x14012eb3c) =
       *(int *)(PTR_DAT_14012eb40 + 4) + -0x10;
  PTR_vftable_14012eb50 = (undefined *)std::ios_base::vftable;
  FUN_1400895d0(0x14012eb50);
  return;
}

