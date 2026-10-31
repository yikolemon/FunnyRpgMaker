/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 100ad5a8 */

uint * FUN_100ad5a8(uint *param_1,undefined4 param_2,int *param_3)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 ****ppppuVar3;
  int iVar4;
  int *unaff_FS_OFFSET;
  int local_d0 [8];
  undefined1 local_b0 [24];
  int local_98;
  undefined1 local_94 [28];
  int local_78;
  undefined4 ***local_74 [4];
  int local_64;
  uint local_60;
  uint local_5c;
  uint uStack_58;
  uint uStack_54;
  uint uStack_50;
  undefined4 local_4c;
  undefined4 uStack_48;
  int local_44;
  int local_40;
  undefined4 ***local_3c;
  uint uStack_38;
  uint uStack_34;
  uint uStack_30;
  undefined4 local_2c;
  uint uStack_28;
  uint local_24;
  undefined1 *local_20;
  int local_1c;
  undefined1 *local_18;
  undefined4 local_14;
  
  local_20 = (undefined1 *)local_d0;
  local_14 = 0xffffffff;
  local_18 = &LAB_100c4640;
  local_1c = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = (int)&local_1c;
  *param_3 = 0;
  iVar1 = FUN_10002303();
  param_3[1] = iVar1;
  FUN_10002eb6();
  local_14 = 4;
  iVar1 = FUN_100ad9d7(&local_3c,param_2);
  if (iVar1 < 0x40) {
    if (1 < iVar1 - 2U) {
      if (iVar1 == 0) {
        *(ulonglong *)(param_1 + 4) = CONCAT44(uStack_28,local_2c);
        *param_1 = (uint)local_3c;
        param_1[1] = uStack_38;
        param_1[2] = uStack_34;
        param_1[3] = uStack_30;
        local_2c = 0;
        uStack_28 = 7;
        local_3c = (undefined4 ***)((uint)local_3c & 0xffff0000);
        goto code_r0x100ad8d8;
      }
      if (iVar1 != 0x35) goto LAB_100ad7f3;
    }
  }
  else if (iVar1 < 0xa1) {
    if ((iVar1 != 0x40) && (iVar1 != 0x7b)) {
LAB_100ad7f3:
      iVar4 = FUN_10002303();
      *param_3 = iVar1;
      param_3[1] = iVar4;
      *param_1 = 0;
      param_1[1] = 0;
      param_1[2] = 0;
      param_1[3] = 0;
      param_1[4] = 0;
      param_1[5] = 0;
      FUN_10002eb6();
      goto code_r0x100ad8d8;
    }
  }
  else if ((iVar1 != 0xa1) && (iVar1 != 0x10b)) goto LAB_100ad7f3;
  FUN_100adbce(local_b0);
  local_14 = 5;
  FUN_100ae10a(&local_5c);
  local_14 = 6;
  FUN_100ae172(local_74);
  local_14 = 7;
  FUN_100ae1d8(&local_98);
  local_14 = 8;
  ppppuVar3 = local_74;
  if (7 < local_60) {
    ppppuVar3 = (undefined4 ****)local_74[0];
  }
  local_78 = (int)ppppuVar3 + local_64 * 2;
  uVar2 = FUN_100aebec(&local_78,local_74);
  local_14 = 9;
  local_24 = CONCAT31((int3)((uint)uVar2 >> 8),1);
  while( true ) {
    local_44 = local_98;
    local_40 = local_d0[0];
    if (local_98 == local_d0[0]) break;
    FUN_1000404c(local_94);
    if ((local_24 & 1) == 0) {
      local_24 = 0;
    }
    else {
      local_2c = 0;
      ppppuVar3 = &local_3c;
      if (7 < uStack_28) {
        ppppuVar3 = (undefined4 ****)local_3c;
      }
      *(undefined2 *)ppppuVar3 = 0;
      iVar1 = FUN_100ad9d7(&local_3c,&local_5c);
      local_24 = 0;
      if (iVar1 < 0x40) {
        if (1 < iVar1 - 2U) {
          if (iVar1 == 0) {
            uVar2 = FUN_100128b2(&local_3c);
            local_24 = CONCAT31((int3)((uint)uVar2 >> 8),1);
          }
          else if (iVar1 != 0x35) goto LAB_100ad81b;
        }
      }
      else if (iVar1 < 0xa1) {
        if ((iVar1 != 0x40) && (iVar1 != 0x7b)) {
LAB_100ad81b:
          iVar4 = FUN_10002303();
          *param_3 = iVar1;
          param_3[1] = iVar4;
          *param_1 = 0;
          param_1[1] = 0;
          param_1[2] = 0;
          param_1[3] = 0;
          param_1[4] = 0;
          param_1[5] = 0;
          FUN_10002eb6();
          break;
        }
      }
      else if ((iVar1 != 0xa1) && (iVar1 != 0x10b)) goto LAB_100ad81b;
    }
    FUN_100ae432();
  }
  local_14 = 0xffffffff;
  FUN_10001f04();
  local_14 = 0xffffffff;
  FUN_10001f04();
  if (local_44 == local_40) {
    *(ulonglong *)(param_1 + 4) = CONCAT44(uStack_48,local_4c);
    *param_1 = local_5c;
    param_1[1] = uStack_58;
    param_1[2] = uStack_54;
    param_1[3] = uStack_50;
    local_4c = 0;
    uStack_48 = 7;
    local_5c = local_5c & 0xffff0000;
    local_14 = 0xffffffff;
  }
  FUN_10001f04();
  FUN_10001f04();
  FUN_10001f04();
code_r0x100ad8d8:
  local_14 = 0xffffffff;
  FUN_10001f04();
  *unaff_FS_OFFSET = local_1c;
  return param_1;
}

