/* Ghidra pseudocode. Image: pe_00a0fad0_8664.exe Address: 14008df96 */

undefined8 * FUN_14008df96(undefined8 *param_1,uint *param_2)

{
  uint uVar1;
  
  *param_1 = 0;
  param_1[1] = 0;
  uVar1 = *param_2;
  FUN_140063f00(param_1 + 1,0);
  *(undefined1 *)param_1 = 6;
  param_1[1] = (ulonglong)uVar1;
  return param_1;
}

