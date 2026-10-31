/* Ghidra pseudocode. Image: pe_00bf40d0_8664.exe Address: 140043261 */

undefined8 FUN_140043261(longlong *param_1,uint param_2)

{
  short *psVar1;
  longlong lVar2;
  longlong *plVar3;
  int iVar4;
  uint uVar5;
  undefined8 uVar6;
  uint uVar7;
  short *psVar8;
  uint uVar9;
  longlong lVar10;
  undefined1 auStack_78 [32];
  undefined4 local_58;
  int local_54;
  uint local_50;
  undefined8 local_48;
  undefined8 uStack_40;
  ulonglong local_38;
  
  local_38 = DAT_14012ea80 ^ (ulonglong)auStack_78;
  lVar2 = param_1[2];
  uVar9 = 0x10000;
  if ((*(byte *)(param_1 + 4) & 1) == 0) {
    uVar9 = *(uint *)(*(longlong *)(param_1[1] + 0x40) + 8);
  }
  lVar10 = *param_1;
  if (*(int *)(lVar2 + 0x60) == 0x636f6d70) {
    local_48 = param_1[7];
    uStack_40 = param_1[8];
  }
  else {
    FUN_14001d45b(lVar2 + 0x98,(int *)&local_48);
  }
  *(int *)(lVar2 + 0x50) = (int)param_1[10];
  *(int *)(lVar2 + 0x38) = (int)local_48;
  *(int *)(lVar2 + 0x3c) = uStack_40._4_4_;
  if (param_1[0x25] == 0) {
    iVar4 = (int)param_1[0xc] - (int)param_1[0xb];
  }
  else {
    iVar4 = (uint)*(byte *)(param_1[0x25] + (ulonglong)param_2) << 6;
  }
  *(int *)(lVar2 + 0x40) = iVar4;
  *(int *)(lVar2 + 0x30) = (int)uStack_40 - (int)local_48;
  *(int *)(lVar2 + 0x34) = uStack_40._4_4_ - local_48._4_4_;
  if ((*(char *)(lVar10 + 400) == '\0') || (*(short *)(lVar10 + 0x1ba) == 0)) {
    iVar4 = FUN_14001ecff(uStack_40._4_4_ - local_48._4_4_,uVar9);
    psVar1 = (short *)(lVar10 + 0x13c);
    psVar8 = (short *)(lVar10 + 0x13e);
    if (*(short *)(lVar10 + 0x208) != -1) {
      psVar8 = (short *)(lVar10 + 0x250);
      psVar1 = (short *)(lVar10 + 0x24e);
    }
    uVar5 = (int)*psVar1 - (int)*psVar8;
    iVar4 = (int)(uVar5 - (int)(short)iVar4) / 2;
  }
  else {
    iVar4 = FUN_14001ecff(*(int *)((longlong)param_1 + 0xfc) - uStack_40._4_4_,uVar9);
    iVar4 = (int)(short)iVar4;
    uVar5 = 0;
    uVar7 = *(int *)((longlong)param_1 + 0xfc) - *(int *)((longlong)param_1 + 0x104);
    if (uVar7 != 0 && *(int *)((longlong)param_1 + 0x104) <= *(int *)((longlong)param_1 + 0xfc)) {
      uVar5 = FUN_14001ecff(uVar7,uVar9);
      uVar5 = uVar5 & 0xffff;
    }
  }
  plVar3 = *(longlong **)(*(longlong *)(lVar10 + 0xd0) + 0x50);
  if ((plVar3 != (longlong *)0x0) && (*(code **)(*plVar3 + 0x10) != (code *)0x0)) {
    local_58 = 0;
    local_54 = iVar4;
    local_50 = uVar5;
    uVar6 = (**(code **)(*plVar3 + 0x10))(plVar3[1],param_2,1);
    iVar4 = local_54;
    uVar5 = local_50;
    if ((int)uVar6 != 0) goto LAB_140043458;
  }
  *(uint *)(lVar2 + 0x54) = uVar5;
  if ((*(byte *)(param_1 + 4) & 1) == 0) {
    lVar10 = (longlong)iVar4 * (longlong)(int)uVar9;
    iVar4 = (int)((ulonglong)(lVar10 + 0x8000 + (lVar10 >> 0x3f)) >> 0x10);
    lVar10 = (longlong)(int)uVar5 * (longlong)(int)uVar9;
    uVar5 = (uint)((ulonglong)(lVar10 + 0x8000 + (lVar10 >> 0x3f)) >> 0x10);
  }
  *(int *)(lVar2 + 0x44) = *(int *)(lVar2 + 0x38) - *(int *)(lVar2 + 0x40) / 2;
  *(int *)(lVar2 + 0x48) = iVar4;
  *(uint *)(lVar2 + 0x4c) = uVar5;
  uVar6 = 0;
LAB_140043458:
  if (DAT_14012ea80 == (local_38 ^ (ulonglong)auStack_78)) {
    return uVar6;
  }
                    /* WARNING: Subroutine does not return */
  FUN_140086440(local_38 ^ (ulonglong)auStack_78);
}

