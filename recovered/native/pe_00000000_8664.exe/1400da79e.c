/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 1400da79e */

void FUN_1400da79e(uint *param_1)

{
  bool bVar1;
  uint uVar2;
  uint uVar3;
  
  if (0 < (int)*param_1) {
    uVar2 = *param_1;
    do {
      if (*(int *)(*(longlong *)(param_1 + 2) + -0x20 + (ulonglong)uVar2 * 0x48) != 0) {
        return;
      }
      if (*(longlong *)(*(longlong *)(param_1 + 2) + (ulonglong)uVar2 * 0x48 + -0x18) != 0) {
        return;
      }
      uVar3 = uVar2 - 1;
      *param_1 = uVar3;
      bVar1 = 0 < (int)uVar2;
      uVar2 = uVar3;
    } while (uVar3 != 0 && bVar1);
  }
  return;
}

