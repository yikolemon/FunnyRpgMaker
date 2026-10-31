/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 14013fbe5 */

void FUN_14013fbe5(longlong param_1,longlong param_2)

{
  uint uVar1;
  byte bVar2;
  int iVar3;
  longlong lVar4;
  longlong lVar5;
  
  iVar3 = *(int *)(param_1 + 0x1e8);
  bVar2 = *(byte *)(param_1 + 0x1f0);
  if ((int)(iVar3 + (uint)bVar2 * 2 + -0x16e) < *(int *)(param_1 + 0x1ec)) {
    uVar1 = bVar2 - 0xb7;
    if (uVar1 < (*(int *)(param_1 + 0x28) - *(int *)(param_1 + 0x24)) + 1U) {
      if (0xb7 < bVar2) {
        lVar4 = 0;
        do {
          lVar5 = *(longlong *)(param_1 + 0x1e0) + (longlong)iVar3 + 2;
          *(uint *)(param_2 + lVar4 * 2) =
               (uint)*(byte *)(lVar4 + lVar5) |
               (int)(short)((ushort)*(byte *)(lVar4 + -1 + lVar5) << 8);
          lVar4 = lVar4 + 2;
        } while ((ulonglong)uVar1 * 2 != lVar4);
        iVar3 = (int)lVar4 + iVar3;
      }
      *(int *)(param_1 + 0x1e8) = iVar3;
    }
    else {
      *(undefined4 *)(param_1 + 0x20) = 0x82;
    }
  }
  else {
    *(undefined4 *)(param_1 + 0x20) = 0x83;
  }
  return;
}

