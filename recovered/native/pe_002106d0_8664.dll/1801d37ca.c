/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 1801d37ca */

undefined8 *
FUN_1801d37ca(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 *param_4)

{
  longlong lVar1;
  
  *param_1 = param_2;
  param_1[1] = 0;
  lVar1 = FUN_180239630(0x20);
  param_1[1] = lVar1;
  *(undefined8 *)(lVar1 + 0x10) = *(undefined8 *)*param_4;
  *(undefined8 *)(lVar1 + 0x18) = 0;
  return param_1;
}

