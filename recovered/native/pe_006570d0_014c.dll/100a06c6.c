/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 100a06c6 */

undefined4 * FUN_100a06c6(uint param_1)

{
  undefined4 *local_1c;
  undefined1 *local_18;
  void *local_14;
  undefined1 *local_10;
  undefined4 local_c;
  
  local_18 = (undefined1 *)&local_1c;
  local_c = 0xffffffff;
  local_10 = &LAB_100c3fc0;
  local_14 = ExceptionList;
  ExceptionList = &local_14;
  FUN_100a09c0();
  *local_1c = std::basic_stringbuf<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_>::
              vftable;
  local_1c[0xe] = 0;
  local_1c[0xf] =
       (param_1 & 8) + (param_1 & 4) * 4 |
       (uint)((byte)((~(byte)param_1 & 2) << 5 | ~(byte)param_1 << 7) >> 5);
  ExceptionList = local_14;
  return local_1c;
}

