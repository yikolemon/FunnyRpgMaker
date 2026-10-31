/* Ghidra pseudocode. Image: pe_00bf40d0_8664.exe Address: 14003c5dc */

void FUN_14003c5dc(longlong param_1,longlong param_2)

{
  byte bVar1;
  int iVar2;
  int iVar3;
  longlong lVar4;
  ulonglong uVar5;
  
  iVar2 = *(int *)(param_1 + 0x1e8);
  uVar5 = (longlong)iVar2 + 1;
  iVar3 = (int)uVar5;
  if ((iVar3 < *(int *)(param_1 + 0x1ec)) &&
     (bVar1 = *(byte *)(*(longlong *)(param_1 + 0x1e0) + uVar5),
     (int)(iVar3 + (uint)bVar1 * 2) < *(int *)(param_1 + 0x1ec))) {
    if ((uint)bVar1 < (*(int *)(param_1 + 0x28) - *(int *)(param_1 + 0x24)) + 1U) {
      if (bVar1 != 0) {
        uVar5 = 0;
        do {
          lVar4 = *(longlong *)(param_1 + 0x1e0) + (longlong)iVar2 + 3;
          *(uint *)(param_2 + uVar5 * 2) =
               (uint)*(byte *)(uVar5 + lVar4) |
               (int)(short)((ushort)*(byte *)((uVar5 - 1) + lVar4) << 8);
          uVar5 = uVar5 + 2;
        } while ((uint)bVar1 + (uint)bVar1 != uVar5);
        uVar5 = (ulonglong)(uint)(iVar3 + (int)uVar5);
      }
      *(int *)(param_1 + 0x3c) = *(int *)(param_1 + 0x3c) + (uint)bVar1;
      *(int *)(param_1 + 0x1e8) = (int)uVar5;
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

