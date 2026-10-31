/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 140155dfe */

int FUN_140155dfe(longlong param_1,int param_2,uint *param_3,uint *param_4,uint *param_5)

{
  undefined4 uVar1;
  longlong lVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  undefined1 auStack_78 [36];
  uint local_54;
  longlong local_50;
  ulonglong local_48;
  
  local_48 = DAT_140f17b40 ^ (ulonglong)auStack_78;
  lVar2 = *(longlong *)(param_1 + 0x1e8);
  iVar6 = *(int *)(param_1 + 0x1a8) + *(int *)(param_1 + 0x1a4);
  iVar3 = FUN_14012d612(lVar2,param_2 * iVar6 + *(int *)(param_1 + 0x1c0) +
                              *(int *)(param_1 + 0x1a0));
  if ((iVar3 == 0) && (iVar3 = FUN_14012dc34(lVar2,iVar6 * 2), iVar3 == 0)) {
    local_50 = *(longlong *)(lVar2 + 0x38);
    uVar5 = *(uint *)(param_1 + 0x1a4);
    uVar4 = FUN_140155f37(&local_50,(ulonglong)uVar5);
    uVar1 = *(undefined4 *)(param_1 + 0x1a8);
    local_54 = FUN_140155f37(&local_50,uVar1);
    local_50 = local_50 + (ulonglong)uVar5;
    uVar5 = FUN_140155f37(&local_50,uVar1);
    if (param_3 != (uint *)0x0) {
      *param_3 = uVar4;
    }
    if (param_4 != (uint *)0x0) {
      *param_4 = local_54;
    }
    if (param_5 != (uint *)0x0) {
      *param_5 = uVar5;
    }
    iVar3 = 9;
    if ((uVar4 < *(uint *)(param_1 + 0x1b0)) && (uVar5 <= *(uint *)(lVar2 + 8))) {
      iVar3 = (uint)(uVar5 < local_54) * 9;
    }
    FUN_14012dd58(lVar2);
  }
  if (DAT_140f17b40 != (local_48 ^ (ulonglong)auStack_78)) {
                    /* WARNING: Subroutine does not return */
    FUN_140188a00(local_48 ^ (ulonglong)auStack_78);
  }
  return iVar3;
}

