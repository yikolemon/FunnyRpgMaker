/* Ghidra pseudocode. Image: pe_00bf40d0_8664.exe Address: 140004aca */

undefined8 * FUN_140004aca(undefined8 *param_1,undefined8 param_2,longlong param_3)

{
  longlong lVar1;
  
  *param_1 = param_2;
  param_1[1] = 0;
  lVar1 = FUN_1400863a0(0x50);
  param_1[1] = lVar1;
  FUN_140004bec(lVar1 + 0x10,param_3);
  return param_1;
}

