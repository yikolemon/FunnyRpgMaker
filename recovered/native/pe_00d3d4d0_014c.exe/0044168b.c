/* Ghidra pseudocode. Image: pe_00d3d4d0_014c.exe Address: 0044168b */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int __fastcall FUN_0044168b(int *param_1,int param_2)

{
  short *psVar1;
  int iVar2;
  int *piVar3;
  uint uVar4;
  int iVar5;
  uint uVar6;
  int iVar7;
  short *psVar8;
  uint uVar9;
  undefined8 uVar10;
  undefined1 auVar11 [16];
  int local_40;
  int *local_3c;
  uint local_38;
  undefined4 local_34;
  int local_30;
  uint local_2c;
  int local_24;
  int iStack_20;
  int iStack_1c;
  int iStack_18;
  uint local_14;
  
  local_14 = DAT_0050e8c0 ^ (uint)&local_40;
  iVar2 = param_1[2];
  uVar9 = 0x10000;
  if ((*(byte *)(param_1 + 4) & 1) == 0) {
    uVar9 = *(uint *)(*(int *)(param_1[1] + 0x2c) + 8);
  }
  iVar5 = *param_1;
  local_40 = param_2;
  if (*(int *)(iVar2 + 0x48) == 0x636f6d70) {
    local_24 = param_1[9];
    iStack_20 = param_1[10];
    iStack_1c = param_1[0xb];
    iStack_18 = param_1[0xc];
  }
  else {
    FUN_0041d3e9(iVar2 + 0x6c,&local_24);
  }
  *(int *)(iVar2 + 0x38) = param_1[0xf];
  *(int *)(iVar2 + 0x20) = local_24;
  *(int *)(iVar2 + 0x24) = iStack_18;
  if (param_1[0x30] == 0) {
    iVar7 = param_1[0x13] - param_1[0x11];
  }
  else {
    iVar7 = (uint)*(byte *)(param_1[0x30] + local_40) << 6;
    local_3c = param_1;
  }
  *(int *)(iVar2 + 0x28) = iVar7;
  *(int *)(iVar2 + 0x18) = iStack_1c - local_24;
  *(int *)(iVar2 + 0x1c) = iStack_18 - iStack_20;
  local_38 = uVar9;
  if ((*(char *)(iVar5 + 0x124) == '\0') || (*(short *)(iVar5 + 0x14a) == 0)) {
    iVar7 = FUN_0041eaa0(iStack_18 - iStack_20,uVar9);
    psVar1 = (short *)(iVar5 + 0xdc);
    psVar8 = (short *)(iVar5 + 0xde);
    if (*(short *)(iVar5 + 0x174) != -1) {
      psVar8 = (short *)(iVar5 + 0x1bc);
      psVar1 = (short *)(iVar5 + 0x1ba);
    }
    uVar4 = (int)*psVar1 - (int)*psVar8;
    iVar7 = (int)(uVar4 - (int)(short)iVar7) / 2;
  }
  else {
    iVar7 = FUN_0041eaa0(param_1[0x29] - iStack_18,uVar9);
    iVar7 = (int)(short)iVar7;
    uVar4 = 0;
    uVar6 = param_1[0x29] - param_1[0x2b];
    if (uVar6 != 0 && param_1[0x2b] <= param_1[0x29]) {
      uVar4 = FUN_0041eaa0(uVar6,uVar9);
      uVar4 = uVar4 & 0xffff;
    }
  }
  piVar3 = *(int **)(*(int *)(iVar5 + 0x80) + 0x34);
  if ((piVar3 != (int *)0x0) && (*(code **)(*piVar3 + 8) != (code *)0x0)) {
    local_34 = 0;
    local_30 = iVar7;
    local_2c = uVar4;
    iVar5 = (**(code **)(*piVar3 + 8))(piVar3[1],local_40,1,&local_34);
    uVar4 = local_2c;
    iVar7 = local_30;
    if (iVar5 != 0) goto LAB_0044188c;
  }
  *(uint *)(iVar2 + 0x3c) = uVar4;
  if ((*(byte *)(param_1 + 4) & 1) == 0) {
    iVar5 = (int)((longlong)iVar7 * (longlong)(int)local_38 >> 0x3f);
    auVar11._0_8_ = CONCAT44(iVar5,iVar5);
    auVar11._8_4_ = (int)((longlong)(int)uVar4 * (longlong)(int)local_38 >> 0x3f);
    auVar11._12_4_ = auVar11._8_4_;
    uVar10 = CONCAT44((int)((ulonglong)
                            (auVar11._8_8_ + (longlong)(int)uVar4 * (longlong)(int)local_38 +
                            _UNK_004d7418) >> 0x10),
                      (int)((ulonglong)
                            (auVar11._0_8_ + (longlong)iVar7 * (longlong)(int)local_38 +
                            _DAT_004d7410) >> 0x10));
  }
  else {
    uVar10 = CONCAT44(uVar4,iVar7);
  }
  *(int *)(iVar2 + 0x2c) = *(int *)(iVar2 + 0x20) - *(int *)(iVar2 + 0x28) / 2;
  *(undefined8 *)(iVar2 + 0x30) = uVar10;
  iVar5 = 0;
LAB_0044188c:
  if (DAT_0050e8c0 == (local_14 ^ (uint)&local_40)) {
    return iVar5;
  }
                    /* WARNING: Subroutine does not return */
  FUN_0047f2c0(local_14 ^ (uint)&local_40);
}

