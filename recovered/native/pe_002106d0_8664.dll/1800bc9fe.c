/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 1800bc9fe */

undefined8 * FUN_1800bc9fe(undefined8 *param_1,undefined8 param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar1 = param_3[2];
  param_3[2] = 0;
  uVar2 = *param_3;
  uVar3 = param_3[1];
  *param_3 = 0;
  param_3[1] = 0;
  *param_1 = uVar2;
  param_1[1] = uVar3;
  param_1[2] = uVar1;
  uVar1 = param_3[5];
  param_3[5] = 0;
  uVar2 = param_3[3];
  uVar3 = param_3[4];
  param_3[3] = 0;
  param_3[4] = 0;
  param_1[3] = uVar2;
  param_1[4] = uVar3;
  param_1[5] = uVar1;
  *(undefined1 *)(param_1 + 6) = 1;
  return param_1;
}

