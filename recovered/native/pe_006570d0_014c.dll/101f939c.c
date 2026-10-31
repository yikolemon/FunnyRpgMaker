/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 101f939c */

int __fastcall FUN_101f939c(int param_1,int param_2,uint *param_3,uint *param_4,uint *param_5)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  uint local_20;
  uint local_1c;
  int local_18;
  uint local_14;
  
  local_14 = DAT_10388d00 ^ (uint)&local_20;
  iVar1 = *(int *)(param_1 + 0x148);
  iVar5 = *(int *)(param_1 + 0x124) + *(int *)(param_1 + 0x120);
  iVar3 = FUN_101c461e(iVar1,param_2 * iVar5 + *(int *)(param_1 + 0x134) + *(int *)(param_1 + 0x11c)
                      );
  if ((iVar3 == 0) && (iVar3 = FUN_101c4b69(iVar1,iVar5 * 2), iVar3 == 0)) {
    local_18 = *(int *)(iVar1 + 0x20);
    iVar3 = *(int *)(param_1 + 0x120);
    local_1c = FUN_101f94a5();
    local_20 = FUN_101f94a5();
    uVar2 = local_1c;
    local_18 = local_18 + iVar3;
    uVar4 = FUN_101f94a5();
    if (param_3 != (uint *)0x0) {
      *param_3 = uVar2;
    }
    if (param_4 != (uint *)0x0) {
      *param_4 = local_20;
    }
    if (param_5 != (uint *)0x0) {
      *param_5 = uVar4;
    }
    iVar3 = 9;
    if ((uVar2 < *(uint *)(param_1 + 300)) && (uVar4 <= *(uint *)(iVar1 + 4))) {
      iVar3 = (uint)(uVar4 < local_20) * 9;
    }
    FUN_101c4c66(iVar1);
  }
  if (DAT_10388d00 != (local_14 ^ (uint)&local_20)) {
                    /* WARNING: Subroutine does not return */
    FUN_102283e0();
  }
  return iVar3;
}

