/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 101a021e */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101a021e(void)

{
  char cVar1;
  int iVar2;
  float10 fVar3;
  float fStack_64;
  float fStack_60;
  undefined8 local_5c;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined8 uStack_4c;
  undefined8 local_44;
  undefined4 local_3c;
  undefined4 local_38;
  undefined *local_34;
  undefined *puStack_30;
  undefined4 uStack_2c;
  undefined *puStack_28;
  undefined *local_24;
  undefined *puStack_20;
  undefined *puStack_1c;
  undefined *puStack_18;
  undefined *local_14;
  uint local_10;
  
  local_10 = DAT_10388d00 ^ (uint)&fStack_64;
  local_14 = PTR_s_Custom__Fixed_Steps__100__1030250c;
  local_24 = PTR_s_Width_Between_400_and_500_103024fc;
  puStack_20 = PTR_s_Height_at_least_400_10302500;
  puStack_1c = PTR_s_Custom__Aspect_Ratio_16_9_10302504;
  puStack_18 = PTR_s_Custom__Always_Square_10302508;
  local_34 = PTR_s_Between_100x100_and_500x500_103024ec;
  puStack_30 = PTR_s_At_least_100x100_103024f0;
  uStack_2c = _UNK_103024f4;
  puStack_28 = PTR_s_Resize_horizontal___lock_current_103024f8;
  local_38 = 0x3fe38e39;
  local_3c = 0x42c80000;
  if (DAT_1038ef64 == 0) {
    local_5c = DAT_103026c0;
    local_44 = DAT_103026d0;
    FUN_10111da2(&local_44,&local_5c,0,0);
  }
  if (DAT_1038ef64 == 1) {
    local_5c = DAT_102b8950;
    local_44 = DAT_103026d0;
    FUN_10111da2(&local_44,&local_5c,0,0);
  }
  if (DAT_1038ef64 == 2) {
    local_5c = DAT_103026e0;
    local_44 = (ulonglong)DAT_102b8a50;
    FUN_10111da2(&local_44,&local_5c,0,0);
  }
  if (DAT_1038ef64 == 3) {
    local_5c = DAT_103026f0;
    local_44 = DAT_10302700;
    FUN_10111da2(&local_44,&local_5c,0,0);
  }
  if (DAT_1038ef64 == 4) {
    local_5c = DAT_10302710;
    local_44 = DAT_10302720;
    FUN_10111da2(&local_44,&local_5c,0,0);
  }
  if (DAT_1038ef64 == 5) {
    local_5c = DAT_103026e0;
    local_44 = DAT_10302730;
    FUN_10111da2(&local_44,&local_5c,0,0);
  }
  if (DAT_1038ef64 == 6) {
    local_5c = DAT_102b8950;
    local_44 = 0;
    FUN_10111da2(&local_44,&local_5c,&LAB_101baa20,&local_38);
  }
  if (DAT_1038ef64 == 7) {
    local_5c = DAT_102b8950;
    local_44 = 0;
    FUN_10111da2(&local_44,&local_5c,&LAB_101baa3c,0);
  }
  if (DAT_1038ef64 == 8) {
    local_5c = DAT_102b8950;
    local_44 = 0;
    FUN_10111da2(&local_44,&local_5c,&LAB_101baa66,&local_3c);
  }
  if (DAT_1038ef60 == '\0') {
    local_5c = 0;
    FUN_100fd3bc(2,&local_5c);
  }
  cVar1 = FUN_10107d2b();
  if (DAT_1038ef60 == '\0') {
    FUN_100fd4c4();
  }
  FUN_101032c6();
  if (cVar1 != '\0') {
    iVar2 = FUN_1010330d();
    if (*(char *)(iVar2 + 0xd5) == '\x01') {
      FUN_1010c3e4();
      FUN_10114f9f();
      local_5c = CONCAT44(_UNK_10302754,_DAT_10302750);
      uStack_54 = _UNK_10302758;
      uStack_50 = _UNK_1030275c;
      FUN_10144b9b("viewport",&local_5c,0x240,&local_44);
      local_5c = CONCAT44((float)((ulonglong)uStack_4c >> 0x20) + _UNK_102b8f04,
                          (float)uStack_4c + _DAT_102b8f00);
      FUN_10114fbc();
      FUN_1012d08c("%.2f x %.2f",(double)(float)local_44,(double)local_44._4_4_);
    }
    else {
      FUN_1012d08c();
      cVar1 = FUN_10111c55();
      if (cVar1 != '\0') {
        FUN_1012d08c();
      }
      local_5c = 0;
      cVar1 = FUN_1012e1b7("Set 200x200",&local_5c);
      if (cVar1 != '\0') {
        local_5c = DAT_102b9010;
        FUN_10111cbb(&local_5c,0);
      }
      FUN_10114a0e(0,0xbf800000);
      local_5c = 0;
      cVar1 = FUN_1012e1b7("Set 500x500",&local_5c);
      if (cVar1 != '\0') {
        local_5c = DAT_103026c0;
        FUN_10111cbb(&local_5c,0);
      }
      FUN_10114a0e(0,0xbf800000);
      local_5c = 0;
      cVar1 = FUN_1012e1b7("Set 800x200",&local_5c);
      if (cVar1 != '\0') {
        local_5c = DAT_10302740;
        FUN_10111cbb(&local_5c,0);
      }
      fVar3 = (float10)FUN_10111f20();
      fStack_60 = (float)fVar3;
      FUN_100fb68f();
      FUN_10133e14("Constraint",&DAT_1038ef64,&local_34,9,0xffffffff);
      fVar3 = (float10)FUN_10111f20();
      fStack_64 = (float)fVar3;
      FUN_100fb68f();
      FUN_1013838a("Lines",&DAT_1038ef68,0x3e4ccccd,1,100,&DAT_1033b386,0);
      FUN_1012ff1a("Auto-resize",&DAT_103a4c50);
      FUN_1012ff1a("Window padding",&DAT_1038ef60);
      if (0 < DAT_1038ef68) {
        iVar2 = 0;
        do {
          FUN_1012d08c();
          iVar2 = iVar2 + 1;
        } while (iVar2 < DAT_1038ef68);
      }
    }
  }
  FUN_1010ad44();
  if (DAT_10388d00 == (local_10 ^ (uint)&fStack_64)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_102283e0();
}

