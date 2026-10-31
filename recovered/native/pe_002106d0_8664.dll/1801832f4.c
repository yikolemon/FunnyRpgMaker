/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 1801832f4 */

undefined8 * FUN_1801832f4(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  *param_1 = *param_2;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  uVar1 = param_2[1];
  uVar2 = param_2[2];
  uVar3 = param_2[4];
  param_1[3] = param_2[3];
  param_1[4] = uVar3;
  param_1[1] = uVar1;
  param_1[2] = uVar2;
  param_2[3] = 0;
  param_2[4] = 0xf;
  *(undefined1 *)(param_2 + 1) = 0;
  return param_1;
}

