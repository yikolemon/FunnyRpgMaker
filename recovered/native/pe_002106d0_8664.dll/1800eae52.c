/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 1800eae52 */

undefined8 * FUN_1800eae52(undefined8 *param_1,undefined8 param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  longlong lVar2;
  
  *param_1 = param_2;
  param_1[1] = 0;
  lVar2 = FUN_180239630(0x20);
  param_1[1] = lVar2;
  uVar1 = param_3[2];
  if (0xf < (ulonglong)param_3[3]) {
    param_3 = (undefined8 *)*param_3;
  }
  *(undefined8 **)(lVar2 + 0x10) = param_3;
  *(undefined8 *)(lVar2 + 0x18) = uVar1;
  return param_1;
}

