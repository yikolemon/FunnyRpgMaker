/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 1400ed525 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1400ed525(void)

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
  
  local_40 = DAT_140f17b40 ^ (ulonglong)auStack_f8;
  ppuVar6 = &PTR_s_Between_100x100_and_500x500_140e8d1d0;
  puVar7 = local_88;
  for (lVar3 = 9; lVar3 != 0; lVar3 = lVar3 + -1) {
    *puVar7 = *ppuVar6;
    ppuVar6 = ppuVar6 + 1;
    puVar7 = puVar7 + 1;
  }
  local_8c = 0x3fe38e39;
  local_90 = 0x42c80000;
  if (DAT_140f1c608 == 0) {
    local_b8 = DAT_140e8d3c0;
    local_98 = DAT_140e8d3d0;
    FUN_14008fdd9(&local_98,&local_b8,0,0);
  }
  if (DAT_140f1c608 == 1) {
    local_b8 = DAT_140211280;
    local_98 = DAT_140e8d3d0;
    FUN_14008fdd9(&local_98,&local_b8,0,0);
  }
  if (DAT_140f1c608 == 2) {
    local_b8 = DAT_140e8d3e0;
    local_98 = (ulonglong)DAT_1401c86a4;
    FUN_14008fdd9(&local_98,&local_b8,0,0);
  }
  if (DAT_140f1c608 == 3) {
    local_b8 = DAT_140e8d3f0;
    local_98 = DAT_140e8d400;
    FUN_14008fdd9(&local_98,&local_b8,0,0);
  }
  if (DAT_140f1c608 == 4) {
    local_b8 = DAT_140e8d410;
    local_98 = DAT_140e8d420;
    FUN_14008fdd9(&local_98,&local_b8,0,0);
  }
  if (DAT_140f1c608 == 5) {
    local_b8 = DAT_140e8d3e0;
    local_98 = DAT_140e8d430;
    FUN_14008fdd9(&local_98,&local_b8,0,0);
  }
  if (DAT_140f1c608 == 6) {
    local_b8 = DAT_140211280;
    local_98 = 0;
    FUN_14008fdd9(&local_98,&local_b8,&LAB_140109a98,&local_8c);
  }
  if (DAT_140f1c608 == 7) {
    local_b8 = DAT_140211280;
    local_98 = 0;
    FUN_14008fdd9(&local_98,&local_b8,&LAB_140109ab2,0);
  }
  if (DAT_140f1c608 == 8) {
    local_b8 = DAT_140211280;
    local_98 = 0;
    FUN_14008fdd9(&local_98,&local_b8,&LAB_140109ad8,&local_90);
  }
  if (DAT_140f1c604 == '\0') {
    local_b8 = 0;
    FUN_14007ae77(2);
  }
  cVar2 = FUN_140085d7e("Example: Constrained Resize",&DAT_140f3093c,(ulonglong)DAT_140f32368 << 6);
  if (DAT_140f1c604 == '\0') {
    FUN_14007af87(1);
  }
  FUN_1400811b6("imgui_demo.cpp",0x2767,"Examples/Constrained Resizing window");
  if (cVar2 != '\0') {
    lVar3 = FUN_140081200();
    if (*(char *)(lVar3 + 0x109) == '\x01') {
      FUN_14008a381(&local_98);
      FUN_14009311d(local_a0);
      local_b8 = CONCAT44(_UNK_140e8d454,_DAT_140e8d450);
      uStack_b0 = _UNK_140e8d458;
      uStack_ac = _UNK_140e8d45c;
      FUN_1400c2545("viewport",&local_b8,0x240,&local_98);
      local_b8 = CONCAT44(local_a0._4_4_ + _UNK_1402116e4,local_a0._0_4_ + _DAT_1402116e0);
      FUN_140093139(&local_b8);
      FUN_1400abfd5("%.2f x %.2f",(double)(float)local_98,(double)local_98._4_4_);
    }
    else {
      FUN_1400abfd5("(Hold Shift to display a dummy viewport)");
      cVar2 = FUN_14008fca4();
      if (cVar2 != '\0') {
        FUN_1400abfd5("Warning: Sizing Constraints won\'t work if the window is docked!");
      }
      local_b8 = 0;
      cVar2 = FUN_1400ad187("Set 200x200");
      if (cVar2 != '\0') {
        local_b8 = DAT_1402117a0;
        FUN_14008fd15(&local_b8,0);
      }
      FUN_140092bab(0,DAT_1401c86a4);
      local_b8 = 0;
      cVar2 = FUN_1400ad187("Set 500x500");
      if (cVar2 != '\0') {
        local_b8 = DAT_140e8d3c0;
        FUN_14008fd15(&local_b8,0);
      }
      FUN_140092bab(0,DAT_1401c86a4);
      local_b8 = 0;
      cVar2 = FUN_1400ad187("Set 800x200");
      if (cVar2 != '\0') {
        local_b8 = DAT_140e8d440;
        FUN_14008fd15(&local_b8,0);
      }
      fVar8 = (float)FUN_14008ff20();
      fVar1 = DAT_1401c86d4;
      FUN_140079071(fVar8 * DAT_1401c86d4);
      local_d8 = 0xffffffff;
      FUN_1400b288e("Constraint",&DAT_140f1c608,local_88,9);
      fVar8 = (float)FUN_14008ff20();
      FUN_140079071(fVar8 * fVar1);
      local_d0 = &DAT_140ecbfd4;
      local_c8 = 0;
      local_d8 = 100;
      FUN_1400b6661("Lines",&DAT_140f1c60c,DAT_14021001c,1);
      FUN_1400aeb6a("Auto-resize",&DAT_140f32368);
      FUN_1400aeb6a("Window padding",&DAT_140f1c604);
      if (0 < DAT_140f1c60c) {
        iVar5 = 0;
        iVar4 = 0;
        do {
          FUN_1400abfd5("%*sHello, sailor! Making this line long enough for the example.",iVar5,
                        &DAT_140edcdbf);
          iVar4 = iVar4 + 1;
          iVar5 = iVar5 + 4;
        } while (iVar4 < DAT_140f1c60c);
      }
    }
  }
  FUN_140088c18();
  if (DAT_140f17b40 == (local_40 ^ (ulonglong)auStack_f8)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_140188a00(local_40 ^ (ulonglong)auStack_f8);
}

