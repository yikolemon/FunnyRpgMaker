/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 101e9f1b */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int __fastcall FUN_101e9f1b(int *param_1,int param_2)

{
  short *psVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  short sVar5;
  uint uVar6;
  int iVar7;
  int iVar8;
  short *psVar9;
  int iVar10;
  undefined8 uVar11;
  undefined1 auVar12 [16];
  int local_40;
  int *local_3c;
  int local_38;
  undefined4 local_34;
  int local_30;
  uint local_2c;
  int local_24;
  int iStack_20;
  int iStack_1c;
  int iStack_18;
  uint local_14;
  
  local_14 = DAT_10388d00 ^ (uint)&local_40;
  iVar2 = param_1[2];
  iVar10 = 0x10000;
  if ((*(byte *)(param_1 + 4) & 1) == 0) {
    iVar10 = *(int *)(*(int *)(param_1[1] + 0x2c) + 8);
  }
  iVar3 = *param_1;
  local_40 = param_2;
  if (*(int *)(iVar2 + 0x48) == 0x636f6d70) {
    local_24 = param_1[9];
    iStack_20 = param_1[10];
    iStack_1c = param_1[0xb];
    iStack_18 = param_1[0xc];
  }
  else {
    FUN_101c0df9(iVar2 + 0x6c,&local_24);
  }
  *(int *)(iVar2 + 0x38) = param_1[0xf];
  *(int *)(iVar2 + 0x20) = local_24;
  *(int *)(iVar2 + 0x24) = iStack_18;
  if (param_1[0x30] == 0) {
    iVar8 = param_1[0x13] - param_1[0x11];
  }
  else {
    iVar8 = (uint)*(byte *)(param_1[0x30] + local_40) << 6;
    local_3c = param_1;
  }
  *(int *)(iVar2 + 0x28) = iVar8;
  *(int *)(iVar2 + 0x18) = iStack_1c - local_24;
  *(int *)(iVar2 + 0x1c) = iStack_18 - iStack_20;
  local_38 = iVar10;
  if ((*(char *)(iVar3 + 0x124) == '\0') || (*(short *)(iVar3 + 0x14a) == 0)) {
    sVar5 = FUN_101c2523(iStack_18 - iStack_20,iVar10);
    psVar1 = (short *)(iVar3 + 0xdc);
    psVar9 = (short *)(iVar3 + 0xde);
    if (*(short *)(iVar3 + 0x174) != -1) {
      psVar9 = (short *)(iVar3 + 0x1bc);
      psVar1 = (short *)(iVar3 + 0x1ba);
    }
    uVar6 = (int)*psVar1 - (int)*psVar9;
    iVar8 = (int)(uVar6 - (int)sVar5) / 2;
  }
  else {
    sVar5 = FUN_101c2523(param_1[0x29] - iStack_18,iVar10);
    iVar8 = (int)sVar5;
    uVar6 = 0;
    iVar7 = param_1[0x29] - param_1[0x2b];
    if (iVar7 != 0 && param_1[0x2b] <= param_1[0x29]) {
      uVar6 = FUN_101c2523(iVar7,iVar10);
      uVar6 = uVar6 & 0xffff;
    }
  }
  piVar4 = *(int **)(*(int *)(iVar3 + 0x80) + 0x34);
  if ((piVar4 != (int *)0x0) && (*(code **)(*piVar4 + 8) != (code *)0x0)) {
    local_34 = 0;
    local_30 = iVar8;
    local_2c = uVar6;
    iVar10 = (**(code **)(*piVar4 + 8))(piVar4[1],local_40,1,&local_34);
    uVar6 = local_2c;
    iVar8 = local_30;
    if (iVar10 != 0) goto LAB_101ea11c;
  }
  *(uint *)(iVar2 + 0x3c) = uVar6;
  if ((*(byte *)(param_1 + 4) & 1) == 0) {
    iVar10 = (int)((longlong)iVar8 * (longlong)local_38 >> 0x3f);
    auVar12._0_8_ = CONCAT44(iVar10,iVar10);
    auVar12._8_4_ = (int)((longlong)(int)uVar6 * (longlong)local_38 >> 0x3f);
    auVar12._12_4_ = auVar12._8_4_;
    uVar11 = CONCAT44((int)((ulonglong)
                            (auVar12._8_8_ + (longlong)(int)uVar6 * (longlong)local_38 +
                            _UNK_10302e78) >> 0x10),
                      (int)((ulonglong)
                            (auVar12._0_8_ + (longlong)iVar8 * (longlong)local_38 + _DAT_10302e70)
                           >> 0x10));
  }
  else {
    uVar11 = CONCAT44(uVar6,iVar8);
  }
  *(int *)(iVar2 + 0x2c) = *(int *)(iVar2 + 0x20) - *(int *)(iVar2 + 0x28) / 2;
  *(undefined8 *)(iVar2 + 0x30) = uVar11;
  iVar10 = 0;
LAB_101ea11c:
  if (DAT_10388d00 == (local_14 ^ (uint)&local_40)) {
    return iVar10;
  }
                    /* WARNING: Subroutine does not return */
  FUN_102283e0();
}

