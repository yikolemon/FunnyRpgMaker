/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 1800e0a18 */

undefined8 * FUN_1800e0a18(undefined8 *param_1,undefined8 *param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  *param_1 = *param_2;
  param_1[1] = *param_3;
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  uVar1 = param_3[1];
  uVar2 = param_3[2];
  uVar3 = param_3[4];
  param_1[4] = param_3[3];
  param_1[5] = uVar3;
  param_1[2] = uVar1;
  param_1[3] = uVar2;
  param_3[3] = 0;
  param_3[4] = 0xf;
  *(undefined1 *)(param_3 + 1) = 0;
  param_1[8] = 0;
  param_1[9] = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  uVar1 = param_3[5];
  uVar2 = param_3[6];
  uVar3 = param_3[8];
  param_1[8] = param_3[7];
  param_1[9] = uVar3;
  param_1[6] = uVar1;
  param_1[7] = uVar2;
  param_3[7] = 0;
  param_3[8] = 0xf;
  *(undefined1 *)(param_3 + 5) = 0;
  return param_1;
}

