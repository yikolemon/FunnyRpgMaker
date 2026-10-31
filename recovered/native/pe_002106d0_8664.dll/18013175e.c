/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 18013175e */

void FUN_18013175e(longlong param_1,int param_2,int param_3,int *param_4)

{
  longlong lVar1;
  int iVar2;
  longlong lVar3;
  int iVar4;
  int iVar5;
  
  lVar3 = *(longlong *)(param_1 + 0x20);
  while( true ) {
    if (lVar3 == 0) {
      iVar2 = *param_4;
      if (iVar2 == param_4[1]) {
        if (iVar2 == 0) {
          iVar4 = 8;
        }
        else {
          iVar4 = iVar2 / 2 + iVar2;
        }
        iVar5 = iVar2 + 1;
        if (iVar2 + 1 < iVar4) {
          iVar5 = iVar4;
        }
        lVar3 = FUN_1800fe7f8((longlong)iVar5 << 3);
        if (*(longlong *)(param_4 + 2) != 0) {
          FUN_1802a82f0(lVar3,*(longlong *)(param_4 + 2),(longlong)*param_4 << 3);
          FUN_1800fe8d4(*(undefined8 *)(param_4 + 2));
        }
        *(longlong *)(param_4 + 2) = lVar3;
        param_4[1] = iVar5;
        iVar2 = *param_4;
      }
      else {
        lVar3 = *(longlong *)(param_4 + 2);
      }
      *(longlong *)(lVar3 + (longlong)iVar2 * 8) = param_1;
      *param_4 = *param_4 + 1;
      return;
    }
    if (((*(byte *)(lVar3 + 0xd4) & 1) != 0) &&
       (((param_3 == 0 || (*(int *)(param_1 + 0x60) != param_2)) ||
        ((*(byte *)(*(longlong *)(param_1 + 0x28) + 0xd4) & 1) == 0)))) {
      FUN_18013175e(lVar3,param_2,param_3,param_4);
    }
    lVar1 = *(longlong *)(param_1 + 0x28);
    if ((*(byte *)(lVar1 + 0xd4) & 1) == 0) break;
    if (((param_3 == 0) && (*(int *)(param_1 + 0x60) == param_2)) &&
       ((*(byte *)(*(longlong *)(param_1 + 0x20) + 0xd4) & 1) != 0)) {
      return;
    }
    lVar3 = *(longlong *)(lVar1 + 0x20);
    param_1 = lVar1;
  }
  return;
}

