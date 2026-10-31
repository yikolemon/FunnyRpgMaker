/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 1801294dd */

void FUN_1801294dd(longlong *param_1,undefined8 param_2)

{
  float fVar1;
  float fVar2;
  float fVar3;
  longlong lVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  char cVar7;
  char cVar8;
  int iVar9;
  undefined8 uVar10;
  longlong lVar11;
  ulonglong uVar12;
  char *pcVar13;
  undefined *puVar14;
  undefined1 *puVar15;
  longlong lVar16;
  undefined1 auStack_1f8 [32];
  ulonglong local_1d8;
  double local_1d0;
  char *local_1c8;
  double local_1c0;
  int local_1b8;
  int local_1b4;
  undefined8 local_1b0;
  undefined1 local_1a8 [256];
  undefined1 local_a8 [8];
  ulonglong local_a0;
  
  local_a0 = DAT_180402640 ^ (ulonglong)auStack_1f8;
  iVar9 = *(int *)((longlong)param_1 + 0x34);
  local_1b8 = FUN_180107f41();
  local_1b8 = local_1b8 + -2;
  local_1c8 = " *Inactive*";
  if (local_1b8 <= iVar9) {
    local_1c8 = "";
  }
  local_1d0 = (double)CONCAT44(local_1d0._4_4_,(int)param_1[1]);
  local_1d8 = CONCAT44(local_1d8._4_4_,*(undefined4 *)((longlong)param_1 + 0x1c));
  local_1b4 = iVar9;
  local_1b0 = param_2;
  iVar9 = FUN_1800fead5(local_1a8,0x100,"%s 0x%08X (%d tabs)%s  {",param_2);
  puVar15 = local_1a8 + iVar9;
  iVar9 = FUN_1800fed00((int)param_1[1],3);
  if (0 < iVar9) {
    lVar16 = 0;
    lVar11 = 0;
    do {
      local_1d8 = FUN_180153860(param_1,param_1[2] + lVar16);
      puVar14 = &DAT_18037bd63;
      if (lVar11 == 0) {
        puVar14 = &DAT_1803861e4;
      }
      iVar9 = FUN_1800fead5(puVar15,local_a8 + -(longlong)puVar15,"%s\'%s\'",puVar14);
      puVar15 = puVar15 + iVar9;
      lVar11 = lVar11 + 1;
      iVar9 = FUN_1800fed00((int)param_1[1],3);
      lVar16 = lVar16 + 0x38;
    } while (lVar11 < iVar9);
  }
  pcVar13 = " } ";
  if (3 < (int)param_1[1]) {
    pcVar13 = " ... }";
  }
  FUN_1800fead5(puVar15,local_a8 + -(longlong)puVar15,pcVar13);
  if (local_1b4 < local_1b8) {
    uVar10 = FUN_18010136d(1);
    FUN_1801014f9(0,uVar10);
    cVar7 = FUN_18014c0b4(local_1b0,"%s",local_1a8);
    FUN_180101625(1);
  }
  else {
    cVar7 = FUN_18014c0b4(local_1b0,"%s",local_1a8);
    cVar8 = FUN_18010759c(0);
    if (cVar8 != '\0') {
      uVar10 = FUN_180103228(*(undefined8 *)(*param_1 + 0x48));
      local_1c8 = (char *)((ulonglong)local_1c8 & 0xffffffff00000000);
      local_1d0._0_4_ = 0x3f800000;
      local_1d8 = local_1d8 & 0xffffffff00000000;
      FUN_180192c0a(uVar10,param_1 + 7,param_1 + 8,0xff00ffff);
      local_1d0._0_4_ = 0x3f800000;
      local_1d8._0_4_ = 0xff00ff00;
      FUN_180192a86(uVar10,*(undefined4 *)((longlong)param_1 + 0x6c),
                    *(undefined4 *)((longlong)param_1 + 0x3c),
                    *(undefined4 *)((longlong)param_1 + 0x44));
      local_1d0 = (double)CONCAT44(local_1d0._4_4_,0x3f800000);
      local_1d8 = CONCAT44(local_1d8._4_4_,0xff00ff00);
      FUN_180192a86(uVar10,(int)param_1[0xe],*(undefined4 *)((longlong)param_1 + 0x3c),
                    *(undefined4 *)((longlong)param_1 + 0x44));
    }
  }
  uVar6 = DAT_1802de650;
  uVar5 = DAT_1802bb8e0;
  if (cVar7 != '\0') {
    if (0 < (int)param_1[1]) {
      uVar12 = 0;
      lVar11 = 0;
      do {
        lVar4 = param_1[2];
        lVar16 = lVar4 + lVar11;
        FUN_180118054(lVar16);
        cVar7 = FUN_18013425f(&DAT_18036d551);
        if (cVar7 != '\0') {
          FUN_180153a8b(param_1,lVar16,0xffffffff);
        }
        FUN_180119893(0,uVar6);
        cVar7 = FUN_18013425f(&DAT_18036d117);
        if (cVar7 != '\0') {
          FUN_180153a8b(param_1,lVar16,1);
        }
        FUN_180119893(0,uVar5);
        fVar1 = *(float *)(lVar4 + 0x20 + lVar11);
        fVar2 = *(float *)(lVar4 + 0x1c + lVar11);
        fVar3 = *(float *)(lVar4 + 0x18 + lVar11);
        local_1d8 = FUN_180153860(param_1,lVar16);
        uVar10 = 0x20;
        if (*(int *)(lVar4 + lVar11) == (int)param_1[4]) {
          uVar10 = 0x2a;
        }
        local_1d0 = (double)fVar3;
        local_1c8 = (char *)(double)fVar2;
        local_1c0 = (double)fVar1;
        FUN_1801330a5("%02d%c Tab 0x%08X \'%s\' Offset: %.2f, Width: %.2f/%.2f",uVar12 & 0xffffffff,
                      uVar10);
        FUN_18011834f();
        uVar12 = uVar12 + 1;
        lVar11 = lVar11 + 0x38;
      } while ((longlong)uVar12 < (longlong)(int)param_1[1]);
    }
    FUN_18014d7a9();
  }
  if (DAT_180402640 != (local_a0 ^ (ulonglong)auStack_1f8)) {
                    /* WARNING: Subroutine does not return */
    FUN_1802396d0(local_a0 ^ (ulonglong)auStack_1f8);
  }
  return;
}

