/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 1401ad3b0 */

void FUN_1401ad3b0(int *param_1,undefined8 param_2,undefined8 param_3,longlong param_4,uint *param_5
                  ,char param_6,int param_7,undefined8 param_8)

{
  undefined4 *puVar1;
  uint uVar2;
  char cVar3;
  int iVar4;
  int iVar5;
  longlong lVar6;
  longlong lVar7;
  undefined8 uVar8;
  int *piVar9;
  uint uVar10;
  ulonglong uVar11;
  undefined1 auStack_138 [32];
  uint *local_118;
  uint *local_110;
  int local_108;
  undefined8 local_100;
  undefined4 *local_f8;
  longlong local_f0;
  char local_e8;
  int local_d8;
  uint local_d4;
  undefined8 local_d0;
  longlong *local_c8;
  undefined4 local_c0;
  int local_bc;
  undefined8 local_b8;
  longlong local_b0;
  undefined1 local_a8 [8];
  uint *local_a0;
  undefined8 local_98;
  longlong *local_90;
  uint local_88;
  uint local_78;
  undefined4 local_70;
  undefined4 uStack_6c;
  undefined4 uStack_68;
  int iStack_64;
  undefined4 local_60;
  ulonglong local_58;
  
  local_58 = DAT_140f17b40 ^ (ulonglong)auStack_138;
  local_d0 = param_3;
  local_b8 = param_2;
  iVar4 = FUN_1401aaf90(param_5,param_4);
  local_d8 = iVar4;
  FUN_14018f810(param_2,param_4,param_5,&local_c8);
  iVar5 = GetUnwindTryBlock(param_2,param_4,param_5);
  if (iVar5 < iVar4) {
    FUN_1401ab100(&local_c8,param_4,param_5,iVar4);
    SetUnwindTryBlock(param_2,param_4,param_5,iVar4);
  }
  else {
    iVar4 = GetUnwindTryBlock(param_2,param_4,param_5);
    local_d8 = iVar4;
  }
  if ((-2 < iVar4) && (iVar4 < (int)param_5[1])) {
    if ((*param_1 == -0x1f928c9d) &&
       (((param_1[6] == 4 && (param_1[8] + 0xe66cfae0U < 3)) && (*(longlong *)(param_1 + 0xc) == 0))
       )) {
      lVar6 = FUN_1401aae30();
      if (*(longlong *)(lVar6 + 0x20) == 0) goto LAB_1401ad8d8;
      lVar6 = FUN_1401aae30();
      param_1 = *(int **)(lVar6 + 0x20);
      lVar6 = FUN_1401aae30();
      param_3 = *(undefined8 *)(lVar6 + 0x28);
      local_d0 = param_3;
      FUN_14018ff50(*(undefined8 *)(param_1 + 0xe));
      if ((param_1 == (int *)0x0) ||
         (((*param_1 == -0x1f928c9d && (param_1[6] == 4)) &&
          ((param_1[8] + 0xe66cfae0U < 3 && (*(longlong *)(param_1 + 0xc) == 0))))))
      goto LAB_1401ad951;
      lVar6 = FUN_1401aae30();
      if (*(longlong *)(lVar6 + 0x38) != 0) {
        lVar6 = FUN_1401aae30();
        uVar8 = *(undefined8 *)(lVar6 + 0x38);
        lVar6 = FUN_1401aae30();
        *(undefined8 *)(lVar6 + 0x38) = 0;
        cVar3 = FUN_1401ac560(param_1,uVar8);
        iVar4 = local_d8;
        if (cVar3 == '\0') {
          cVar3 = FUN_1401ac670(uVar8);
          if (cVar3 != '\0') {
            __DestructExceptionObject(param_1,1);
            FUN_1401ac430(&local_70);
                    /* WARNING: Subroutine does not return */
            FUN_14018f0a0(&local_70,&DAT_140f13838);
          }
                    /* WARNING: Subroutine does not return */
          FUN_1401aa0e4();
        }
      }
    }
    local_98 = *(undefined8 *)(param_4 + 8);
    local_a0 = param_5;
    if (((*param_1 == -0x1f928c9d) && (param_1[6] == 4)) && (param_1[8] + 0xe66cfae0U < 3)) {
      if (param_5[3] != 0) {
        local_110 = (uint *)CONCAT44(local_110._4_4_,param_7);
        local_118 = param_5;
        FUN_14018fa40(&local_90,&local_a0,iVar4,param_4);
        local_c8 = local_90;
        local_d4 = local_88;
        if (local_88 < local_78) {
          do {
            lVar7 = local_90[1];
            lVar6 = (longlong)*(int *)(*local_90 + 0x10) + (ulonglong)local_88 * 0x14;
            local_bc = *(int *)(lVar6 + lVar7);
            if ((local_bc <= iVar4) && (iVar4 <= *(int *)(lVar6 + 4 + lVar7))) {
              local_c0 = *(undefined4 *)(lVar6 + 8 + lVar7);
              uVar11 = 0;
              uVar2 = *(uint *)(lVar6 + 0xc + lVar7);
              local_b0 = (longlong)*(int *)(lVar6 + 0x10 + lVar7) + *(longlong *)(param_4 + 8);
              param_2 = local_b8;
              local_d4 = local_88;
              if (uVar2 != 0) {
                do {
                  puVar1 = (undefined4 *)(local_b0 + uVar11 * 0x14);
                  local_70 = *puVar1;
                  uStack_6c = puVar1[1];
                  uStack_68 = puVar1[2];
                  iStack_64 = puVar1[3];
                  local_60 = *(undefined4 *)(local_b0 + 0x10 + uVar11 * 0x14);
                  iVar4 = *(int *)(*(longlong *)(param_1 + 0xc) + 0xc);
                  lVar6 = FUN_14018ff30();
                  piVar9 = (int *)((longlong)iVar4 + lVar6 + 4);
                  iVar4 = *(int *)(*(longlong *)(param_1 + 0xc) + 0xc);
                  lVar6 = FUN_14018ff30();
                  local_88 = local_d4;
                  local_90 = local_c8;
                  param_2 = local_b8;
                  for (iVar4 = *(int *)(lVar6 + iVar4); local_d4 = local_88, local_c8 = local_90,
                      local_b8 = param_2, 0 < iVar4; iVar4 = iVar4 + -1) {
                    iVar5 = *piVar9;
                    lVar6 = FUN_14018ff30();
                    lVar6 = iVar5 + lVar6;
                    iVar5 = FUN_1401ac770(&local_70,lVar6,*(undefined8 *)(param_1 + 0xc));
                    param_2 = local_b8;
                    if (iVar5 != 0) {
                      uVar8 = FUN_14018f810(local_b8,param_4,param_5,local_a8);
                      if (lVar6 != 0) {
                        FUN_1401acda0(param_1,uVar8,&local_70,lVar6);
                      }
                      lVar7 = (longlong)iStack_64;
                      lVar6 = FUN_14018fef0();
                      local_118 = (uint *)(lVar6 + lVar7);
                      local_e8 = param_6;
                      local_f8 = &local_70;
                      local_100 = CONCAT44(local_100._4_4_,local_c0);
                      local_108 = local_bc;
                      local_110 = param_5;
                      local_f0 = param_4;
                      FUN_14018f910(param_2,param_1,local_d0,uVar8);
                      local_90 = local_c8;
                      local_88 = local_d4;
                      iVar4 = local_d8;
                      goto LAB_1401ad7a6;
                    }
                    piVar9 = piVar9 + 1;
                    local_88 = local_d4;
                    local_90 = local_c8;
                  }
                  uVar10 = (int)uVar11 + 1;
                  uVar11 = (ulonglong)uVar10;
                  iVar4 = local_d8;
                } while (uVar10 != uVar2);
              }
            }
LAB_1401ad7a6:
            local_88 = local_88 + 1;
            local_d4 = local_88;
          } while (local_88 < local_78);
        }
      }
      lVar6 = 0;
      if ((0x19930520 < (*param_5 & 0x1fffffff)) &&
         (((uVar2 = param_5[8], uVar2 != 0 && (lVar7 = FUN_14018fef0(), lVar7 + (int)uVar2 != 0)) ||
          (((param_5[9] & 4) != 0 && (cVar3 = FUN_14018f670(param_4,param_5), cVar3 == '\0')))))) {
        if ((param_5[9] & 4) != 0) {
          lVar6 = FUN_1401aae30();
          *(int **)(lVar6 + 0x20) = param_1;
          lVar6 = FUN_1401aae30();
          *(undefined8 *)(lVar6 + 0x28) = local_d0;
                    /* WARNING: Subroutine does not return */
          FUN_1401aa0e4();
        }
        uVar2 = param_5[8];
        if (uVar2 != 0) {
          lVar6 = FUN_14018fef0();
          lVar6 = (int)uVar2 + lVar6;
        }
        cVar3 = FUN_1401ac560(param_1,lVar6);
        if (cVar3 == '\0') {
          uVar8 = FUN_14018f810(param_2,param_4,param_5,local_a8);
          local_e8 = param_6;
          local_f8 = (undefined4 *)0x0;
          local_100 = CONCAT44(local_100._4_4_,0xffffffff);
          local_108 = -1;
          local_110 = param_5;
          local_118 = (uint *)0x0;
          local_f0 = param_4;
          FUN_14018f910(param_2,param_1,local_d0,uVar8);
        }
      }
    }
    else if (param_5[3] != 0) {
      if (param_6 != '\0') goto LAB_1401ad951;
      local_100 = param_8;
      local_108 = param_7;
      local_110 = (uint *)CONCAT44(local_110._4_4_,iVar4);
      local_118 = param_5;
      FUN_1401adf10(param_1,param_2,param_3,param_4);
    }
    lVar6 = FUN_1401aae30();
    if (*(longlong *)(lVar6 + 0x38) == 0) {
LAB_1401ad8d8:
                    /* WARNING: Subroutine does not return */
      FUN_140188a00(local_58 ^ (ulonglong)auStack_138);
    }
  }
LAB_1401ad951:
                    /* WARNING: Subroutine does not return */
  FUN_1401a0758();
}

