/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 18009f7a2 */

undefined8 * FUN_18009f7a2(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  undefined1 uVar1;
  
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  *(undefined2 *)(param_1 + 6) = 0;
  FUN_180002d2c();
  FUN_180002d2c(param_1 + 0xb,param_3);
  uVar1 = FUN_1800a036a(param_1);
  *(undefined1 *)((longlong)param_1 + 0x31) = uVar1;
  return param_1;
}

