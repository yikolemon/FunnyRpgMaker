/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 1801a78a1 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1801a78a1(void)

{
  float fVar1;
  char cVar2;
  longlong lVar3;
  int iVar4;
  int iVar5;
  undefined **ppuVar6;
  undefined8 *puVar7;
  float fVar8;
  undefined1 auStack_f8 [32];
  undefined4 local_d8;
  undefined *local_d0;
  undefined4 local_c8;
  undefined8 local_b8;
  undefined4 uStack_b0;
  undefined4 uStack_ac;
  undefined1 local_a0 [8];
  undefined8 local_98;
  undefined4 local_90;
  undefined4 local_8c;
  undefined8 local_88 [9];
  ulonglong local_40;
  
  local_40 = DAT_180402640 ^ (ulonglong)auStack_f8;
  ppuVar6 = &PTR_s_Between_100x100_and_500x500_180328e40;
  puVar7 = local_88;
  for (lVar3 = 9; lVar3 != 0; lVar3 = lVar3 + -1) {
    *puVar7 = *ppuVar6;
    ppuVar6 = ppuVar6 + 1;
    puVar7 = puVar7 + 1;
  }
  local_8c = 0x3fe38e39;
  local_90 = 0x42c80000;
  if (DAT_180408e68 == 0) {
    local_b8 = DAT_180329020;
    local_98 = DAT_180329030;
    FUN_180116ac1(&local_98,&local_b8,0,0);
  }
  if (DAT_180408e68 == 1) {
    local_b8 = DAT_1802de500;
    local_98 = DAT_180329030;
    FUN_180116ac1(&local_98,&local_b8,0,0);
  }
  if (DAT_180408e68 == 2) {
    local_b8 = DAT_180329040;
    local_98 = (ulonglong)DAT_1802bb8e0;
    FUN_180116ac1(&local_98,&local_b8,0,0);
  }
  if (DAT_180408e68 == 3) {
    local_b8 = DAT_180329050;
    local_98 = DAT_180329060;
    FUN_180116ac1(&local_98,&local_b8,0,0);
  }
  if (DAT_180408e68 == 4) {
    local_b8 = DAT_180329070;
    local_98 = DAT_180329080;
    FUN_180116ac1(&local_98,&local_b8,0,0);
  }
  if (DAT_180408e68 == 5) {
    local_b8 = DAT_180329040;
    local_98 = DAT_180329090;
    FUN_180116ac1(&local_98,&local_b8,0,0);
  }
  if (DAT_180408e68 == 6) {
    local_b8 = DAT_1802de500;
    local_98 = 0;
    FUN_180116ac1(&local_98,&local_b8,&LAB_1801c3d94,&local_8c);
  }
  if (DAT_180408e68 == 7) {
    local_b8 = DAT_1802de500;
    local_98 = 0;
    FUN_180116ac1(&local_98,&local_b8,&LAB_1801c3dae,0);
  }
  if (DAT_180408e68 == 8) {
    local_b8 = DAT_1802de500;
    local_98 = 0;
    FUN_180116ac1(&local_98,&local_b8,&LAB_1801c3dd4,&local_90);
  }
  if (DAT_180408e64 == '\0') {
    local_b8 = 0;
    FUN_180101bbb(2);
  }
  cVar2 = FUN_18010ca66("Example: Constrained Resize",&DAT_18041f1ec,(ulonglong)DAT_180420c18 << 6);
  if (DAT_180408e64 == '\0') {
    FUN_180101ccb(1);
  }
  FUN_180107e9e("imgui_demo.cpp",0x2767,"Examples/Constrained Resizing window");
  if (cVar2 != '\0') {
    lVar3 = FUN_180107ee8();
    if (*(char *)(lVar3 + 0x109) == '\x01') {
      FUN_180111069(&local_98);
      FUN_180119e05(local_a0);
      local_b8 = CONCAT44(_UNK_1803290b4,_DAT_1803290b0);
      uStack_b0 = _UNK_1803290b8;
      uStack_ac = _UNK_1803290bc;
      FUN_180149615("viewport",&local_b8,0x240,&local_98);
      local_b8 = CONCAT44(local_a0._4_4_ + _UNK_1802de974,local_a0._0_4_ + _DAT_1802de970);
      FUN_180119e21(&local_b8);
      FUN_1801330a5("%.2f x %.2f",(double)(float)local_98,(double)local_98._4_4_);
    }
    else {
      FUN_1801330a5("(Hold Shift to display a dummy viewport)");
      cVar2 = FUN_18011698c();
      if (cVar2 != '\0') {
        FUN_1801330a5("Warning: Sizing Constraints won\'t work if the window is docked!");
      }
      local_b8 = 0;
      cVar2 = FUN_180134257("Set 200x200");
      if (cVar2 != '\0') {
        local_b8 = DAT_1802dea30;
        FUN_1801169fd(&local_b8,0);
      }
      FUN_180119893(0,DAT_1802bb8e0);
      local_b8 = 0;
      cVar2 = FUN_180134257("Set 500x500");
      if (cVar2 != '\0') {
        local_b8 = DAT_180329020;
        FUN_1801169fd(&local_b8,0);
      }
      FUN_180119893(0,DAT_1802bb8e0);
      local_b8 = 0;
      cVar2 = FUN_180134257("Set 800x200");
      if (cVar2 != '\0') {
        local_b8 = DAT_1803290a0;
        FUN_1801169fd(&local_b8,0);
      }
      fVar8 = (float)FUN_180116c08();
      fVar1 = DAT_1802dbb4c;
      FUN_1800ffdb5(fVar8 * DAT_1802dbb4c);
      local_d8 = 0xffffffff;
      FUN_18013995e("Constraint",&DAT_180408e68,local_88,9);
      fVar8 = (float)FUN_180116c08();
      FUN_1800ffdb5(fVar8 * fVar1);
      local_d0 = &DAT_18036b4b0;
      local_c8 = 0;
      local_d8 = 100;
      FUN_18013d731("Lines",&DAT_180408e6c,DAT_1802de790,1);
      FUN_180135c3a("Auto-resize",&DAT_180420c18);
      FUN_180135c3a("Window padding",&DAT_180408e64);
      if (0 < DAT_180408e6c) {
        iVar5 = 0;
        iVar4 = 0;
        do {
          FUN_1801330a5("%*sHello, sailor! Making this line long enough for the example.",iVar5,
                        &DAT_1803861e4);
          iVar4 = iVar4 + 1;
          iVar5 = iVar5 + 4;
        } while (iVar4 < DAT_180408e6c);
      }
    }
  }
  FUN_18010f900();
  if (DAT_180402640 == (local_40 ^ (ulonglong)auStack_f8)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1802396d0(local_40 ^ (ulonglong)auStack_f8);
}

