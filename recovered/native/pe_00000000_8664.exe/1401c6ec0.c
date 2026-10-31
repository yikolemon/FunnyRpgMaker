/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 1401c6ec0 */

void FUN_1401c6ec0(void)

{
  *(undefined ***)((longlong)&PTR_DAT_140f17d00 + (longlong)*(int *)(PTR_DAT_140f17d00 + 4)) =
       std::basic_ostream<char,std::char_traits<char>_>::vftable;
  *(int *)((longlong)*(int *)(PTR_DAT_140f17d00 + 4) + 0x140f17cfc) =
       *(int *)(PTR_DAT_140f17d00 + 4) + -0x10;
  PTR_vftable_140f17d10 = (undefined *)std::ios_base::vftable;
  FUN_140188f70(&PTR_vftable_140f17d10);
  return;
}

