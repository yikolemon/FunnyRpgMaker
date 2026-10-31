/* Ghidra pseudocode. Image: pe_00a0fad0_8664.exe Address: 1400a23ee */

uint * FUN_1400a23ee(uint *param_1,undefined8 param_2,int *param_3)

{
  longlong lVar1;
  longlong lVar2;
  int iVar3;
  undefined8 uVar4;
  undefined2 *puVar5;
  undefined8 ***pppuVar6;
  bool bVar7;
  longlong local_140;
  undefined1 local_138 [40];
  longlong local_110;
  longlong local_108;
  undefined1 local_100 [40];
  undefined1 local_d8 [32];
  undefined8 **local_b8 [2];
  longlong local_a8;
  ulonglong local_a0;
  int *local_98;
  uint local_90;
  uint uStack_8c;
  uint uStack_88;
  uint uStack_84;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined2 local_70;
  undefined2 uStack_6e;
  uint uStack_6c;
  uint uStack_68;
  uint uStack_64;
  undefined8 local_60;
  ulonglong uStack_58;
  uint *local_50;
  undefined8 local_48;
  
  local_48 = 0xfffffffffffffffe;
  *param_3 = 0;
  local_50 = param_1;
  uVar4 = FUN_140007025();
  *(undefined8 *)(param_3 + 2) = uVar4;
  FUN_14004199e(&local_70);
  iVar3 = FUN_1400a28f7(&local_70,param_2);
  if (iVar3 < 0x7b) {
    if ((iVar3 - 2U < 0x3f) && ((0x4008000000000003U >> ((ulonglong)(iVar3 - 2U) & 0x3f) & 1) != 0))
    {
LAB_1400a24cd:
      FUN_1400a2b08(param_2,local_d8);
      FUN_1400a30e0(local_d8,&local_90);
      FUN_1400a315e(local_d8,local_b8);
      FUN_1400a31da(local_b8,&local_108);
      pppuVar6 = local_b8;
      if (7 < local_a0) {
        pppuVar6 = (undefined8 ***)local_b8[0];
      }
      local_110 = (longlong)pppuVar6 + local_a8 * 2;
      local_98 = param_3;
      FUN_1400a3bd2(&local_140,&local_110,local_b8);
      bVar7 = true;
      while( true ) {
        lVar2 = local_108;
        lVar1 = local_140;
        if (local_108 == local_140) break;
        FUN_140042c80(&local_90,local_100);
        if (bVar7) {
          local_60 = 0;
          puVar5 = &local_70;
          if (7 < uStack_58) {
            puVar5 = (undefined2 *)CONCAT44(uStack_6c,CONCAT22(uStack_6e,local_70));
          }
          *puVar5 = 0;
          iVar3 = FUN_1400a28f7(&local_70,&local_90);
          bVar7 = false;
          if (iVar3 < 0x7b) {
            if ((0x3e < iVar3 - 2U) ||
               ((0x4008000000000003U >> ((ulonglong)(iVar3 - 2U) & 0x3f) & 1) == 0)) {
              if (iVar3 != 0) goto LAB_1400a25f6;
              FUN_14000ff1e(&local_90,&local_70);
              bVar7 = true;
            }
          }
          else if (((iVar3 != 0x7b) && (bVar7 = false, iVar3 != 0xa1)) && (iVar3 != 0x10b)) {
LAB_1400a25f6:
            uVar4 = FUN_140007025();
            *local_98 = iVar3;
            *(undefined8 *)(local_98 + 2) = uVar4;
            local_50[0] = 0;
            local_50[1] = 0;
            local_50[2] = 0;
            local_50[3] = 0;
            local_50[4] = 0;
            local_50[5] = 0;
            local_50[6] = 0;
            local_50[7] = 0;
            FUN_14004199e();
            break;
          }
        }
        else {
          bVar7 = false;
        }
        FUN_1400a3420(&local_108);
      }
      FUN_140005690(local_138);
      FUN_140005690(local_100);
      if (lVar2 == lVar1) {
        *(undefined8 *)(local_50 + 4) = local_80;
        *(undefined8 *)(local_50 + 6) = uStack_78;
        *local_50 = local_90;
        local_50[1] = uStack_8c;
        local_50[2] = uStack_88;
        local_50[3] = uStack_84;
        local_80 = 0;
        uStack_78 = 7;
        local_90 = local_90 & 0xffff0000;
      }
      FUN_140005690(local_b8);
      FUN_140005690(&local_90);
      FUN_140005690(local_d8);
      goto LAB_1400a2680;
    }
    if (iVar3 == 0) {
      *(undefined8 *)(local_50 + 4) = local_60;
      *(ulonglong *)(local_50 + 6) = uStack_58;
      *local_50 = CONCAT22(uStack_6e,local_70);
      local_50[1] = uStack_6c;
      local_50[2] = uStack_68;
      local_50[3] = uStack_64;
      local_60 = 0;
      uStack_58 = 7;
      local_70 = 0;
      goto LAB_1400a2680;
    }
  }
  else if (((iVar3 == 0x7b) || (iVar3 == 0xa1)) || (iVar3 == 0x10b)) goto LAB_1400a24cd;
  uVar4 = FUN_140007025();
  *param_3 = iVar3;
  *(undefined8 *)(param_3 + 2) = uVar4;
  local_50[0] = 0;
  local_50[1] = 0;
  local_50[2] = 0;
  local_50[3] = 0;
  local_50[4] = 0;
  local_50[5] = 0;
  local_50[6] = 0;
  local_50[7] = 0;
  FUN_14004199e();
LAB_1400a2680:
  FUN_140005690(&local_70);
  return local_50;
}

