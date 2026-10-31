/* Ghidra pseudocode. Image: pe_00bf40d0_8664.exe Address: 14007a59b */

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

int FUN_14007a59b(longlong *param_1,undefined8 *param_2)

{
  ushort *puVar1;
  int *piVar2;
  longlong lVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  ulonglong uVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  undefined1 auStackY_40d8 [32];
  int local_40a8 [4086];
  int local_d0 [6];
  undefined8 local_b8;
  int local_b0;
  int local_ac;
  int *local_a0;
  int *local_98;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined8 local_50;
  longlong local_48;
  int local_40;
  longlong local_38;
  undefined8 uStack_30;
  ulonglong local_20;
  
  local_20 = DAT_14012ea80 ^ (ulonglong)auStackY_40d8;
  if (param_1 == (longlong *)0x0) {
LAB_14007a6db:
    iVar6 = 6;
    goto LAB_14007a7d6;
  }
  iVar6 = 0x13;
  if ((*(uint *)(param_2 + 2) & 1) == 0) goto LAB_14007a7d6;
  puVar1 = (ushort *)param_2[1];
  iVar6 = 0x14;
  if (puVar1 == (ushort *)0x0) goto LAB_14007a7d6;
  if ((puVar1[1] == 0) || (*puVar1 == 0)) {
LAB_14007a7d4:
    iVar6 = 0;
  }
  else {
    if ((*(longlong *)(puVar1 + 0xc) == 0) ||
       ((*(longlong *)(puVar1 + 4) == 0 ||
        (*(ushort *)(*(longlong *)(puVar1 + 0xc) + (ulonglong)(*puVar1 - 1) * 2) + 1 !=
         (uint)puVar1[1])))) goto LAB_14007a7d6;
    piVar2 = (int *)*param_2;
    local_50 = *(undefined8 *)(puVar1 + 0x10);
    local_70 = *(undefined8 *)puVar1;
    uStack_68 = *(undefined8 *)(puVar1 + 4);
    local_60 = *(undefined8 *)(puVar1 + 8);
    uStack_58 = *(undefined8 *)(puVar1 + 0xc);
    if ((*(uint *)(param_2 + 2) & 2) == 0) {
      if (piVar2 == (int *)0x0) goto LAB_14007a6db;
      iVar8 = piVar2[1];
      if ((iVar8 == 0) || (iVar5 = *piVar2, iVar5 == 0)) goto LAB_14007a7d4;
      iVar6 = 6;
      if (*(longlong *)(piVar2 + 4) == 0) goto LAB_14007a7d6;
      local_40 = piVar2[2];
      iVar9 = 0;
      uVar4 = (iVar5 + -1) * local_40;
      if (local_40 < 0) {
        uVar4 = 0;
      }
      local_48 = *(longlong *)(piVar2 + 4) + (ulonglong)uVar4;
      local_b8 = 0;
      local_38 = 0;
      uStack_30 = 0;
      iVar10 = 0;
    }
    else {
      if (param_2[3] == 0) goto LAB_14007a7d4;
      uStack_30 = param_2[7];
      iVar10 = *(int *)(param_2 + 8);
      iVar9 = *(int *)((longlong)param_2 + 0x44);
      local_b8 = param_2[8];
      iVar8 = *(int *)(param_2 + 9);
      iVar5 = *(int *)((longlong)param_2 + 0x4c);
      local_38 = param_2[3];
    }
    iVar6 = 0;
    local_b0 = iVar8;
    local_ac = iVar5;
    if (iVar9 < iVar5 && iVar10 < iVar8) {
      uVar4 = (iVar5 + iVar8 + iVar9 * -2) * 10;
      if (uVar4 < 0x2ab) {
        local_a0 = local_40a8;
        local_98 = local_d0;
        uVar7 = FUN_14007ab8e((uint *)&local_b8);
        iVar6 = (int)uVar7;
      }
      else {
        lVar3 = *param_1;
        local_a0 = (int *)FUN_14001f231(lVar3,0x18,0,uVar4,0,local_40a8);
        iVar6 = local_40a8[0];
        if (local_40a8[0] == 0) {
          local_98 = local_a0 + (ulonglong)uVar4 * 6 + -6;
          uVar7 = FUN_14007ab8e((uint *)&local_b8);
          iVar6 = (int)uVar7;
          FUN_14001c53d(lVar3,(longlong)local_a0);
        }
      }
    }
  }
LAB_14007a7d6:
  if (DAT_14012ea80 == (local_20 ^ (ulonglong)auStackY_40d8)) {
    return iVar6;
  }
                    /* WARNING: Subroutine does not return */
  FUN_140086440(local_20 ^ (ulonglong)auStackY_40d8);
}

