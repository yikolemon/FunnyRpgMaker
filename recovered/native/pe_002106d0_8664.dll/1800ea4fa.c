/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 1800ea4fa */

longlong FUN_1800ea4fa(longlong param_1,undefined8 param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  FUN_180003216();
  *(undefined8 *)(param_1 + 0x30) = 0;
  *(undefined8 *)(param_1 + 0x38) = 0;
  *(undefined8 *)(param_1 + 0x20) = 0;
  *(undefined8 *)(param_1 + 0x28) = 0;
  uVar1 = *param_3;
  uVar2 = param_3[1];
  uVar3 = param_3[3];
  *(undefined8 *)(param_1 + 0x30) = param_3[2];
  *(undefined8 *)(param_1 + 0x38) = uVar3;
  *(undefined8 *)(param_1 + 0x20) = uVar1;
  *(undefined8 *)(param_1 + 0x28) = uVar2;
  param_3[2] = 0;
  param_3[3] = 0xf;
  *(undefined1 *)param_3 = 0;
  return param_1;
}

