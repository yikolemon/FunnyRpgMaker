/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 1402b0c72 */

undefined8 * FUN_1402b0c72(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  undefined1 uVar1;
  
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  *(undefined2 *)(param_1 + 6) = 0;
  FUN_1402141fc();
  FUN_1402141fc(param_1 + 0xb,param_3);
  uVar1 = FUN_1402b183a(param_1);
  *(undefined1 *)((longlong)param_1 + 0x31) = uVar1;
  return param_1;
}

