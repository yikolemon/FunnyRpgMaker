/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 180196cd0 */

void FUN_180196cd0(longlong param_1,longlong param_2,int param_3)

{
  longlong lVar1;
  int iVar2;
  longlong lVar3;
  uint uVar4;
  longlong lVar5;
  
  lVar1 = *(longlong *)(param_1 + 0x2b0);
  if (lVar1 != 0) {
    iVar2 = *(int *)(lVar1 + 0xc0);
    if (0 < iVar2) {
      uVar4 = 0;
      do {
        lVar5 = *(longlong *)(*(longlong *)(lVar1 + 0xd0) + (ulonglong)(uVar4 >> 5) * 8);
        lVar3 = (ulonglong)(uVar4 & 0x1f) * 0x68;
        if (((*(int *)(lVar5 + 0x50 + lVar3) + param_3 <=
              *(int *)(*(longlong *)(param_1 + 0x2b0) + 0xa4)) &&
            (lVar5 = lVar5 + lVar3, *(longlong *)(lVar5 + 0x58) == param_2)) &&
           ((*(byte *)(lVar5 + 0x4f) & 4) == 0)) {
          FUN_180198b9b(param_1,param_2);
          iVar2 = *(int *)(lVar1 + 0xc0);
        }
        uVar4 = uVar4 + 1;
      } while ((int)uVar4 < iVar2);
    }
  }
  return;
}

