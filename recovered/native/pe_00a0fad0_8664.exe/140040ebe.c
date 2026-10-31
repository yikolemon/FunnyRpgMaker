/* Ghidra pseudocode. Image: pe_00a0fad0_8664.exe Address: 140040ebe */

undefined4 * FUN_140040ebe(undefined4 *param_1,undefined4 *param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  *param_1 = *param_2;
  *(undefined8 *)(param_1 + 6) = 0;
  *(undefined8 *)(param_1 + 8) = 0;
  *(undefined8 *)(param_1 + 2) = 0;
  *(undefined8 *)(param_1 + 4) = 0;
  uVar1 = *param_3;
  uVar2 = param_3[1];
  uVar3 = param_3[3];
  *(undefined8 *)(param_1 + 6) = param_3[2];
  *(undefined8 *)(param_1 + 8) = uVar3;
  *(undefined8 *)(param_1 + 2) = uVar1;
  *(undefined8 *)(param_1 + 4) = uVar2;
  param_3[2] = 0;
  param_3[3] = 0xf;
  *(undefined1 *)param_3 = 0;
  return param_1;
}

