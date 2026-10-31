/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 1800c0114 */

longlong FUN_1800c0114(longlong param_1,longlong param_2,longlong param_3)

{
  longlong lVar1;
  
  for (; param_2 != 0; param_2 = param_2 + -1) {
    if (param_3 != param_1) {
      if (*(ulonglong *)(param_1 + 0x20) < 0x10) {
        lVar1 = param_1 + 8;
      }
      else {
        lVar1 = *(longlong *)(param_1 + 8);
      }
      FUN_1800bf9b2(param_3,lVar1,*(undefined8 *)(param_1 + 0x18));
    }
    param_3 = param_3 + 0x28;
    param_1 = param_1 + 0x28;
  }
  return param_3;
}

