/* Ghidra pseudocode. Image: pe_00a0fad0_8664.exe Address: 14000a586 */

undefined8 * FUN_14000a586(undefined8 *param_1,uint param_2)

{
  FUN_14000bc1e();
  *param_1 = std::basic_stringbuf<char,std::char_traits<char>,std::allocator<char>_>::vftable;
  param_1[0xd] = 0;
  *(uint *)(param_1 + 0xe) =
       (param_2 & 8) + (param_2 & 4) * 4 |
       (uint)((byte)((~(byte)param_2 & 2) << 5 | ~(byte)param_2 << 7) >> 5);
  return param_1;
}

