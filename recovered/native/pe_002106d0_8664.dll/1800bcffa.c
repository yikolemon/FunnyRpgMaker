/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 1800bcffa */

undefined8 *
FUN_1800bcffa(undefined8 *param_1,longlong param_2,undefined8 param_3,undefined8 param_4)

{
  longlong lVar1;
  
  param_1[2] = 0;
  param_1[3] = 0;
  *param_1 = 0;
  param_1[1] = 0;
  if (*(ulonglong *)(param_2 + 0x20) < 0x10) {
    lVar1 = param_2 + 8;
  }
  else {
    lVar1 = *(longlong *)(param_2 + 8);
  }
  FUN_180002428(param_1,lVar1,*(undefined8 *)(param_2 + 0x18),param_4,0xfffffffffffffffe);
  return param_1;
}

