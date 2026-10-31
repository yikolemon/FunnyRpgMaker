/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 18014f638 */

void FUN_18014f638(longlong param_1,longlong param_2)

{
  undefined4 uVar1;
  undefined8 uVar2;
  
  FUN_180147761();
  FUN_180147761(param_1 + 0x18,param_2 + 0x18);
  uVar1 = *(undefined4 *)(param_2 + 0x20);
  *(undefined4 *)(param_2 + 0x20) = *(undefined4 *)(param_1 + 0x20);
  *(undefined4 *)(param_1 + 0x20) = uVar1;
  uVar1 = *(undefined4 *)(param_2 + 0x24);
  *(undefined4 *)(param_2 + 0x24) = *(undefined4 *)(param_1 + 0x24);
  *(undefined4 *)(param_1 + 0x24) = uVar1;
  uVar2 = *(undefined8 *)(param_2 + 0x28);
  *(undefined8 *)(param_2 + 0x28) = *(undefined8 *)(param_1 + 0x28);
  *(undefined8 *)(param_1 + 0x28) = uVar2;
  return;
}

