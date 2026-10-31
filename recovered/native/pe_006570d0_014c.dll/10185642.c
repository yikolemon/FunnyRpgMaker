/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 10185642 */

void __fastcall FUN_10185642(undefined4 *param_1,undefined4 *param_2,uint param_3)

{
  int *piVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  uint uVar5;
  undefined4 *puVar6;
  undefined4 *puVar7;
  int iVar8;
  int *unaff_FS_OFFSET;
  bool bVar9;
  int local_54;
  undefined4 *local_50;
  undefined4 *local_4c;
  uint local_48;
  undefined4 local_44;
  undefined8 uStack_40;
  undefined4 uStack_38;
  int local_34;
  undefined4 *local_30;
  undefined4 *local_2c;
  undefined4 *local_28;
  undefined4 *local_24;
  undefined1 *local_20;
  int local_1c;
  undefined1 *local_18;
  undefined4 local_14;
  
  local_20 = (undefined1 *)&local_54;
  local_14 = 0xffffffff;
  local_18 = &LAB_10186010;
  local_1c = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = (int)&local_1c;
  uVar5 = (int)param_2 - (int)param_1;
  local_28 = param_2;
  local_24 = param_1;
  if (0x293 < (int)uVar5) {
    local_48 = param_3;
    local_20 = (undefined1 *)&local_54;
    do {
      local_4c = local_28;
      local_30 = param_1;
      if ((int)local_48 < 1) {
        local_48 = uVar5 / 0x14;
        local_24 = (undefined4 *)(uVar5 / 0x28 + 1);
        param_1 = param_1 + (uVar5 / 0x28) * 5 + -1;
        local_4c = (undefined4 *)uVar5;
        do {
          local_44 = param_1[-4];
          uStack_38 = param_1[-1];
          param_1[-1] = 0;
          uStack_40 = *(undefined8 *)(param_1 + -3);
          param_1[-2] = 0;
          param_1[-3] = 0;
          local_34 = *param_1;
          local_14 = 5;
          local_2c = param_1;
          FUN_10185c5e(local_48,&local_44);
          puVar7 = local_24;
          puVar3 = local_30;
          local_14 = 0xffffffff;
          FUN_10004eae();
          local_24 = (undefined4 *)((int)puVar7 - 1);
          param_1 = local_2c + -5;
        } while (1 < local_24);
        local_24 = puVar3 + 1;
        iVar8 = (int)local_28 - (int)puVar3;
        puVar3 = local_28 + -1;
        puVar7 = local_4c;
        do {
          puVar4 = local_30;
          if (0x27 < puVar7) {
            local_44 = puVar3[-4];
            uStack_38 = puVar3[-1];
            puVar3[-1] = 0;
            uStack_40 = *(undefined8 *)(puVar3 + -3);
            puVar3[-2] = 0;
            puVar3[-3] = 0;
            local_34 = *puVar3;
            local_14 = 8;
            puVar3[-4] = *local_30;
            FUN_1008a8bc(local_24);
            *puVar3 = puVar4[4];
            FUN_10185c5e((iVar8 + -0x14 >> 2) * -0x33333333,&local_44);
            local_14 = 0xffffffff;
            FUN_10004eae();
          }
          local_28 = local_28 + -5;
          puVar7 = (undefined4 *)((int)local_28 - (int)local_30);
          iVar8 = iVar8 + -0x14;
          puVar3 = puVar3 + -5;
        } while (0x14 < iVar8);
        goto code_r0x10185b98;
      }
      local_24 = (undefined4 *)((uVar5 / 0x28) * 5);
      puVar7 = param_1 + (uVar5 / 0x28) * 5;
      puVar3 = local_28 + -5;
      if ((int)puVar3 - (int)param_1 < 0x321) {
        FUN_10185d98(puVar3);
      }
      else {
        uVar5 = ((uint)((int)puVar3 - (int)param_1) >> 2) * -0x33333333 + 1 >> 3;
        local_54 = uVar5 * 2;
        local_2c = param_1 + uVar5 * 5;
        local_50 = puVar3;
        FUN_10185d98(param_1 + uVar5 * 10);
        FUN_10185d98(puVar7 + uVar5 * 5);
        puVar3 = local_50 + uVar5 * -5;
        FUN_10185d98(local_50);
        param_1 = local_30;
        FUN_10185d98(puVar3);
      }
      do {
        puVar3 = puVar7;
        if (puVar3 <= param_1) break;
        puVar7 = puVar3 + -5;
      } while (puVar3[4] == puVar3[-1]);
      puVar7 = param_1 + (int)local_24;
      do {
        puVar4 = puVar7 + 5;
        local_2c = puVar3;
        local_24 = puVar4;
        if (local_28 <= puVar4) break;
        piVar1 = puVar7 + 9;
        puVar7 = puVar4;
      } while (puVar3[4] == *piVar1);
LAB_10185791:
      puVar7 = local_24;
      if (puVar4 < local_28) {
        if ((int)puVar4[4] <= (int)puVar3[4]) {
          if ((int)puVar4[4] < (int)puVar3[4]) goto LAB_101857c8;
          if (puVar4 == local_24) {
            local_24 = local_24 + 5;
          }
          else {
            FUN_10185dde(local_24,puVar4);
            local_24 = puVar7 + 5;
          }
        }
        puVar4 = puVar4 + 5;
        goto LAB_10185791;
      }
LAB_101857c8:
      puVar7 = local_2c;
      if (local_30 < local_2c) {
        do {
          puVar6 = puVar7 + -5;
          if ((int)puVar3[4] <= (int)puVar7[-1]) {
            if ((int)puVar3[4] < (int)puVar7[-1]) break;
            puVar2 = puVar3 + -5;
            bVar9 = puVar7 != puVar3;
            puVar3 = puVar2;
            if (bVar9) {
              FUN_10185dde(puVar2,puVar6);
            }
          }
          puVar7 = puVar6;
        } while (local_30 < puVar6);
      }
      puVar6 = local_24;
      param_1 = local_30;
      if ((puVar4 != local_28) || (puVar7 != local_30)) {
        if (puVar7 == local_30) {
          if (local_24 != puVar4) {
            FUN_10185dde(puVar3,local_24);
          }
          local_24 = puVar6 + 5;
          FUN_10185dde(puVar3,puVar4);
          puVar3 = puVar3 + 5;
          puVar4 = puVar4 + 5;
          local_2c = local_30;
        }
        else {
          local_2c = puVar7 + -5;
          if (puVar4 == local_28) {
            puVar6 = puVar3 + -5;
            if (puVar7 != puVar3) {
              FUN_10185dde(local_2c,puVar6);
            }
            local_24 = local_24 + -5;
            FUN_10185dde(puVar6,local_24);
            puVar3 = puVar6;
          }
          else {
            FUN_10185dde(puVar4,local_2c);
            puVar4 = puVar4 + 5;
          }
        }
        goto LAB_10185791;
      }
      local_48 = (local_48 >> 2) + (local_48 >> 1);
      local_14 = 0xffffffff;
      local_2c = puVar3;
      if ((int)puVar3 - (int)local_30 < (int)local_4c - (int)local_24) {
        FUN_10185642(local_48);
        param_1 = puVar6;
      }
      else {
        FUN_10185642(local_48);
        local_24 = param_1;
        local_28 = local_2c;
      }
      uVar5 = (int)local_28 - (int)param_1;
    } while (0x293 < (int)uVar5);
  }
  if ((local_24 != local_28) && (puVar3 = local_24 + 5, puVar3 != local_28)) {
    local_2c = (undefined4 *)0xffffffec;
    local_30 = local_24;
    do {
      local_44 = local_30[5];
      uStack_40 = *(undefined8 *)(local_30 + 6);
      uStack_38 = local_30[8];
      local_30[8] = 0;
      local_30[7] = 0;
      local_30[6] = 0;
      local_34 = local_30[9];
      local_14 = 2;
      puVar7 = local_2c;
      local_30 = puVar3;
      do {
        puVar4 = puVar3;
        if ((int)puVar3[-1] <= local_34) break;
        *puVar3 = puVar3[-5];
        FUN_10004eae();
        *(undefined8 *)(puVar3 + 1) = *(undefined8 *)(puVar3 + -4);
        puVar3[3] = puVar3[-2];
        puVar3[-4] = 0;
        puVar3[-3] = 0;
        puVar3[-2] = 0;
        puVar3[4] = puVar3[-1];
        puVar7 = (undefined4 *)((int)puVar7 + 0x14);
        puVar4 = local_24;
        puVar3 = puVar3 + -5;
      } while (puVar7 != (undefined4 *)0x0);
      *puVar4 = local_44;
      if (puVar4 != &local_44) {
        FUN_10004eae();
        puVar4[1] = (undefined4)uStack_40;
        puVar4[2] = uStack_40._4_4_;
        puVar4[3] = uStack_38;
        uStack_40 = 0;
        uStack_38 = 0;
      }
      puVar4[4] = local_34;
      local_14 = 0xffffffff;
      FUN_10004eae();
      puVar3 = local_30 + 5;
      local_2c = (undefined4 *)((int)local_2c + -0x14);
    } while (puVar3 != local_28);
  }
code_r0x10185b98:
  *unaff_FS_OFFSET = local_1c;
  return;
}

