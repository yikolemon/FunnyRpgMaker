/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 10040b6c */

void __thiscall FUN_10040b6c(int param_1,int param_2)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  int iVar5;
  undefined1 auStack_30 [21];
  undefined1 local_1b [3];
  undefined4 local_18;
  uint local_14;
  
  local_14 = DAT_10388d00 ^ (uint)auStack_30;
  uVar1 = *(uint *)(param_2 + 0x10);
  iVar2 = *(int *)(param_2 + 0x14);
  iVar3 = uVar1 - *(uint *)(param_1 + 0x10);
  iVar5 = (iVar2 - *(int *)(param_1 + 0x14)) - (uint)(uVar1 < *(uint *)(param_1 + 0x10));
  if (iVar5 < 0) {
    iVar3 = 0;
  }
  if (iVar5 < 1) {
    iVar5 = 0;
  }
  uVar4 = __aulldiv(iVar3,iVar5,10000,0);
  *(uint *)(param_1 + 0x10) = uVar1;
  *(int *)(param_1 + 0x14) = iVar2;
  local_18 = FUN_1002472e(auStack_30,uVar4,0x15);
  FUN_1001909c(local_18,local_1b);
  if (DAT_10388d00 == (local_14 ^ (uint)auStack_30)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_102283e0();
}

