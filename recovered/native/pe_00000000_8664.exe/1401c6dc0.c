/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 1401c6dc0 */

void FUN_1401c6dc0(void)

{
  *(undefined ***)((longlong)&PTR_DAT_140f17c90 + (longlong)*(int *)(PTR_DAT_140f17c90 + 4)) =
       std::basic_ostream<char,std::char_traits<char>_>::vftable;
  *(int *)((longlong)&DAT_140f17c8c + (longlong)*(int *)(PTR_DAT_140f17c90 + 4)) =
       *(int *)(PTR_DAT_140f17c90 + 4) + -0x10;
  PTR_vftable_140f17ca0 = (undefined *)std::ios_base::vftable;
  FUN_140188f70(&PTR_vftable_140f17ca0);
  return;
}

