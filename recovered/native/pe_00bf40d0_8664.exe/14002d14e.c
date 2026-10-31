/* Ghidra pseudocode. Image: pe_00bf40d0_8664.exe Address: 14002d14e */

undefined8 * FUN_14002d14e(undefined8 param_1,undefined8 *param_2,longlong param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  uVar1 = *(undefined8 *)(param_3 + 0x30);
  uVar2 = *(undefined8 *)(param_3 + 0x38);
  uVar3 = *(undefined8 *)(param_3 + 0x40);
  uVar4 = *(undefined8 *)(param_3 + 0x48);
  uVar5 = *(undefined8 *)(param_3 + 0x58);
  param_2[4] = *(undefined8 *)(param_3 + 0x50);
  param_2[5] = uVar5;
  param_2[2] = uVar3;
  param_2[3] = uVar4;
  *param_2 = uVar1;
  param_2[1] = uVar2;
  return param_2;
}

