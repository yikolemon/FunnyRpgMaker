/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 10242830 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
FUN_10242830(undefined4 param_1,undefined4 *param_2,undefined4 param_3,undefined4 param_4,
            int param_5,undefined4 param_6,undefined8 param_7)

{
  uint *puVar1;
  bool bVar2;
  code *pcVar3;
  short sVar4;
  undefined4 ****ppppuVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  int iVar9;
  uint uVar10;
  int iVar11;
  int local_40;
  uint local_38;
  undefined4 ***local_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  int local_24;
  uint local_20;
  undefined1 local_1c [8];
  uint local_14;
  void *local_10;
  undefined *puStack_c;
  undefined4 local_8;
  
  puStack_c = &DAT_10289ffd;
  local_10 = ExceptionList;
  local_14 = DAT_10388d00 ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  uStack_30 = 0;
  uStack_2c = 0;
  uStack_28 = 0;
  local_24 = 0;
  local_20 = 0xf;
  local_34 = (undefined4 ****)0x0;
  puVar1 = (uint *)(param_5 + 0x14);
  local_8 = 0;
  local_38 = *puVar1 & 0x3000;
  if (local_38 == 0x3000) {
    iVar9 = -1;
    local_40 = -1;
    iVar11 = 0xd;
  }
  else {
    local_40 = *(int *)(param_5 + 0x1c);
    iVar9 = *(int *)(param_5 + 0x18);
    if ((local_40 < 0) || ((iVar11 = iVar9, local_40 < 1 && (iVar9 == 0)))) {
      if (iVar9 == 0 && local_40 == 0) {
        if (local_38 == 0) {
          iVar11 = 1;
        }
        else {
          iVar11 = 0;
        }
      }
      else {
        iVar11 = 6;
      }
    }
  }
  uVar7 = (uint)param_7;
  uVar10 = (uint)((ulonglong)param_7 >> 0x20);
  sVar4 = FUN_10268fd0(uVar7,uVar10,local_14);
  bVar2 = sVar4 < 1;
  local_40 = CONCAT31(local_40._1_3_,bVar2);
  if (((local_38 != 0x2000) || (!bVar2)) ||
     ((double)CONCAT44(uVar10 & _UNK_1028b424,uVar7 & _DAT_1028b420) < DAT_102945c0 ||
      (double)CONCAT44(uVar10 & _UNK_1028b424,uVar7 & _DAT_1028b420) == DAT_102945c0)) {
    FUN_1000396a(iVar11 + 0x32,0);
    if (bVar2) {
      uVar6 = *puVar1;
    }
    else {
      uVar6 = *puVar1 & 0xffffffef;
    }
  }
  else {
    local_38 = 0;
    FUN_1026e530(uVar7,uVar10,&local_38);
    FUN_1000396a((int)(((local_38 ^ (int)local_38 >> 0x1f) - ((int)local_38 >> 0x1f)) * 0x7597) /
                 100000 + 0x32 + iVar11,0);
    uVar6 = *puVar1;
  }
  FUN_10242d90(param_1,local_1c,0,uVar6);
  ppppuVar5 = &local_34;
  if (0xf < local_20) {
    ppppuVar5 = (undefined4 ****)local_34;
  }
  iVar9 = FUN_1007c87c(ppppuVar5,local_24,local_1c,iVar9,uVar7,uVar10);
  if (iVar9 < 0) {
    *param_2 = param_3;
    param_2[1] = param_4;
  }
  else {
    ppppuVar5 = &local_34;
    if (0xf < local_20) {
      ppppuVar5 = (undefined4 ****)local_34;
    }
    FUN_1024a710(param_2,param_3,param_4,param_5,param_6,ppppuVar5,iVar9,local_40);
  }
  if (0xf < local_20) {
    if (DAT_103235d4 != '\0') {
      uVar10 = local_20 + 1 + (int)local_34;
      uVar6 = local_24 + 1 + (int)local_34;
      uVar8 = uVar10 + 7 & 0xfffffff8;
      uVar7 = uVar8;
      if (uVar6 <= uVar8) {
        uVar7 = uVar6;
      }
      if (uVar8 < uVar10) {
        uVar10 = uVar8;
      }
      guard_check_icall(local_34,uVar8,uVar7,uVar10);
    }
    uVar7 = local_20 + 1;
    ppppuVar5 = (undefined4 ****)local_34;
    if (0xfff < uVar7) {
      ppppuVar5 = (undefined4 ****)local_34[-1];
      uVar7 = local_20 + 0x24;
      if (0x1f < (uint)((int)local_34 + (-4 - (int)ppppuVar5))) {
        pcVar3 = (code *)swi(0x29);
        (*pcVar3)();
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
    }
    FUN_102283a0(ppppuVar5,uVar7);
  }
  ExceptionList = local_10;
                    /* WARNING: Subroutine does not return */
  FUN_102283e0();
}

