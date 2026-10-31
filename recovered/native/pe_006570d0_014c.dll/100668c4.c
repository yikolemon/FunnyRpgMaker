/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 100668c4 */

void FUN_100668c4(undefined4 *param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  
  *param_1 = *param_2;
  *(undefined8 *)(param_1 + 5) = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  uVar1 = param_2[2];
  uVar2 = param_2[3];
  uVar3 = param_2[4];
  param_1[1] = param_2[1];
  param_1[2] = uVar1;
  param_1[3] = uVar2;
  param_1[4] = uVar3;
  *(undefined8 *)(param_1 + 5) = *(undefined8 *)(param_2 + 5);
  param_2[5] = 0;
  param_2[6] = 3;
  param_2[1] = 0;
  return;
}

