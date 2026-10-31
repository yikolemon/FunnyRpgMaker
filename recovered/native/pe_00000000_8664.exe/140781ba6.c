/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 140781ba6 */

void FUN_140781ba6(longlong param_1,longlong param_2)

{
  uint uVar1;
  uint uVar2;
  
  uVar1 = *(uint *)(param_2 + 0x1c);
  *(uint *)(param_1 + 0x1c) = uVar1;
  uVar2 = *(uint *)(param_2 + 0x20);
  *(uint *)(param_1 + 0x20) = uVar2;
  if (uVar1 != 0) {
    *(int *)((ulonglong)uVar1 + 0x18) = (int)param_1;
    uVar2 = *(uint *)(param_1 + 0x20);
  }
  if (uVar2 != 0) {
    *(int *)((ulonglong)uVar2 + 0x18) = (int)param_1;
  }
  *(undefined4 *)(param_1 + 0x4c) = *(undefined4 *)(param_2 + 0x4c);
  *(undefined8 *)(param_1 + 0x44) = *(undefined8 *)(param_2 + 0x44);
  *(undefined4 *)(param_2 + 0x20) = 0;
  *(undefined4 *)(param_2 + 0x1c) = 0;
  return;
}

