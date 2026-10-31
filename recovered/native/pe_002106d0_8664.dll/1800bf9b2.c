/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 1800bf9b2 */

longlong FUN_1800bf9b2(longlong param_1,undefined8 param_2,ulonglong param_3)

{
  longlong lVar1;
  
  if (*(ulonglong *)(param_1 + 0x20) < param_3) {
    lVar1 = FUN_1800bfa0e(param_1,param_3);
    return lVar1;
  }
  if (*(ulonglong *)(param_1 + 0x20) < 0x10) {
    lVar1 = param_1 + 8;
  }
  else {
    lVar1 = *(longlong *)(param_1 + 8);
  }
  *(ulonglong *)(param_1 + 0x18) = param_3;
  FUN_1802a82f0(lVar1,param_2,param_3);
  *(undefined1 *)(lVar1 + param_3) = 0;
  return param_1;
}

