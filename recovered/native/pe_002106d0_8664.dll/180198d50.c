/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 180198d50 */

void FUN_180198d50(longlong param_1,int param_2)

{
  longlong lVar1;
  int iVar2;
  longlong lVar3;
  uint uVar4;
  longlong lVar5;
  
  lVar1 = *(longlong *)(param_1 + 0x2b0);
  iVar2 = *(int *)(lVar1 + 0xc0);
  if (0 < iVar2) {
    uVar4 = 0;
    do {
      lVar5 = *(longlong *)(*(longlong *)(lVar1 + 0xd0) + (ulonglong)(uVar4 >> 5) * 8);
      lVar3 = (ulonglong)(uVar4 & 0x1f) * 0x68;
      if (((*(int *)(lVar5 + 0x50 + lVar3) + param_2 <=
            *(int *)(*(longlong *)(param_1 + 0x2b0) + 0xa4)) &&
          (lVar5 = lVar5 + lVar3, (*(byte *)(lVar5 + 0x4f) & 4) == 0)) &&
         ((*(byte *)(*(longlong *)(lVar5 + 0x58) + 0x10) & 8) == 0)) {
        FUN_180198b9b(param_1);
        iVar2 = *(int *)(lVar1 + 0xc0);
      }
      uVar4 = uVar4 + 1;
    } while ((int)uVar4 < iVar2);
  }
  return;
}

