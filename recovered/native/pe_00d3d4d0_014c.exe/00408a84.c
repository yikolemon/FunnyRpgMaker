/* Ghidra pseudocode. Image: pe_00d3d4d0_014c.exe Address: 00408a84 */

undefined4 * __thiscall FUN_00408a84(void *this,uint param_1)

{
  undefined4 *local_1c;
  undefined1 *local_18;
  void *local_14;
  undefined1 *local_10;
  undefined4 local_c;
  
  local_18 = (undefined1 *)&local_1c;
  local_c = 0xffffffff;
  local_10 = &LAB_00418070;
  local_14 = ExceptionList;
  ExceptionList = &local_14;
  local_1c = this;
  FUN_00409104(this);
  *local_1c = std::basic_stringbuf<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_>::
              vftable;
  local_1c[0xe] = 0;
  local_1c[0xf] =
       (param_1 & 8) + (param_1 & 4) * 4 |
       (uint)((byte)((~(byte)param_1 & 2) << 5 | ~(byte)param_1 << 7) >> 5);
  ExceptionList = local_14;
  return local_1c;
}

