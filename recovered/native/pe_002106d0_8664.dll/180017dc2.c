/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 180017dc2 */

undefined8 * FUN_180017dc2(undefined8 *param_1,undefined8 param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  param_1[2] = 0;
  param_1[3] = 0;
  *param_1 = 0;
  param_1[1] = 0;
  uVar1 = *param_3;
  uVar2 = param_3[1];
  uVar3 = param_3[3];
  param_1[2] = param_3[2];
  param_1[3] = uVar3;
  *param_1 = uVar1;
  param_1[1] = uVar2;
  param_3[2] = 0;
  param_3[3] = 0xf;
  *(undefined1 *)param_3 = 0;
  *(undefined1 *)(param_1 + 4) = 1;
  return param_1;
}

