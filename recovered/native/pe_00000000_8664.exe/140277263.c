/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 140277263 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 *
FUN_140277263(undefined8 *param_1,ulonglong *param_2,ulonglong *param_3,ulonglong *param_4)

{
  ulonglong uVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  ulonglong *puVar5;
  ulonglong *puVar6;
  ulonglong *puVar7;
  ulonglong *puVar8;
  ulonglong *puVar9;
  undefined1 auStack_58 [32];
  undefined8 local_38;
  undefined8 uStack_30;
  ulonglong local_28;
  ulonglong local_20;
  
  local_20 = ram0x000140613b10 ^ (ulonglong)auStack_58;
  puVar9 = param_3;
  do {
    puVar7 = puVar9;
    if (puVar7 <= param_2) break;
    puVar9 = puVar7 + -3;
  } while (*puVar7 == puVar7[-3]);
  do {
    param_3 = param_3 + 3;
    puVar6 = param_3;
    puVar9 = puVar7;
    if (param_4 <= param_3) break;
  } while (*puVar7 == *param_3);
LAB_1402772af:
  do {
    puVar8 = puVar7;
    if (puVar6 < param_4) {
      if (*puVar6 <= *puVar9) {
        if (*puVar9 != *puVar6) goto joined_r0x000140277305;
        if (puVar6 != param_3) {
          local_28 = param_3[2];
          uVar1 = *param_3;
          uVar2 = param_3[1];
          param_3[2] = puVar6[2];
          uVar3 = puVar6[1];
          *param_3 = *puVar6;
          param_3[1] = uVar3;
          puVar6[2] = local_28;
          local_38._0_4_ = (undefined4)uVar1;
          local_38._4_4_ = (undefined4)(uVar1 >> 0x20);
          uStack_30._0_4_ = (undefined4)uVar2;
          uStack_30._4_4_ = (undefined4)(uVar2 >> 0x20);
          *(undefined4 *)puVar6 = (undefined4)local_38;
          *(undefined4 *)((longlong)puVar6 + 4) = local_38._4_4_;
          *(undefined4 *)(puVar6 + 1) = (undefined4)uStack_30;
          *(undefined4 *)((longlong)puVar6 + 0xc) = uStack_30._4_4_;
          local_38 = uVar1;
          uStack_30 = uVar2;
        }
        param_3 = param_3 + 3;
      }
      puVar6 = puVar6 + 3;
      goto LAB_1402772af;
    }
joined_r0x000140277305:
    while (puVar5 = puVar9, puVar7 = puVar8, puVar9 = puVar5, param_2 < puVar7) {
      puVar8 = puVar7 + -3;
      if (*puVar5 <= puVar7[-3]) {
        if (*puVar5 < puVar7[-3]) break;
        puVar9 = puVar5 + -3;
        if (puVar7 != puVar5) {
          local_28 = puVar5[-1];
          uVar1 = *puVar9;
          uVar2 = puVar5[-2];
          puVar5[-1] = puVar7[-1];
          uVar3 = puVar7[-2];
          *puVar9 = *puVar8;
          puVar5[-2] = uVar3;
          puVar7[-1] = local_28;
          local_38._0_4_ = (undefined4)uVar1;
          local_38._4_4_ = (undefined4)(uVar1 >> 0x20);
          uStack_30._0_4_ = (undefined4)uVar2;
          uStack_30._4_4_ = (undefined4)(uVar2 >> 0x20);
          *(undefined4 *)puVar8 = (undefined4)local_38;
          *(undefined4 *)((longlong)puVar7 + -0x14) = local_38._4_4_;
          *(undefined4 *)(puVar7 + -2) = (undefined4)uStack_30;
          *(undefined4 *)((longlong)puVar7 + -0xc) = uStack_30._4_4_;
          local_38 = uVar1;
          uStack_30 = uVar2;
        }
      }
    }
    if (puVar6 == param_4 && puVar7 == param_2) {
      *param_1 = puVar5;
      param_1[1] = param_3;
      if (ram0x000140613b10 != (local_20 ^ (ulonglong)auStack_58)) {
                    /* WARNING: Subroutine does not return */
        FUN_14044aba0(local_20 ^ (ulonglong)auStack_58);
      }
      return param_1;
    }
    if (puVar7 == param_2) {
      if (param_3 != puVar6) {
        uVar1 = puVar5[2];
        uVar2 = *puVar5;
        uVar3 = puVar5[1];
        puVar5[2] = param_3[2];
        uVar4 = param_3[1];
        *puVar5 = *param_3;
        puVar5[1] = uVar4;
        param_3[2] = uVar1;
        *param_3 = uVar2;
        param_3[1] = uVar3;
      }
      param_3 = param_3 + 3;
      local_28 = puVar5[2];
      uVar1 = *puVar5;
      uVar2 = puVar5[1];
      puVar5[2] = puVar6[2];
      uVar3 = puVar6[1];
      *puVar5 = *puVar6;
      puVar5[1] = uVar3;
      puVar6[2] = local_28;
      local_38._0_4_ = (undefined4)uVar1;
      local_38._4_4_ = (undefined4)(uVar1 >> 0x20);
      uStack_30._0_4_ = (undefined4)uVar2;
      uStack_30._4_4_ = (undefined4)(uVar2 >> 0x20);
      *(undefined4 *)puVar6 = (undefined4)local_38;
      *(undefined4 *)((longlong)puVar6 + 4) = local_38._4_4_;
      *(undefined4 *)(puVar6 + 1) = (undefined4)uStack_30;
      *(undefined4 *)((longlong)puVar6 + 0xc) = uStack_30._4_4_;
      puVar6 = puVar6 + 3;
      puVar9 = puVar5 + 3;
      local_38 = uVar1;
      uStack_30 = uVar2;
    }
    else {
      puVar8 = puVar7 + -3;
      if (puVar6 == param_4) {
        puVar9 = puVar5 + -3;
        if (puVar7 != puVar5) {
          uVar1 = puVar7[-1];
          uVar2 = *puVar8;
          uVar3 = puVar7[-2];
          puVar7[-1] = puVar5[-1];
          uVar4 = puVar5[-2];
          *puVar8 = *puVar9;
          puVar7[-2] = uVar4;
          puVar5[-1] = uVar1;
          *puVar9 = uVar2;
          puVar5[-2] = uVar3;
        }
        local_28 = puVar5[-1];
        uVar1 = *puVar9;
        uVar2 = puVar5[-2];
        puVar5[-1] = param_3[-1];
        uVar3 = param_3[-2];
        *puVar9 = param_3[-3];
        puVar5[-2] = uVar3;
        param_3[-1] = local_28;
        local_38._0_4_ = (undefined4)uVar1;
        local_38._4_4_ = (undefined4)(uVar1 >> 0x20);
        uStack_30._0_4_ = (undefined4)uVar2;
        uStack_30._4_4_ = (undefined4)(uVar2 >> 0x20);
        *(undefined4 *)(param_3 + -3) = (undefined4)local_38;
        *(undefined4 *)((longlong)param_3 + -0x14) = local_38._4_4_;
        *(undefined4 *)(param_3 + -2) = (undefined4)uStack_30;
        *(undefined4 *)((longlong)param_3 + -0xc) = uStack_30._4_4_;
        param_3 = param_3 + -3;
        puVar7 = puVar8;
        local_38 = uVar1;
        uStack_30 = uVar2;
      }
      else {
        local_28 = puVar6[2];
        uVar1 = *puVar6;
        uVar2 = puVar6[1];
        puVar6[2] = puVar7[-1];
        uVar3 = puVar7[-2];
        *puVar6 = *puVar8;
        puVar6[1] = uVar3;
        puVar7[-1] = local_28;
        local_38._0_4_ = (undefined4)uVar1;
        local_38._4_4_ = (undefined4)(uVar1 >> 0x20);
        uStack_30._0_4_ = (undefined4)uVar2;
        uStack_30._4_4_ = (undefined4)(uVar2 >> 0x20);
        *(undefined4 *)puVar8 = (undefined4)local_38;
        *(undefined4 *)((longlong)puVar7 + -0x14) = local_38._4_4_;
        *(undefined4 *)(puVar7 + -2) = (undefined4)uStack_30;
        *(undefined4 *)((longlong)puVar7 + -0xc) = uStack_30._4_4_;
        puVar6 = puVar6 + 3;
        puVar7 = puVar8;
        local_38 = uVar1;
        uStack_30 = uVar2;
      }
    }
  } while( true );
}

