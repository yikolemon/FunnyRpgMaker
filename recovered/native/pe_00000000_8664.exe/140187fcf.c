/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 140187fcf */

int FUN_140187fcf(longlong param_1)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  
  iVar4 = -1;
  if (*(int *)(param_1 + 4) == 0) {
    uVar2 = FUN_14012dbaf(*(undefined8 *)(param_1 + 200),param_1 + 8,*(undefined4 *)(param_1 + 0x3c)
                         );
    *(longlong *)(param_1 + 0x28) = *(longlong *)(param_1 + 0x28) + (ulonglong)uVar2;
    uVar1 = *(uint *)(param_1 + 0x3c);
    *(uint *)(param_1 + 4) = (uint)(uVar2 < uVar1);
    *(undefined4 *)(param_1 + 0x18) = 0;
    uVar3 = uVar2 * 8;
    *(uint *)(param_1 + 0x1c) = uVar3;
    if (uVar1 < uVar3) {
      *(uint *)(param_1 + 0x1c) = (uVar3 | 1) - uVar1;
      iVar4 = -(uint)(uVar2 == 0);
    }
  }
  return iVar4;
}

