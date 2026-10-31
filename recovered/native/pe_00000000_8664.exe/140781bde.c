/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 140781bde */

void FUN_140781bde(ulonglong param_1)

{
  byte *pbVar1;
  uint uVar2;
  ulonglong uVar3;
  
  uVar3 = param_1 & 0xffffffff;
  *(byte *)(param_1 + 0xac) = *(byte *)(param_1 + 0xac) & 0xdf;
  if (*(int *)(param_1 + 0x1c) != 0) {
    FUN_140781bde();
  }
  if (*(int *)(uVar3 + 0x20) != 0) {
    FUN_140781bde();
  }
  if (*(int *)(uVar3 + 0x18) == 0) {
    for (uVar2 = *(uint *)(uVar3 + 0x80); uVar2 != 0; uVar2 = *(uint *)((ulonglong)uVar2 + 0x18)) {
      pbVar1 = (byte *)((ulonglong)uVar2 + 0xac);
      *pbVar1 = *pbVar1 | 0x20;
    }
  }
  return;
}

