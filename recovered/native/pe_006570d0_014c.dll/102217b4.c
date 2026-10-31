/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 102217b4 */

int __fastcall FUN_102217b4(undefined4 param_1,int *param_2,uint param_3,int *param_4)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  undefined1 local_58 [4];
  int *local_54;
  undefined8 *local_50;
  int local_4c;
  int iStack_48;
  int iStack_44;
  int iStack_40;
  int local_3c;
  int iStack_38;
  int iStack_34;
  int iStack_30;
  int local_1c;
  int local_18;
  uint local_14;
  
  local_14 = DAT_10388d00 ^ (uint)local_58;
  local_4c = *param_2;
  iStack_48 = param_2[1];
  iStack_44 = param_2[2];
  iStack_40 = param_2[3];
  local_3c = param_2[4];
  iStack_38 = param_2[5];
  iStack_34 = param_2[6];
  iStack_30 = param_2[7];
  uVar3 = param_2[6] + local_4c * 2 + param_2[2] * -3;
  uVar2 = -uVar3;
  if ((int)uVar2 < 0) {
    uVar2 = uVar3;
  }
  if (uVar2 < 0x10) {
    uVar3 = param_2[7] + param_2[1] * 2 + iStack_40 * -3;
    uVar2 = -uVar3;
    if ((int)uVar2 < 0) {
      uVar2 = uVar3;
    }
    if (0xf < uVar2) goto LAB_1022185f;
    uVar3 = param_2[6] * 2 + local_4c + local_3c * -3;
    uVar2 = -uVar3;
    if ((int)uVar2 < 0) {
      uVar2 = uVar3;
    }
    if (0xf < uVar2) goto LAB_1022185f;
    uVar3 = param_2[1] + param_2[7] * 2 + param_2[5] * -3;
    uVar2 = -uVar3;
    if ((int)uVar2 < 0) {
      uVar2 = uVar3;
    }
    if (0xf < uVar2) goto LAB_1022185f;
    FUN_10221a0d();
  }
  else {
LAB_1022185f:
    FUN_10221a0d();
    if (2 < param_3) {
      iVar1 = FUN_102217b4(param_3 >> 1,param_4);
      if (iVar1 == 0) {
        iVar1 = FUN_102217b4(param_3 >> 1,param_4);
      }
      goto LAB_10221911;
    }
  }
  iVar1 = FUN_10220f38();
  if (iVar1 == 0) {
    iVar1 = FUN_10220f38();
    if (iVar1 == 0) {
      *local_50 = CONCAT44(iStack_48,local_4c);
      *(int *)((int)local_50 + 0xc) = iStack_30;
      *(int *)(local_50 + 1) = iStack_34;
      *(undefined4 *)(local_50 + 4) = 1;
      local_54[1] = iStack_30;
      *local_54 = iStack_34;
      local_54[3] = local_18;
      local_54[2] = local_1c;
      local_54[8] = 1;
      *(int **)((int)local_50 + 0x24) = local_54;
      local_54[9] = *param_4;
      *param_4 = (int)local_50;
      iVar1 = 0;
    }
  }
LAB_10221911:
  if (DAT_10388d00 == (local_14 ^ (uint)local_58)) {
    return iVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_102283e0();
}

