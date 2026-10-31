/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 1400134ee */

void FUN_1400134ee(longlong param_1)

{
  longlong lVar1;
  undefined8 uVar2;
  
  *(undefined8 *)(param_1 + 8) = 0;
  *(undefined8 *)(param_1 + 0x10) = 0;
  *(undefined4 *)(param_1 + 0x18) = 0x201;
  *(undefined8 *)(param_1 + 0x20) = 6;
  *(undefined8 *)(param_1 + 0x38) = 0;
  *(undefined8 *)(param_1 + 0x40) = 0;
  *(undefined8 *)(param_1 + 0x28) = 0;
  *(undefined8 *)(param_1 + 0x30) = 0;
  lVar1 = FUN_1401887b0(0x10);
  uVar2 = FUN_140189300(1);
  *(undefined8 *)(lVar1 + 8) = uVar2;
  *(longlong *)(param_1 + 0x40) = lVar1;
  return;
}

