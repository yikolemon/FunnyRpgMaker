/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 100d87ea */

undefined4 * __thiscall FUN_100d87ea(undefined4 *param_1,int *param_2)

{
  undefined4 uVar1;
  
  uVar1 = *(undefined4 *)*param_2;
  param_1[1] = ((undefined4 *)*param_2)[1];
  *param_1 = uVar1;
  param_1[6] = 0;
  param_1[7] = 0;
  param_1[8] = 0;
  param_1[9] = 0;
  param_1[10] = 0;
  param_1[0xb] = 0;
  param_1[0xc] = 0;
  param_1[0xd] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  *(undefined8 *)(param_1 + 0xe) = 0;
  param_1[9] = 0xf;
  *(undefined8 *)(param_1 + 0xe) = 0;
  param_1[10] = 0;
  param_1[0xb] = 0;
  param_1[0xc] = 0;
  param_1[0xd] = 0;
  param_1[0xf] = 0xf;
  return param_1;
}

