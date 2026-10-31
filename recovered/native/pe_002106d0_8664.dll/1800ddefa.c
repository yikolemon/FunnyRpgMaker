/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 1800ddefa */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1800ddefa(void)

{
  char cVar1;
  undefined8 uVar2;
  char *pcVar3;
  ulonglong uVar4;
  longlong lVar5;
  longlong *plVar6;
  longlong lVar7;
  undefined8 *puVar8;
  char *local_170;
  undefined8 local_168;
  longlong *local_160;
  undefined8 local_158;
  undefined8 uStack_150;
  undefined8 local_148;
  undefined1 local_140 [32];
  longlong *local_120;
  longlong local_118;
  undefined8 local_110;
  undefined8 local_108;
  undefined8 local_f8;
  undefined8 uStack_f0;
  undefined8 local_e8;
  undefined8 local_e0;
  undefined8 local_d8;
  char local_d0 [16];
  char *local_c0;
  undefined8 local_b8;
  undefined8 uStack_b0;
  undefined8 local_a8;
  undefined8 uStack_a0;
  longlong local_98;
  undefined8 *puStack_90;
  longlong local_88;
  undefined8 *local_80;
  longlong local_78;
  undefined8 *puStack_70;
  longlong *local_68;
  undefined8 local_60;
  
  local_60 = 0xfffffffffffffffe;
  FUN_180001e92(local_140,"gold:$gameParty._gold,");
  if (DAT_1804180d8 == 0) {
    FUN_180003300(local_140,"dataItems:$dataItems,",0x15);
  }
  if (DAT_180418178 == 0) {
    FUN_180003300(local_140,"dataWeapons:$dataWeapons,",0x19);
  }
  if (DAT_180418218 == 0) {
    FUN_180003300(local_140,"dataArmors:$dataArmors,",0x17);
  }
  if (DAT_1804182b8 == 0) {
    FUN_180003300(local_140,"dataSwitches:$dataSystem.switches,",0x22);
  }
  if (DAT_180418358 == 0) {
    FUN_180003300(local_140,"gameVariables:$dataSystem.variables,",0x24);
  }
  FUN_180003300(local_140,
                "items:$gameParty._items,weapons:$gameParty._weapons,armors:$gameParty._armors,switches:$gameSwitches._data,variables:$gameVariables._data"
                ,0x89);
  local_170 = "({{{}}})";
  local_168 = 8;
  FUN_1800729a4(&local_120,&local_170,local_140);
  FUN_180013de7(local_d0,&local_120);
  FUN_180001ef2(&local_120);
  if (local_d0[0] == '\x01') {
    local_160 = (longlong *)&DAT_18036a405;
    local_158 = 4;
    local_c0 = local_d0;
    FUN_1800df105(&local_120,local_d0);
    local_b8 = (longlong *)0x0;
    FUN_1800dcb19(&local_120);
    _DAT_180418400 = local_b8;
    FUN_1800137c6(&local_120);
    FUN_1800df216(&local_c0,&DAT_1804180c8,"dataItems","items");
    FUN_1800df216(&local_c0,&DAT_180418168,"dataWeapons","weapons");
    FUN_1800df216(&local_c0,&DAT_180418208,"dataArmors","armors");
    FUN_180044980(&DAT_1804026d0);
    uVar2 = FUN_1800136a6(local_d0,"dataSwitches");
    FUN_1800136fa(&local_98,uVar2);
    if ((char)local_98 == '\x02') {
      local_68 = (longlong *)0x0;
      local_158 = 0;
      local_148 = 0x8000000000000000;
      uStack_150 = *puStack_90;
      uStack_b0 = 0;
      uStack_a0 = 0x8000000000000000;
      local_a8 = puStack_90[1];
      local_160 = &local_98;
      local_b8 = &local_98;
      while( true ) {
        cVar1 = FUN_18005324c(&local_160,&local_b8);
        if (cVar1 != '\0') break;
        pcVar3 = (char *)FUN_1800e04aa(&local_160);
        if (*pcVar3 == '\x03') {
          local_120 = local_68;
          local_78 = 0;
          puStack_70 = (undefined8 *)0x0;
          FUN_1800e063a(&DAT_1802b0ea8,pcVar3,&local_78);
          FUN_18015ace8(&local_118,&local_78);
          local_f8 = 0;
          uStack_f0 = 0;
          local_e8 = 0;
          local_e0 = 0xf;
          local_d8 = 0;
          FUN_1800dfdc4(&DAT_1804182a8,&local_88,&local_68,&local_120);
          FUN_180001ef2(&local_f8);
          FUN_180001ef2(&local_118);
        }
        local_68 = (longlong *)((longlong)local_68 + 1);
        FUN_1800531d0(&local_160);
      }
    }
    uVar2 = FUN_1800136a6(local_d0,"switches");
    FUN_1800136fa(&local_78,uVar2);
    if ((char)local_78 == '\x02') {
      local_88 = 0;
      local_118 = 0;
      local_108 = 0x8000000000000000;
      local_110 = *puStack_70;
      local_158 = 0;
      local_148 = 0x8000000000000000;
      uStack_150 = puStack_70[1];
      local_160 = &local_78;
      local_120 = &local_78;
      while( true ) {
        cVar1 = FUN_18005324c(&local_120,&local_160);
        if (cVar1 != '\0') break;
        pcVar3 = (char *)FUN_1800e04aa(&local_120);
        uVar4 = FUN_1800dbb7b(&local_88);
        lVar5 = (uVar4 & _DAT_1804182d8) * 0x10;
        lVar7 = *(longlong *)(DAT_1804182c0 + 8 + lVar5);
        if (lVar7 != DAT_1804182b0) {
          if (local_88 != *(longlong *)(lVar7 + 0x10)) {
            do {
              if (lVar7 == *(longlong *)(DAT_1804182c0 + lVar5)) goto LAB_1800de38b;
              lVar7 = *(longlong *)(lVar7 + 8);
            } while (local_88 != *(longlong *)(lVar7 + 0x10));
          }
          if (*pcVar3 == '\x04') {
            local_b8 = (longlong *)((ulonglong)local_b8 & 0xffffffffffffff00);
            FUN_1800e06ec(&DAT_1802b0ea8,pcVar3,&local_b8);
            uVar4 = (ulonglong)local_b8 & 0xff;
          }
          else {
            uVar4 = 0;
          }
          FUN_1800db800(&DAT_1804182a8,&local_b8,&local_88);
          local_b8[0xc] = uVar4;
        }
LAB_1800de38b:
        local_88 = local_88 + 1;
        FUN_1800531d0(&local_120);
      }
    }
    plVar6 = (longlong *)*DAT_1804182f0;
    if (plVar6 != DAT_1804182f0) {
      do {
        uVar2 = FUN_1800dbb7b(plVar6 + 2);
        FUN_1800db986(&DAT_1804182a8,&local_120,plVar6 + 2,uVar2);
        if (local_118 == 0) {
          plVar6 = (longlong *)FUN_1800e05b8(&DAT_1804182e8,plVar6);
        }
        else {
          plVar6 = (longlong *)*plVar6;
        }
      } while (plVar6 != DAT_1804182f0);
    }
    DAT_180418340 = 1;
    FUN_1800137c6(&local_78);
    FUN_1800137c6(&local_98);
    FUN_18023d6e0(&DAT_1804026d0);
    FUN_180044980(&DAT_180402720);
    uVar2 = FUN_1800136a6(local_d0,"gameVariables");
    FUN_1800136fa(&local_78,uVar2);
    if ((char)local_78 == '\x02') {
      local_68 = (longlong *)0x0;
      local_158 = 0;
      local_148 = 0x8000000000000000;
      uStack_150 = *puStack_70;
      uStack_b0 = 0;
      uStack_a0 = 0x8000000000000000;
      local_a8 = puStack_70[1];
      local_160 = &local_78;
      local_b8 = &local_78;
      while( true ) {
        cVar1 = FUN_18005324c(&local_160,&local_b8);
        if (cVar1 != '\0') break;
        pcVar3 = (char *)FUN_1800e04aa(&local_160);
        if (*pcVar3 == '\x03') {
          local_120 = local_68;
          local_98 = 0;
          puStack_90 = (undefined8 *)0x0;
          FUN_1800e063a(&DAT_1802b0ea8,pcVar3,&local_98);
          FUN_18015ace8(&local_118,&local_98);
          local_f8 = 0;
          uStack_f0 = 0;
          local_e8 = 0;
          local_e0 = 0xf;
          FUN_1800e078c(&DAT_180418348,&local_88,&local_68,&local_120);
          FUN_180001ef2(&local_f8);
          FUN_180001ef2(&local_118);
        }
        local_68 = (longlong *)((longlong)local_68 + 1);
        FUN_1800531d0(&local_160);
      }
    }
    uVar2 = FUN_1800136a6(local_d0,"variables");
    FUN_1800136fa(&local_88,uVar2);
    if ((char)local_88 == '\x02') {
      local_68 = (longlong *)0x0;
      local_118 = 0;
      local_108 = 0x8000000000000000;
      local_110 = *local_80;
      local_158 = 0;
      local_148 = 0x8000000000000000;
      uStack_150 = local_80[1];
      local_160 = &local_88;
      local_120 = &local_88;
      while( true ) {
        cVar1 = FUN_18005324c(&local_120,&local_160);
        if (cVar1 != '\0') break;
        uVar2 = FUN_1800e04aa(&local_120);
        uVar4 = FUN_1800dbb7b(&local_68);
        lVar5 = (uVar4 & _DAT_180418378) * 0x10;
        lVar7 = *(longlong *)(DAT_180418360 + 8 + lVar5);
        if (lVar7 != DAT_180418350) {
          if (local_68 != *(longlong **)(lVar7 + 0x10)) {
            do {
              if (lVar7 == *(longlong *)(DAT_180418360 + lVar5)) goto LAB_1800de713;
              lVar7 = *(longlong *)(lVar7 + 8);
            } while (local_68 != *(longlong **)(lVar7 + 0x10));
          }
          FUN_1800139e8(uVar2,&local_b8,0xffffffff,0x20,0,0);
          FUN_1800dc42c(&DAT_180418348,&local_98,&local_68);
          lVar7 = local_98;
          puVar8 = (undefined8 *)(local_98 + 0x40);
          if (puVar8 != &local_b8) {
            FUN_180004c8c(puVar8);
            *(undefined8 *)(lVar7 + 0x50) = local_a8;
            *(undefined8 *)(lVar7 + 0x58) = uStack_a0;
            *(undefined4 *)puVar8 = (undefined4)local_b8;
            *(undefined4 *)(lVar7 + 0x44) = local_b8._4_4_;
            *(undefined4 *)(lVar7 + 0x48) = (undefined4)uStack_b0;
            *(undefined4 *)(lVar7 + 0x4c) = uStack_b0._4_4_;
            local_a8 = 0;
            uStack_a0 = 0xf;
            local_b8 = (longlong *)((ulonglong)local_b8 & 0xffffffffffffff00);
          }
          FUN_180001ef2(&local_b8);
        }
LAB_1800de713:
        local_68 = (longlong *)((longlong)local_68 + 1);
        FUN_1800531d0(&local_120);
      }
    }
    plVar6 = (longlong *)*DAT_180418390;
    if (plVar6 != DAT_180418390) {
      do {
        uVar2 = FUN_1800dbb7b(plVar6 + 2);
        FUN_1800db986(&DAT_180418348,&local_120,plVar6 + 2,uVar2);
        if (local_118 == 0) {
          plVar6 = (longlong *)FUN_1800e05b8(&DAT_180418388,plVar6);
        }
        else {
          plVar6 = (longlong *)*plVar6;
        }
      } while (plVar6 != DAT_180418390);
    }
    DAT_1804183e0 = 1;
    FUN_1800137c6(&local_88);
    FUN_1800137c6(&local_78);
    FUN_18023d6e0(&DAT_180402720);
  }
  FUN_1800137c6(local_d0);
  FUN_180001ef2(local_140);
  return;
}

