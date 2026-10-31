/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 1017e21a */

undefined4 * __thiscall FUN_1017e21a(undefined4 *param_1,undefined4 *param_2,undefined4 *param_3)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  
  *param_1 = *param_2;
  uVar1 = *param_3;
  param_1[2] = param_3[1];
  param_1[1] = uVar1;
  *(undefined8 *)(param_1 + 7) = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[6] = 0;
  uVar1 = param_3[3];
  uVar2 = param_3[4];
  uVar3 = param_3[5];
  param_1[3] = param_3[2];
  param_1[4] = uVar1;
  param_1[5] = uVar2;
  param_1[6] = uVar3;
  *(undefined8 *)(param_1 + 7) = *(undefined8 *)(param_3 + 6);
  param_3[6] = 0;
  param_3[7] = 0xf;
  *(undefined1 *)(param_3 + 2) = 0;
  param_1[9] = 0;
  param_1[10] = 0;
  param_1[0xb] = 0;
  return param_1;
}

