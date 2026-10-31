/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 1801eef28 */

void FUN_1801eef28(longlong param_1,longlong param_2)

{
  byte bVar1;
  int iVar2;
  ulonglong uVar3;
  uint uVar4;
  ulonglong uVar5;
  
  uVar3 = (longlong)*(int *)(param_1 + 0x1e8) + 1;
  iVar2 = (int)uVar3;
  if ((iVar2 < *(int *)(param_1 + 0x1ec)) &&
     (bVar1 = *(byte *)(*(longlong *)(param_1 + 0x1e0) + uVar3),
     (int)(iVar2 + (uint)bVar1) < *(int *)(param_1 + 0x1ec))) {
    if ((uint)bVar1 < (*(int *)(param_1 + 0x28) - *(int *)(param_1 + 0x24)) + 1U) {
      uVar4 = (uint)bVar1;
      if (uVar4 != 0) {
        uVar5 = 0;
        do {
          *(uint *)(param_2 + uVar5 * 4) =
               (uint)*(byte *)(uVar5 + 1 + *(longlong *)(param_1 + 0x1e0) + uVar3);
          uVar5 = uVar5 + 1;
        } while (uVar4 != uVar5);
        uVar3 = (ulonglong)(uint)(iVar2 + (int)uVar5);
      }
      *(int *)(param_1 + 0x3c) = *(int *)(param_1 + 0x3c) + uVar4;
      *(int *)(param_1 + 0x1e8) = (int)uVar3;
      return;
    }
    *(undefined4 *)(param_1 + 0x20) = 0x82;
    return;
  }
  *(undefined4 *)(param_1 + 0x20) = 0x83;
  return;
}

