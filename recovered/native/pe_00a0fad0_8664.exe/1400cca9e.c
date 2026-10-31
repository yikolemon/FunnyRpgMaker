/* Ghidra pseudocode. Image: pe_00a0fad0_8664.exe Address: 1400cca9e */

longlong FUN_1400cca9e(longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 *param_4)

{
  longlong lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  FUN_1400ccbde();
  lVar1 = *(longlong *)(param_1 + 8);
  *(undefined8 *)(lVar1 + 0x30) = 0;
  *(undefined8 *)(lVar1 + 0x38) = 0;
  *(undefined8 *)(lVar1 + 0x20) = 0;
  *(undefined8 *)(lVar1 + 0x28) = 0;
  uVar2 = *param_4;
  uVar3 = param_4[1];
  uVar4 = param_4[3];
  *(undefined8 *)(lVar1 + 0x30) = param_4[2];
  *(undefined8 *)(lVar1 + 0x38) = uVar4;
  *(undefined8 *)(lVar1 + 0x20) = uVar2;
  *(undefined8 *)(lVar1 + 0x28) = uVar3;
  param_4[2] = 0;
  param_4[3] = 0xf;
  *(undefined1 *)param_4 = 0;
  **(undefined8 **)(param_1 + 8) = param_3;
  *(undefined8 *)(*(longlong *)(param_1 + 8) + 8) = param_3;
  *(undefined8 *)(*(longlong *)(param_1 + 8) + 0x10) = param_3;
  *(undefined1 *)(*(longlong *)(param_1 + 8) + 0x18) = 0;
  *(undefined1 *)(*(longlong *)(param_1 + 8) + 0x19) = 0;
  return param_1;
}

