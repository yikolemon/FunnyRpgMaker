/* Ghidra pseudocode. Image: pe_00bf40d0_8664.exe Address: 140085bbf */

int FUN_140085bbf(longlong param_1)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  
  iVar4 = -1;
  if (*(int *)(param_1 + 4) == 0) {
    uVar3 = FUN_140020fde(*(longlong **)(param_1 + 200),(undefined8 *)(param_1 + 8),
                          *(uint *)(param_1 + 0x3c));
    *(longlong *)(param_1 + 0x28) = *(longlong *)(param_1 + 0x28) + (ulonglong)uVar3;
    uVar2 = *(uint *)(param_1 + 0x3c);
    *(uint *)(param_1 + 4) = (uint)(uVar3 < uVar2);
    *(undefined4 *)(param_1 + 0x18) = 0;
    uVar1 = uVar3 * 8;
    *(uint *)(param_1 + 0x1c) = uVar1;
    if (uVar2 <= uVar1 && uVar1 - uVar2 != 0) {
      *(uint *)(param_1 + 0x1c) = (uVar1 | 1) - uVar2;
      iVar4 = -(uint)(uVar3 == 0);
    }
  }
  return iVar4;
}

