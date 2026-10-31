/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 101f758e */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int __fastcall
FUN_101f758e(undefined4 *param_1,int param_2,undefined4 param_3,undefined4 param_4,int param_5,
            int param_6,undefined4 *param_7,int param_8)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  int iVar4;
  int iVar5;
  int *piVar6;
  undefined4 *puVar7;
  undefined4 uVar8;
  undefined1 auStack_54 [3];
  char local_51;
  undefined4 *local_50;
  int local_4c;
  int local_48;
  int local_44;
  int local_40 [11];
  uint local_14;
  
  local_14 = DAT_10388d00 ^ (uint)auStack_54;
  local_40[0] = 0;
  local_51 = (param_6 - 0x3000U & 0xffffefff) == 0;
  uVar8 = 0x60;
  if ((bool)local_51) {
    uVar8 = 0x201;
  }
  iVar1 = *(int *)(param_8 + 0x230);
  local_48 = param_2;
  iVar4 = FUN_101f4c1f(param_1,*param_7,uVar8,0,0);
  if (iVar4 != 0) goto LAB_101f75f4;
  local_4c = iVar1;
  _memset(param_1 + 6,0,0x9c);
  iVar1 = local_48;
  param_1[8] = 0x32ff9c;
  param_1[10] = 2;
  param_1[0xb] = 0x10000;
  param_1[0xe] = 0x10000;
  param_1[0x26] = 0x2210;
  uVar3 = _UNK_1029459c;
  uVar2 = _UNK_10294598;
  uVar8 = _UNK_10294594;
  *param_1 = _DAT_10294590;
  param_1[1] = uVar8;
  param_1[2] = uVar2;
  param_1[3] = uVar3;
  uVar8 = 0x30;
  if (local_51 != '\0') {
    uVar8 = 0x201;
  }
  param_1[4] = 0xffff;
  param_1[5] = 0xffff;
  param_1[0x1f] = 0xffff;
  param_1[0x20] = 0xffff;
  param_1[0x21] = 0xffff;
  param_1[0x2a] = 0xffff;
  param_1[0x2d] = uVar8;
  local_50 = param_1;
  if (*(int *)(local_48 + 0xc) == 0) {
    iVar4 = FUN_101c461e(param_4,*(undefined4 *)(local_48 + 0x14));
    if ((iVar4 != 0) ||
       (iVar4 = FUN_101c4b40(param_4,*(undefined4 *)(iVar1 + 0x18),local_40), iVar4 != 0))
    goto LAB_101f75f4;
    piVar6 = (int *)(iVar1 + 0x18);
LAB_101f76c9:
    iVar4 = *piVar6 + local_40[0];
    if (local_40[0] == 0) {
      iVar4 = 0;
    }
    iVar4 = FUN_101f4caf(iVar4);
  }
  else {
    piVar6 = &local_44;
    iVar4 = FUN_101f6767(local_40,piVar6);
    if (iVar4 == 0) goto LAB_101f76c9;
  }
  if (*(int *)(iVar1 + 0xc) == 0) {
    FUN_101c4c3e(param_4,local_40);
  }
  else {
    FUN_101f6754();
  }
  iVar1 = local_4c;
  puVar7 = local_50;
  if (iVar4 != 0) goto LAB_101f75f4;
  if (local_50[0x20] == 0xffff) {
    iVar4 = FUN_101f4747(param_7,local_50,0,0);
    if (iVar4 != 0) goto LAB_101f75f4;
    if ((param_6 != 0x3000) && (param_6 != 0x4000)) {
      iVar4 = *(int *)(*(int *)(param_8 + 0x80) + 0x3c);
      if (iVar4 == -1) {
        iVar4 = *(int *)(param_8 + 0x60);
        iVar5 = *(int *)(iVar4 + 0x44);
        local_50[0xa1] = iVar5;
        if (iVar5 != 0) {
          do {
            iVar5 = (**(code **)(iVar1 + 0x14))(iVar5);
            *(int *)(iVar4 + 0x44) = iVar5;
          } while (iVar5 < 0);
        }
      }
      else {
        local_50[0xa1] = iVar4;
        iVar4 = *(int *)(*(int *)(param_8 + 0x80) + 0x3c);
        if (iVar4 != 0) {
          do {
            uVar8 = (**(code **)(iVar1 + 0x14))(iVar4);
            *(undefined4 *)(*(int *)(param_8 + 0x80) + 0x3c) = uVar8;
            iVar4 = *(int *)(*(int *)(param_8 + 0x80) + 0x3c);
          } while (iVar4 < 0);
        }
      }
      puVar7 = local_50;
      if (local_50[0xa1] == 0) {
        local_50[0xa1] = local_50[0x84];
      }
    }
    if (puVar7[0x85] != 0) {
      iVar4 = FUN_101c461e(param_4,puVar7[0x85] + param_5 + puVar7[0x1c]);
      if ((iVar4 == 0) && (iVar4 = FUN_101f7272(1,local_51), iVar4 == 0)) {
        iVar4 = FUN_101f73d8(0,0);
      }
      goto LAB_101f75f4;
    }
  }
  iVar4 = 0;
LAB_101f75f4:
  FUN_101f4f75();
  if (DAT_10388d00 != (local_14 ^ (uint)auStack_54)) {
                    /* WARNING: Subroutine does not return */
    FUN_102283e0();
  }
  return iVar4;
}

