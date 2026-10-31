/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 18018b240 */

void FUN_18018b240(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  *param_1 = *param_2;
  uVar1 = param_2[3];
  param_2[3] = 0;
  uVar2 = param_2[1];
  uVar3 = param_2[2];
  param_2[1] = 0;
  param_2[2] = 0;
  param_1[1] = uVar2;
  param_1[2] = uVar3;
  param_1[3] = uVar1;
  *(undefined4 *)(param_1 + 4) = *(undefined4 *)(param_2 + 4);
  return;
}

