/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 1801f5c2d */

undefined8 FUN_1801f5c2d(longlong *param_1,uint param_2)

{
  short *psVar1;
  longlong lVar2;
  longlong *plVar3;
  short sVar4;
  ushort uVar5;
  uint uVar6;
  undefined8 uVar7;
  int iVar8;
  short *psVar9;
  int iVar10;
  int iVar11;
  longlong lVar12;
  undefined1 auStack_78 [32];
  undefined4 local_58;
  int local_54;
  uint local_50;
  int local_48;
  int iStack_44;
  int iStack_40;
  int iStack_3c;
  ulonglong local_38;
  
  local_38 = DAT_180402640 ^ (ulonglong)auStack_78;
  lVar2 = param_1[2];
  iVar10 = 0x10000;
  if ((*(byte *)(param_1 + 4) & 1) == 0) {
    iVar10 = *(int *)(*(longlong *)(param_1[1] + 0x40) + 8);
  }
  lVar12 = *param_1;
  if (*(int *)(lVar2 + 0x60) == 0x636f6d70) {
    local_48 = (int)param_1[7];
    iStack_44 = *(int *)((longlong)param_1 + 0x3c);
    iStack_40 = (int)param_1[8];
    iStack_3c = *(int *)((longlong)param_1 + 0x44);
  }
  else {
    FUN_1801caa83(lVar2 + 0x98,&local_48);
  }
  *(int *)(lVar2 + 0x50) = (int)param_1[10];
  *(int *)(lVar2 + 0x38) = local_48;
  *(int *)(lVar2 + 0x3c) = iStack_3c;
  if (param_1[0x25] == 0) {
    iVar11 = (int)param_1[0xc] - (int)param_1[0xb];
  }
  else {
    iVar11 = (uint)*(byte *)(param_1[0x25] + (ulonglong)param_2) << 6;
  }
  *(int *)(lVar2 + 0x40) = iVar11;
  *(int *)(lVar2 + 0x30) = iStack_40 - local_48;
  *(int *)(lVar2 + 0x34) = iStack_3c - iStack_44;
  if ((*(char *)(lVar12 + 400) == '\0') || (*(short *)(lVar12 + 0x1ba) == 0)) {
    sVar4 = FUN_1801cc3a4(iStack_3c - iStack_44,iVar10);
    psVar1 = (short *)(lVar12 + 0x13c);
    psVar9 = (short *)(lVar12 + 0x13e);
    if (*(short *)(lVar12 + 0x208) != -1) {
      psVar9 = (short *)(lVar12 + 0x250);
      psVar1 = (short *)(lVar12 + 0x24e);
    }
    uVar6 = (int)*psVar1 - (int)*psVar9;
    iVar11 = (int)(uVar6 - (int)sVar4) / 2;
  }
  else {
    sVar4 = FUN_1801cc3a4(*(int *)((longlong)param_1 + 0xfc) - iStack_3c,iVar10);
    iVar11 = (int)sVar4;
    uVar6 = 0;
    iVar8 = *(int *)((longlong)param_1 + 0xfc) - *(int *)((longlong)param_1 + 0x104);
    if (iVar8 != 0 && *(int *)((longlong)param_1 + 0x104) <= *(int *)((longlong)param_1 + 0xfc)) {
      uVar5 = FUN_1801cc3a4(iVar8,iVar10);
      uVar6 = (uint)uVar5;
    }
  }
  plVar3 = *(longlong **)(*(longlong *)(lVar12 + 0xd0) + 0x50);
  if ((plVar3 != (longlong *)0x0) && (*(code **)(*plVar3 + 0x10) != (code *)0x0)) {
    local_58 = 0;
    local_54 = iVar11;
    local_50 = uVar6;
    uVar7 = (**(code **)(*plVar3 + 0x10))(plVar3[1],(ulonglong)param_2,1);
    iVar11 = local_54;
    uVar6 = local_50;
    if ((int)uVar7 != 0) goto LAB_1801f5e24;
  }
  *(uint *)(lVar2 + 0x54) = uVar6;
  if ((*(byte *)(param_1 + 4) & 1) == 0) {
    lVar12 = (longlong)iVar11 * (longlong)iVar10;
    iVar11 = (int)((ulonglong)(lVar12 + 0x8000 + (lVar12 >> 0x3f)) >> 0x10);
    lVar12 = (longlong)(int)uVar6 * (longlong)iVar10;
    uVar6 = (uint)((ulonglong)(lVar12 + 0x8000 + (lVar12 >> 0x3f)) >> 0x10);
  }
  *(int *)(lVar2 + 0x44) = *(int *)(lVar2 + 0x38) - *(int *)(lVar2 + 0x40) / 2;
  *(int *)(lVar2 + 0x48) = iVar11;
  *(uint *)(lVar2 + 0x4c) = uVar6;
  uVar7 = 0;
LAB_1801f5e24:
  if (DAT_180402640 == (local_38 ^ (ulonglong)auStack_78)) {
    return uVar7;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1802396d0(local_38 ^ (ulonglong)auStack_78);
}

