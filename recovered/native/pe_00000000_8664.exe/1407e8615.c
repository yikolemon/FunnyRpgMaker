/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 1407e8615 */

void FUN_1407e8615(longlong param_1)

{
  uint uVar1;
  ulonglong uVar2;
  
  if (*(int *)(param_1 + 0x284) != 0) {
    uVar2 = 0;
    do {
      uVar1 = *(uint *)((ulonglong)*(uint *)(*(uint *)(param_1 + 0x28c) + uVar2) + 0x54);
      if (uVar1 != 0) {
        *(byte *)(param_1 + 0x41) = *(byte *)((ulonglong)uVar1 + 0x34) >> 4 & 1;
        return;
      }
      uVar1 = (int)uVar2 + 4;
      uVar2 = (ulonglong)uVar1;
    } while (*(int *)(param_1 + 0x284) << 2 != uVar1);
  }
  return;
}

