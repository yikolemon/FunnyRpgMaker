/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 1801f0594 */

void FUN_1801f0594(longlong param_1,longlong param_2)

{
  uint uVar1;
  byte bVar2;
  int iVar3;
  ulonglong uVar4;
  
  iVar3 = *(int *)(param_1 + 0x1e8);
  bVar2 = *(byte *)(param_1 + 0x1f0);
  if (*(int *)(param_1 + 0x1ec) <= (int)((uint)bVar2 + iVar3 + -0xaf)) {
    *(undefined4 *)(param_1 + 0x20) = 0x83;
    return;
  }
  uVar1 = bVar2 - 0xaf;
  if (uVar1 < (*(int *)(param_1 + 0x28) - *(int *)(param_1 + 0x24)) + 1U) {
    if (0xaf < bVar2) {
      uVar4 = 0;
      do {
        *(uint *)(param_2 + uVar4 * 4) =
             (uint)*(byte *)(uVar4 + *(longlong *)(param_1 + 0x1e0) + (longlong)iVar3 + 1);
        uVar4 = uVar4 + 1;
      } while (uVar1 != uVar4);
      iVar3 = (int)uVar4 + iVar3;
    }
    *(int *)(param_1 + 0x1e8) = iVar3;
    return;
  }
  *(undefined4 *)(param_1 + 0x20) = 0x82;
  return;
}

