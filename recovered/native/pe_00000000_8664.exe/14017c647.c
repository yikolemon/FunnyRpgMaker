/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 14017c647 */

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

int FUN_14017c647(undefined8 *param_1,undefined8 *param_2)

{
  int iVar1;
  ushort *puVar2;
  int *piVar3;
  undefined8 uVar4;
  uint uVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  undefined1 auStack_40d8 [32];
  undefined8 local_40b8;
  int *local_40b0;
  int local_40a8 [4086];
  int local_d0 [6];
  undefined8 local_b8;
  int local_b0;
  int local_ac;
  int *local_a0;
  int *local_98;
  undefined4 local_70;
  undefined4 uStack_6c;
  undefined4 uStack_68;
  undefined4 uStack_64;
  undefined4 local_60;
  undefined4 uStack_5c;
  undefined4 uStack_58;
  undefined4 uStack_54;
  undefined8 local_50;
  longlong local_48;
  int local_40;
  longlong local_38;
  undefined8 uStack_30;
  ulonglong local_20;
  
  local_20 = DAT_140f17b40 ^ (ulonglong)auStack_40d8;
  if (param_1 == (undefined8 *)0x0) {
LAB_14017c787:
    iVar7 = 6;
    goto LAB_14017c882;
  }
  iVar7 = 0x13;
  if ((*(uint *)(param_2 + 2) & 1) == 0) goto LAB_14017c882;
  puVar2 = (ushort *)param_2[1];
  iVar7 = 0x14;
  if (puVar2 == (ushort *)0x0) goto LAB_14017c882;
  if ((puVar2[1] == 0) || (*puVar2 == 0)) {
LAB_14017c880:
    iVar7 = 0;
  }
  else {
    if ((*(longlong *)(puVar2 + 0xc) == 0) ||
       ((*(longlong *)(puVar2 + 4) == 0 ||
        (*(ushort *)(*(longlong *)(puVar2 + 0xc) + (ulonglong)(*puVar2 - 1) * 2) + 1 !=
         (uint)puVar2[1])))) goto LAB_14017c882;
    piVar3 = (int *)*param_2;
    local_50 = *(undefined8 *)(puVar2 + 0x10);
    local_70 = *(undefined4 *)puVar2;
    uStack_6c = *(undefined4 *)(puVar2 + 2);
    uStack_68 = *(undefined4 *)(puVar2 + 4);
    uStack_64 = *(undefined4 *)(puVar2 + 6);
    local_60 = *(undefined4 *)(puVar2 + 8);
    uStack_5c = *(undefined4 *)(puVar2 + 10);
    uStack_58 = *(undefined4 *)(puVar2 + 0xc);
    uStack_54 = *(undefined4 *)(puVar2 + 0xe);
    if ((*(uint *)(param_2 + 2) & 2) == 0) {
      if (piVar3 == (int *)0x0) goto LAB_14017c787;
      iVar1 = piVar3[1];
      if ((iVar1 == 0) || (iVar6 = *piVar3, iVar6 == 0)) goto LAB_14017c880;
      iVar7 = 6;
      if (*(longlong *)(piVar3 + 4) == 0) goto LAB_14017c882;
      local_40 = piVar3[2];
      iVar8 = 0;
      uVar5 = (iVar6 + -1) * local_40;
      if (local_40 < 0) {
        uVar5 = 0;
      }
      local_48 = *(longlong *)(piVar3 + 4) + (ulonglong)uVar5;
      local_b8 = 0;
      local_38 = 0;
      uStack_30 = 0;
      iVar9 = 0;
    }
    else {
      if (param_2[3] == 0) goto LAB_14017c880;
      uStack_30 = param_2[7];
      iVar9 = *(int *)(param_2 + 8);
      iVar8 = *(int *)((longlong)param_2 + 0x44);
      local_b8 = param_2[8];
      iVar1 = *(int *)(param_2 + 9);
      iVar6 = *(int *)((longlong)param_2 + 0x4c);
      local_38 = param_2[3];
    }
    iVar7 = 0;
    local_b0 = iVar1;
    local_ac = iVar6;
    if (iVar8 < iVar6 && iVar9 < iVar1) {
      uVar5 = (iVar6 + iVar1 + iVar8 * -2) * 10;
      if (uVar5 < 0x2ab) {
        local_a0 = local_40a8;
        local_98 = local_d0;
        iVar7 = FUN_14017cc3a();
      }
      else {
        uVar4 = *param_1;
        local_40b0 = local_40a8;
        local_40b8 = 0;
        local_a0 = (int *)FUN_14012b8aa(uVar4,0x18,0,uVar5);
        iVar7 = local_40a8[0];
        if (local_40a8[0] == 0) {
          local_98 = local_a0 + (ulonglong)uVar5 * 6 + -6;
          iVar7 = FUN_14017cc3a(&local_b8);
          FUN_140128b39(uVar4,local_a0);
        }
      }
    }
  }
LAB_14017c882:
  if (DAT_140f17b40 == (local_20 ^ (ulonglong)auStack_40d8)) {
    return iVar7;
  }
                    /* WARNING: Subroutine does not return */
  FUN_140188a00(local_20 ^ (ulonglong)auStack_40d8);
}

