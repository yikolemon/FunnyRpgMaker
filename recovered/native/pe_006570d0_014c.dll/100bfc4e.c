/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 100bfc4e */

int * __thiscall FUN_100bfc4e(int *param_1,int *param_2,int param_3,undefined4 *param_4)

{
  uint uVar1;
  uint uVar2;
  bool bVar3;
  char cVar4;
  int iVar5;
  int iVar6;
  int *piVar7;
  uint uVar8;
  int *local_30;
  undefined4 local_2c;
  undefined4 local_28;
  int local_24;
  int local_20;
  undefined4 uStack_1c;
  int local_18;
  uint local_14;
  
  local_14 = DAT_10388d00 ^ (uint)&local_30;
  piVar7 = (int *)*param_1;
  if (*(char *)(param_3 + 0xd) == '\0') {
    local_24 = *piVar7;
    local_28 = *(undefined4 *)(param_3 + 0x10);
    uVar1 = *(uint *)(param_3 + 0x14);
    local_2c = *param_4;
    uVar2 = param_4[1];
    uVar8 = uVar2;
    if (uVar1 < uVar2) {
      uVar8 = uVar1;
    }
    local_30 = param_1;
    iVar6 = FUN_102595e0(local_2c,local_28,uVar8);
    bVar3 = iVar6 < 0;
    if (iVar6 == 0) {
      bVar3 = uVar2 < uVar1;
    }
    if (param_3 != local_24) {
      if (bVar3) {
        local_20 = param_3;
        piVar7 = (int *)FUN_100244ca();
        iVar6 = *piVar7;
        uVar1 = param_4[1];
        uVar2 = *(uint *)(iVar6 + 0x14);
        uVar8 = uVar2;
        if (uVar1 < uVar2) {
          uVar8 = uVar1;
        }
        iVar5 = FUN_102595e0(*(undefined4 *)(iVar6 + 0x10),*param_4,uVar8);
        bVar3 = iVar5 < 0;
        if (iVar5 == 0) {
          bVar3 = uVar2 < uVar1;
        }
        if (bVar3) {
          if (*(char *)(*(int *)(iVar6 + 8) + 0xd) != '\0') goto LAB_100bfd6f;
          goto LAB_100bfd91;
        }
LAB_100bfe34:
        FUN_100a9a88(&local_20,param_4);
        cVar4 = FUN_100a9a40(local_18,param_4);
        if (cVar4 == '\0') {
          *(ulonglong *)param_2 = CONCAT44(uStack_1c,local_20);
        }
        else {
          *param_2 = local_18;
          param_2[1] = 2;
        }
        *(bool *)(param_2 + 2) = cVar4 != '\0';
        goto LAB_100bfe76;
      }
      iVar6 = FUN_102595e0(local_28,local_2c,uVar8);
      bVar3 = iVar6 < 0;
      if (iVar6 == 0) {
        bVar3 = uVar1 < uVar2;
      }
      if (!bVar3) {
        *param_2 = param_3;
        param_2[1] = 0;
        *(undefined1 *)(param_2 + 2) = 1;
        goto LAB_100bfe76;
      }
      local_20 = param_3;
      piVar7 = (int *)FUN_10016fb8();
      iVar6 = *piVar7;
      if (*(char *)(iVar6 + 0xd) == '\0') {
        uVar1 = *(uint *)(iVar6 + 0x14);
        uVar2 = param_4[1];
        uVar8 = uVar2;
        if (uVar1 < uVar2) {
          uVar8 = uVar1;
        }
        iVar5 = FUN_102595e0(*param_4,*(undefined4 *)(iVar6 + 0x10),uVar8);
        bVar3 = iVar5 < 0;
        if (iVar5 == 0) {
          bVar3 = uVar2 < uVar1;
        }
        if (!bVar3) goto LAB_100bfe34;
      }
      if (*(char *)(*(int *)(param_3 + 8) + 0xd) == '\0') {
        *param_2 = iVar6;
        goto LAB_100bfd98;
      }
      *param_2 = param_3;
      goto LAB_100bfd72;
    }
    if (!bVar3) goto LAB_100bfe34;
LAB_100bfd91:
    *param_2 = param_3;
LAB_100bfd98:
    param_2[1] = 1;
  }
  else {
    iVar6 = piVar7[2];
    if (*(char *)(piVar7[1] + 0xd) == '\0') {
      uVar1 = param_4[1];
      uVar2 = *(uint *)(iVar6 + 0x14);
      uVar8 = uVar2;
      if (uVar1 < uVar2) {
        uVar8 = uVar1;
      }
      local_30 = param_1;
      iVar5 = FUN_102595e0(*(undefined4 *)(iVar6 + 0x10),*param_4,uVar8);
      bVar3 = iVar5 < 0;
      if (iVar5 == 0) {
        bVar3 = uVar2 < uVar1;
      }
      if (!bVar3) goto LAB_100bfe34;
    }
LAB_100bfd6f:
    *param_2 = iVar6;
LAB_100bfd72:
    param_2[1] = 0;
  }
  *(undefined1 *)(param_2 + 2) = 0;
LAB_100bfe76:
  if (DAT_10388d00 != (local_14 ^ (uint)&local_30)) {
                    /* WARNING: Subroutine does not return */
    FUN_102283e0();
  }
  return param_2;
}

