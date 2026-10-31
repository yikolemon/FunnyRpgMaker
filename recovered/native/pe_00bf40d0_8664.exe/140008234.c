/* Ghidra pseudocode. Image: pe_00bf40d0_8664.exe Address: 140008234 */

undefined8 * FUN_140008234(undefined8 *param_1,uint param_2)

{
  FUN_1400087bc(param_1);
  *param_1 = std::basic_stringbuf<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_>::
             vftable;
  param_1[0xd] = 0;
  *(uint *)(param_1 + 0xe) =
       (param_2 & 8) + (param_2 & 4) * 4 |
       (uint)((byte)((~(byte)param_2 & 2) << 5 | ~(byte)param_2 << 7) >> 5);
  return param_1;
}

