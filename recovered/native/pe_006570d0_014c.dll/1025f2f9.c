/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 1025f2f9 */

bool __thiscall FUN_1025f2f9(undefined4 *param_1,int param_2)

{
  bool bVar1;
  
  if ((_iobuf *)*param_1 == (_iobuf *)0x0) {
    *(undefined1 *)(param_2 + 0x1c) = 1;
    *(undefined4 *)(param_2 + 0x18) = 0x16;
    FUN_10274034(0,0,0,0,0,param_2);
    bVar1 = false;
  }
  else {
    bVar1 = __acrt_stdio_char_traits<char>::validate_stream_is_ansi_if_required((_iobuf *)*param_1);
  }
  return bVar1;
}

