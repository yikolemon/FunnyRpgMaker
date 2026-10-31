/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 100d9fe5 */

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100d9fe5(void)

{
  undefined8 **ppuVar1;
  char cVar2;
  undefined4 uVar3;
  char *pcVar4;
  uint uVar5;
  int *piVar6;
  undefined8 ***pppuVar7;
  int iVar8;
  undefined8 **ppuVar9;
  bool bVar10;
  undefined1 auStack_100 [4];
  undefined8 ***local_fc;
  undefined8 **local_f8;
  undefined8 **local_f4;
  undefined8 ***local_f0;
  int local_ec;
  undefined8 ****local_e8;
  int local_e4;
  undefined4 *local_e0;
  undefined4 local_dc;
  undefined8 ****local_d8;
  int iStack_d4;
  undefined4 local_d0;
  undefined4 local_cc;
  undefined8 ***local_c8;
  undefined4 local_c4;
  undefined4 *local_c0;
  uint local_b4;
  char *local_b0;
  char *local_ac;
  undefined8 local_a8;
  undefined8 *puStack_a0;
  undefined8 *puStack_9c;
  undefined4 local_98;
  undefined4 uStack_94;
  undefined4 local_88;
  undefined4 uStack_84;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  undefined8 local_78;
  undefined4 local_70;
  undefined4 local_6c;
  undefined8 ****local_68;
  undefined4 local_64;
  undefined4 local_60;
  undefined4 local_5c;
  char local_58 [16];
  undefined1 local_48 [24];
  char *local_30;
  undefined4 uStack_2c;
  undefined1 *local_28;
  undefined1 *local_24;
  void *local_20;
  undefined1 *local_1c;
  undefined4 local_18;
  
  local_28 = &stack0xfffffffc;
  local_24 = auStack_100;
  local_18 = 0xffffffff;
  local_1c = &LAB_100ddcb0;
  local_20 = ExceptionList;
  ExceptionList = &local_20;
  FUN_10001f66("gold:$gameParty._gold,");
  local_18 = 0;
  if (DAT_1039ce30 == 0) {
    FUN_1000347e();
  }
  if (DAT_1039ce80 == 0) {
    FUN_1000347e();
  }
  if (DAT_1039ced0 == 0) {
    FUN_1000347e();
  }
  if (DAT_1039cf20 == 0) {
    FUN_1000347e();
  }
  if (DAT_1039cf70 == 0) {
    FUN_1000347e();
  }
  FUN_1000347e();
  local_30 = "({{{}}})";
  uStack_2c = 8;
  FUN_100721d6(&local_a8,0x810347295,local_48);
  local_18 = 0x14;
  FUN_100145e4();
  local_18 = 0xffffffff;
  FUN_10001fee();
  local_18 = 1;
  if (local_58[0] == '\x01') {
    local_ac = local_58;
    local_e8 = (undefined8 ****)&DAT_1033a2db;
    local_e4 = 4;
    FUN_100dafc2(&local_e8);
    local_18 = 0x13;
    local_c4 = 0;
    local_c8 = (undefined8 ***)0x0;
    FUN_100d8b63();
    _DAT_1039cfcc = local_c4;
    _DAT_1039cfc8 = local_c8;
    local_18 = 0xffffffff;
    FUN_10013efc();
    local_18 = 1;
    FUN_100db0fa();
    FUN_100db0fa();
    FUN_100db0fa();
    FUN_100446d6();
    local_18 = 0xb;
    uVar3 = FUN_10013d2e("dataSwitches");
    FUN_10013db4(uVar3);
    local_18 = 0xc;
    if ((char)local_c8 == '\x02') {
      iStack_d4 = 0;
      local_d8 = (undefined8 ****)0x0;
      local_e8 = &local_c8;
      local_e4 = 0;
      local_dc = 0x80000000;
      local_e0 = (undefined4 *)*local_c0;
      local_68 = &local_c8;
      local_64 = 0;
      local_5c = 0x80000000;
      local_60 = local_c0[1];
      while (cVar2 = FUN_10051c02(&local_68), cVar2 == '\0') {
        pcVar4 = (char *)FUN_100dc366();
        if (*pcVar4 == '\x03') {
          local_a8 = CONCAT44(iStack_d4,local_d8);
          local_f8 = (undefined8 **)0x0;
          local_f4 = (undefined8 **)0x0;
          FUN_100dc4d4();
          FUN_101575f2();
          local_88 = 0;
          uStack_84 = 0;
          uStack_80 = 0;
          uStack_7c = 0;
          local_78 = 0xf00000000;
          local_6c = 0;
          local_70 = 0;
          local_18 = 0xe;
          FUN_100dbc58(&local_f0,&local_d8,&local_a8);
          local_18 = 0xffffffff;
          FUN_10001fee();
          FUN_10001fee();
        }
        bVar10 = (undefined8 ****)0xfffffffe < local_d8;
        local_d8 = (undefined8 ****)((int)local_d8 + 1);
        iStack_d4 = iStack_d4 + (uint)bVar10;
        local_18 = 0xc;
        FUN_10051ba0();
      }
    }
    uVar3 = FUN_10013d2e("switches");
    FUN_10013db4(uVar3);
    local_18 = 0xd;
    if ((char)local_a8 == '\x02') {
      local_f4 = (undefined8 **)0x0;
      local_f8 = (undefined8 **)0x0;
      local_e8 = (undefined8 ****)&local_a8;
      local_e4 = 0;
      local_dc = 0x80000000;
      local_e0 = *(undefined4 **)puStack_a0;
      local_68 = (undefined8 ****)&local_a8;
      local_64 = 0;
      local_5c = 0x80000000;
      local_60 = *(undefined4 *)((int)puStack_a0 + 4);
      while (cVar2 = FUN_10051c02(&local_68), cVar2 == '\0') {
        local_b0 = (char *)FUN_100dc366();
        uVar5 = FUN_100d7b05(&local_f8);
        local_fc = DAT_1039cf24;
        pppuVar7 = (undefined8 ***)DAT_1039cf24[(uVar5 & _DAT_1039cf30) * 2 + 1];
        if (pppuVar7 != DAT_1039cf1c) {
          local_b4 = (uint)pppuVar7[2] ^ (uint)local_f8;
          if (pppuVar7[3] != local_f4 || local_b4 != 0) {
            local_fc = (undefined8 ***)DAT_1039cf24[(uVar5 & _DAT_1039cf30) * 2];
            do {
              if (pppuVar7 == local_fc) goto LAB_100da52b;
              pppuVar7 = (undefined8 ***)pppuVar7[1];
            } while (pppuVar7[2] != local_f8 || pppuVar7[3] != local_f4);
          }
          local_fc = (undefined8 ***)0x0;
          local_18 = 0xd;
          if (*local_b0 == '\x04') {
            local_d8 = (undefined8 ****)((uint)local_d8 & 0xffffff00);
            FUN_100dc592();
            local_fc = (undefined8 ***)((uint)local_d8 & 0xff);
          }
          FUN_100d773c();
          local_d8[0x12] = local_fc;
          local_d8[0x13] = (undefined8 ***)0x0;
        }
LAB_100da52b:
        bVar10 = (undefined8 **)0xfffffffe < local_f8;
        local_f8 = (undefined8 **)((int)local_f8 + 1);
        local_f4 = (undefined8 **)((int)local_f4 + (uint)bVar10);
        local_18 = 0xd;
        FUN_10051ba0();
      }
    }
    piVar6 = (int *)*DAT_1039cf3c;
    if (piVar6 != DAT_1039cf3c) {
      do {
        uVar3 = FUN_100d7b05(piVar6 + 2);
        FUN_100d78b0(&local_e8,piVar6 + 2,uVar3);
        if (local_e4 == 0) {
          piVar6 = (int *)FUN_100dc46e(piVar6);
        }
        else {
          piVar6 = (int *)*piVar6;
        }
      } while (piVar6 != DAT_1039cf3c);
    }
    DAT_1039cf64 = 1;
    local_18 = 0xffffffff;
    FUN_10013efc();
    FUN_10013efc();
    FUN_1022c200(&DAT_10388d74);
    local_18 = 1;
    FUN_100446d6();
    local_18 = 2;
    uVar3 = FUN_10013d2e("gameVariables");
    FUN_10013db4(uVar3);
    local_18 = 3;
    if ((char)local_c8 == '\x02') {
      iStack_d4 = 0;
      local_d8 = (undefined8 ****)0x0;
      local_e8 = &local_c8;
      local_e4 = 0;
      local_dc = 0x80000000;
      local_e0 = (undefined4 *)*local_c0;
      local_68 = &local_c8;
      local_64 = 0;
      local_5c = 0x80000000;
      local_60 = local_c0[1];
      while (cVar2 = FUN_10051c02(&local_68), cVar2 == '\0') {
        pcVar4 = (char *)FUN_100dc366();
        if (*pcVar4 == '\x03') {
          local_a8 = CONCAT44(iStack_d4,local_d8);
          local_f8 = (undefined8 **)0x0;
          local_f4 = (undefined8 **)0x0;
          FUN_100dc4d4();
          FUN_101575f2();
          local_88 = 0;
          uStack_84 = 0;
          uStack_80 = 0;
          uStack_7c = 0;
          local_78 = 0xf00000000;
          local_18 = 6;
          FUN_100dc642(&local_f0,&local_d8,&local_a8);
          local_18 = 0xffffffff;
          FUN_10001fee();
          FUN_10001fee();
        }
        bVar10 = (undefined8 ****)0xfffffffe < local_d8;
        local_d8 = (undefined8 ****)((int)local_d8 + 1);
        iStack_d4 = iStack_d4 + (uint)bVar10;
        local_18 = 3;
        FUN_10051ba0();
      }
    }
    uVar3 = FUN_10013d2e("variables");
    FUN_10013db4(uVar3);
    local_18 = 4;
    if ((char)local_e8 == '\x02') {
      local_ec = 0;
      local_f0 = (undefined8 ***)0x0;
      local_68 = (undefined8 ****)&local_e8;
      local_64 = 0;
      local_5c = 0x80000000;
      local_60 = *local_e0;
      local_d8 = (undefined8 ****)&local_e8;
      iStack_d4 = 0;
      local_cc = 0x80000000;
      local_d0 = local_e0[1];
      while (cVar2 = FUN_10051c02(&local_d8), cVar2 == '\0') {
        local_b0 = (char *)FUN_100dc366();
        uVar5 = FUN_100d7b05(&local_f0);
        local_b4 = DAT_1039cf74;
        iVar8 = *(int *)(DAT_1039cf74 + 4 + (uVar5 & _DAT_1039cf80) * 8);
        if (iVar8 != DAT_1039cf6c) {
          local_fc = local_f0;
          if (*(int *)(iVar8 + 0xc) != local_ec || *(undefined8 ****)(iVar8 + 8) != local_f0) {
            do {
              if (iVar8 == *(int *)(DAT_1039cf74 + (uVar5 & _DAT_1039cf80) * 8)) goto LAB_100da90d;
              iVar8 = *(int *)(iVar8 + 4);
            } while (*(undefined8 ****)(iVar8 + 8) != local_f0 || *(int *)(iVar8 + 0xc) != local_ec)
            ;
          }
          local_18 = 4;
          FUN_100141c8(&local_a8,(undefined4)DAT_1028f540,DAT_1028f540._4_4_,0,0);
          local_18 = 5;
          FUN_100d83bc();
          ppuVar1 = local_f8;
          ppuVar9 = local_f8 + 0xc;
          if (ppuVar9 != (undefined8 **)&local_a8) {
            FUN_10004e60();
            *(ulonglong *)(ppuVar1 + 0x10) = CONCAT44(uStack_94,local_98);
            *ppuVar9 = (undefined8 *)(undefined8 ***)local_a8;
            ppuVar1[0xd] = local_a8._4_4_;
            ppuVar1[0xe] = puStack_a0;
            ppuVar1[0xf] = puStack_9c;
            local_98 = 0;
            uStack_94 = 0xf;
            local_a8 = local_a8 & 0xffffffffffffff00;
          }
          local_18 = 0xffffffff;
          FUN_10001fee();
        }
LAB_100da90d:
        bVar10 = (undefined8 ***)0xfffffffe < local_f0;
        local_f0 = (undefined8 ***)((int)local_f0 + 1);
        local_ec = local_ec + (uint)bVar10;
        local_18 = 4;
        FUN_10051ba0();
      }
    }
    piVar6 = (int *)*DAT_1039cf8c;
    if (piVar6 != DAT_1039cf8c) {
      do {
        uVar3 = FUN_100d7b05(piVar6 + 2);
        FUN_100d78b0(&local_a8,piVar6 + 2,uVar3);
        if (local_a8._4_4_ == (undefined8 *)0x0) {
          piVar6 = (int *)FUN_100dc46e(piVar6);
        }
        else {
          piVar6 = (int *)*piVar6;
        }
      } while (piVar6 != DAT_1039cf8c);
    }
    DAT_1039cfb4 = 1;
    local_18 = 0xffffffff;
    FUN_10013efc();
    FUN_10013efc();
    FUN_1022c200(&DAT_10388da4);
  }
  local_18 = 0xffffffff;
  FUN_10013efc();
  FUN_10001fee();
  ExceptionList = local_20;
  return;
}

