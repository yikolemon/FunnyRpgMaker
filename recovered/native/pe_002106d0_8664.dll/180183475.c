/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 180183475 */

undefined8 * FUN_180183475(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar1 = *param_2;
  uVar2 = param_2[1];
  uVar3 = param_2[3];
  param_1[2] = param_2[2];
  param_1[3] = uVar3;
  *param_1 = uVar1;
  param_1[1] = uVar2;
  param_1[6] = 0;
  param_1[7] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  uVar1 = param_2[4];
  uVar2 = param_2[5];
  uVar3 = param_2[7];
  param_1[6] = param_2[6];
  param_1[7] = uVar3;
  param_1[4] = uVar1;
  param_1[5] = uVar2;
  param_2[6] = 0;
  param_2[7] = 0xf;
  *(undefined1 *)(param_2 + 4) = 0;
  *(undefined1 *)(param_1 + 10) = *(undefined1 *)(param_2 + 10);
  uVar1 = param_2[9];
  param_1[8] = param_2[8];
  param_1[9] = uVar1;
  uVar1 = param_2[0xd];
  param_2[0xd] = 0;
  uVar2 = param_2[0xb];
  uVar3 = param_2[0xc];
  param_2[0xb] = 0;
  param_2[0xc] = 0;
  param_1[0xb] = uVar2;
  param_1[0xc] = uVar3;
  param_1[0xd] = uVar1;
  return param_1;
}

