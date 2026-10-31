/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 10062bb6 */

undefined4 * FUN_10062bb6(undefined4 *param_1,undefined4 *param_2)

{
  uint *puVar1;
  uint uVar2;
  uint uVar3;
  undefined4 *puVar4;
  undefined4 ****ppppuVar5;
  int iVar6;
  int iVar7;
  uint *puVar8;
  int iVar9;
  int iVar10;
  int local_b0 [4];
  undefined4 ***local_a0;
  undefined4 local_9c;
  undefined4 uStack_98;
  undefined4 uStack_94;
  uint *puStack_90;
  uint local_8c;
  undefined4 ***local_88 [4];
  undefined4 local_78;
  uint local_74;
  uint local_70;
  uint *puStack_6c;
  uint local_68;
  int local_58;
  uint *local_54;
  uint *local_50;
  uint *local_4c;
  uint *local_48;
  uint *local_44;
  uint *local_40;
  uint *local_3c;
  uint *local_38;
  uint *local_34;
  uint *local_30;
  int *local_2c;
  uint local_28;
  uint *local_24;
  undefined1 *local_20;
  void *local_1c;
  undefined1 *local_18;
  undefined4 local_14;
  
  local_20 = (undefined1 *)local_b0;
  local_14 = 0xffffffff;
  local_18 = &LAB_100c2080;
  local_1c = ExceptionList;
  uVar3 = param_2[4];
  ExceptionList = &local_1c;
  if (uVar3 == 0) {
    FUN_10063788(param_2);
    ExceptionList = local_1c;
  }
  else {
    local_9c = 0;
    uStack_98 = 0;
    uStack_94 = 0;
    puStack_90 = (uint *)0x0;
    local_8c = 3;
    local_a0 = (undefined4 ****)0x0;
    local_14 = 0;
    local_20 = (undefined1 *)local_b0;
    if (3 < uVar3) {
      local_20 = (undefined1 *)local_b0;
      FUN_10064c62(uVar3,(undefined1)local_70);
    }
    puStack_90 = (uint *)0x0;
    local_58 = 0;
    local_54 = (uint *)0x0;
    local_50 = (uint *)0x0;
    local_14 = 1;
    FUN_100647d6(param_2[4]);
    for (local_70 = 0; local_70 < (uint)param_2[4]; local_70 = local_70 + 1) {
      puVar4 = param_2;
      if (3 < (uint)param_2[5]) {
        puVar4 = (undefined4 *)*param_2;
      }
      iVar9 = puVar4[local_70];
      if ((iVar9 != 10) && (iVar9 != 0xd)) {
        local_14 = 1;
        FUN_1006465a(iVar9);
        if (local_54 == local_50) {
          FUN_10051662(local_54,&local_70);
        }
        else {
          *local_54 = local_70;
          local_54 = local_54 + 1;
        }
      }
    }
    if (puStack_90 == (uint *)0x0) {
      local_14 = 1;
      FUN_10063788(param_2);
    }
    else {
      local_48 = (uint *)0x0;
      local_44 = (uint *)0x0;
      local_24 = (uint *)0x0;
      local_40 = (uint *)0x0;
      local_14 = 2;
      local_28 = 0;
      while (local_24 < puStack_90) {
        ppppuVar5 = &local_a0;
        if (3 < local_8c) {
          ppppuVar5 = (undefined4 ****)local_a0;
        }
        local_88[0] = ppppuVar5[(int)local_24];
        uVar3 = 0;
        if (local_28 != 0) {
          iVar9 = *local_2c;
          uVar3 = local_28;
          do {
            iVar10 = uVar3 * 0x30;
            local_28 = uVar3;
            uVar2 = FUN_100616f3(local_88);
            uVar2 = uVar2 & *(uint *)(iVar9 + 0x18 + iVar10);
            iVar6 = *(int *)(iVar9 + 0xc + iVar10);
            iVar7 = *(int *)(iVar6 + 4 + uVar2 * 8);
            if (iVar7 != *(int *)(iVar9 + 4 + iVar10)) {
              uVar3 = local_28;
              if ((undefined4 ****)local_88[0] == *(undefined4 *****)(iVar7 + 8))
              goto code_r0x10062d90;
              while (iVar7 != *(int *)(iVar6 + uVar2 * 8)) {
                iVar7 = *(int *)(iVar7 + 4);
                if ((undefined4 ****)local_88[0] == *(undefined4 *****)(iVar7 + 8))
                goto code_r0x10062d90;
              }
            }
            iVar9 = *local_2c;
            uVar3 = *(uint *)(iVar9 + 0x20 + iVar10);
          } while (uVar3 != 0);
          uVar3 = 0;
        }
code_r0x10062d90:
        iVar9 = *local_2c;
        iVar10 = uVar3 * 0x30;
        uVar3 = FUN_100616f3(local_88);
        uVar3 = uVar3 & *(uint *)(iVar9 + 0x18 + iVar10);
        iVar6 = *(int *)(iVar9 + 4 + iVar10);
        iVar9 = *(int *)(iVar9 + 0xc + iVar10);
        iVar7 = *(int *)(iVar9 + 4 + uVar3 * 8);
        if (iVar7 == iVar6) {
LAB_10062ddc:
          iVar7 = 0;
        }
        else if ((undefined4 ****)local_88[0] != *(undefined4 *****)(iVar7 + 8)) {
          do {
            if (iVar7 == *(int *)(iVar9 + uVar3 * 8)) goto LAB_10062ddc;
            iVar7 = *(int *)(iVar7 + 4);
          } while ((undefined4 ****)local_88[0] != *(undefined4 *****)(iVar7 + 8));
        }
        if (iVar7 != 0) {
          iVar6 = iVar7;
        }
        iVar9 = *local_2c;
        if (iVar6 == *(int *)(iVar9 + 4 + iVar10)) {
          local_28 = 0;
        }
        else {
          local_28 = *(uint *)(iVar6 + 0xc);
        }
        puVar8 = *(uint **)(iVar9 + 0x24 + local_28 * 0x30);
        local_4c = *(uint **)(iVar9 + 0x28 + local_28 * 0x30);
        local_24 = (uint *)((int)local_24 + 1);
        while (puVar8 != local_4c) {
          local_30 = puVar8;
          local_68 = *puVar8;
          local_70 = (int)local_24 - *(int *)(local_2c[3] + local_68 * 0x1c);
          puStack_6c = local_24;
          if (local_44 == local_40) {
            local_14 = 2;
            FUN_10064e1a(local_44,&local_70);
          }
          else {
            local_44[2] = local_68;
            *(ulonglong *)local_44 = CONCAT44(local_24,local_70);
            local_44 = local_44 + 3;
          }
          puVar8 = local_30 + 1;
        }
      }
      local_14 = 2;
      if (local_48 == local_44) {
        FUN_10063788(param_2);
      }
      else {
        FUN_10064f94(local_48,local_44,((int)local_44 - (int)local_48 >> 2) * -0x55555555,
                     (uint)local_88[0] & 0xff,local_70 & 0xff);
        local_88[0] = (undefined4 ***)((uint)local_88[0] & 0xffffff00);
        FUN_10064826(puStack_90,local_88,&local_70);
        local_3c = (uint *)0x0;
        local_38 = (uint *)0x0;
        local_34 = (uint *)0x0;
        local_30 = local_44;
        for (puVar8 = local_48; puVar8 != local_30; puVar8 = puVar8 + 3) {
          uVar3 = *puVar8;
          if (uVar3 < puVar8[1]) {
            do {
              if ((*(uint *)(local_b0[0] + (uVar3 >> 5) * 4) >> (uVar3 & 0x1f) & 1) != 0)
              goto LAB_10062f96;
              uVar3 = uVar3 + 1;
            } while (puVar8[1] != uVar3);
          }
          if (local_38 == local_34) {
            local_14 = 4;
            local_24 = puVar8;
            FUN_10064e1a(local_38,puVar8);
            puVar8 = local_24;
          }
          else {
            local_38[2] = puVar8[2];
            *(undefined8 *)local_38 = *(undefined8 *)puVar8;
            local_38 = local_38 + 3;
          }
          uVar3 = *puVar8;
          if (uVar3 < puVar8[1]) {
            do {
              puVar1 = (uint *)(local_b0[0] + (uVar3 >> 5) * 4);
              *puVar1 = *puVar1 | 1 << ((byte)uVar3 & 0x1f);
              uVar3 = uVar3 + 1;
            } while (uVar3 < puVar8[1]);
          }
LAB_10062f96:
        }
        local_14 = 4;
        FUN_10065c7c(local_3c,local_38,((int)local_38 - (int)local_3c >> 2) * -0x55555555,
                     (uint)local_88[0] & 0xff,local_70 & 0xff);
        param_1[1] = 0;
        param_1[2] = 0;
        param_1[3] = 0;
        param_1[4] = 0;
        param_1[5] = 3;
        *param_1 = 0;
        local_4c = local_38;
        uVar3 = 0;
        puVar8 = local_3c;
        while (puVar8 != local_4c) {
          uVar2 = *(uint *)(local_58 + *puVar8 * 4);
          local_30 = *(uint **)(local_58 + -4 + puVar8[1] * 4);
          local_14 = 5;
          local_24 = puVar8;
          if (uVar3 <= uVar2 && uVar2 - uVar3 != 0) {
            puVar4 = param_2;
            if (3 < (uint)param_2[5]) {
              puVar4 = (undefined4 *)*param_2;
            }
            local_28 = uVar2;
            FUN_10063a48(puVar4 + uVar3,uVar2 - uVar3);
            uVar2 = local_28;
          }
          puVar4 = param_2;
          if (3 < (uint)param_2[5]) {
            puVar4 = (undefined4 *)*param_2;
          }
          FUN_100648ae(puVar4 + uVar2,puVar4 + (int)local_30 + 1,local_88);
          local_14 = 6;
          FUN_10064946(local_88,&local_70,local_2c[3] + local_24[2] * 0x1c + 4);
          local_14 = 7;
          ppppuVar5 = local_88;
          if (3 < local_74) {
            ppppuVar5 = (undefined4 ****)local_88[0];
          }
          FUN_10063a48(ppppuVar5,local_78);
          local_14 = 0xffffffff;
          FUN_10061fce();
          uVar3 = (int)local_30 + 1;
          FUN_10061fce();
          puVar8 = local_24 + 3;
        }
        iVar9 = param_2[4] - uVar3;
        if (uVar3 <= (uint)param_2[4] && iVar9 != 0) {
          if (3 < (uint)param_2[5]) {
            param_2 = (undefined4 *)*param_2;
          }
          local_14 = 5;
          FUN_10063a48(param_2 + uVar3,iVar9);
        }
        local_14 = 0xffffffff;
        FUN_10004eae();
        FUN_1001cf94();
      }
      local_14 = 0xffffffff;
      FUN_10004eae();
    }
    local_14 = 0xffffffff;
    FUN_10004eae();
    FUN_10061fce();
    ExceptionList = local_1c;
  }
  return param_1;
}

