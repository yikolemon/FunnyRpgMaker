/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 18007bd04 */

undefined8 * FUN_18007bd04(undefined8 *param_1,uint param_2)

{
  FUN_18007487c();
  *param_1 = std::basic_stringbuf<char,std::char_traits<char>,std::allocator<char>_>::vftable;
  param_1[0xd] = 0;
  *(uint *)(param_1 + 0xe) =
       (param_2 & 8) + (param_2 & 4) * 4 |
       (uint)((byte)((~(byte)param_2 & 2) << 5 | ~(byte)param_2 << 7) >> 5);
  return param_1;
}

