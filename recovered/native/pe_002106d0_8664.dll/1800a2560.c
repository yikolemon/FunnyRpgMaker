/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 1800a2560 */

undefined8 * FUN_1800a2560(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  param_1[2] = 0;
  param_1[3] = 0;
  *param_1 = 0;
  param_1[1] = 0;
  uVar1 = *param_2;
  uVar2 = param_2[1];
  uVar3 = param_2[3];
  param_1[2] = param_2[2];
  param_1[3] = uVar3;
  *param_1 = uVar1;
  param_1[1] = uVar2;
  param_2[2] = 0;
  param_2[3] = 7;
  *(undefined2 *)param_2 = 0;
  *(undefined1 *)(param_1 + 4) = *(undefined1 *)(param_2 + 4);
  param_1[7] = 0;
  param_1[8] = 0;
  param_1[5] = 0;
  param_1[6] = 0;
  uVar1 = param_2[5];
  uVar2 = param_2[6];
  uVar3 = param_2[8];
  param_1[7] = param_2[7];
  param_1[8] = uVar3;
  param_1[5] = uVar1;
  param_1[6] = uVar2;
  param_2[7] = 0;
  param_2[8] = 7;
  *(undefined2 *)(param_2 + 5) = 0;
  uVar1 = param_2[0xb];
  param_2[0xb] = 0;
  uVar2 = param_2[9];
  uVar3 = param_2[10];
  param_2[9] = 0;
  param_2[10] = 0;
  param_1[9] = uVar2;
  param_1[10] = uVar3;
  param_1[0xb] = uVar1;
  uVar1 = param_2[0xe];
  param_2[0xe] = 0;
  uVar2 = param_2[0xc];
  uVar3 = param_2[0xd];
  param_2[0xc] = 0;
  param_2[0xd] = 0;
  param_1[0xc] = uVar2;
  param_1[0xd] = uVar3;
  param_1[0xe] = uVar1;
  param_1[0xf] = param_2[0xf];
  return param_1;
}

