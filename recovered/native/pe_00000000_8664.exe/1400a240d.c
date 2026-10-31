/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 1400a240d */

void FUN_1400a240d(longlong *param_1,undefined8 param_2)

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
  
  local_a0 = DAT_140f17b40 ^ (ulonglong)auStack_1f8;
  iVar9 = *(int *)((longlong)param_1 + 0x34);
  local_1b8 = FUN_140081259();
  local_1b8 = local_1b8 + -2;
  local_1c8 = " *Inactive*";
  if (local_1b8 <= iVar9) {
    local_1c8 = "";
  }
  local_1d0 = (double)CONCAT44(local_1d0._4_4_,(int)param_1[1]);
  local_1d8 = CONCAT44(local_1d8._4_4_,*(undefined4 *)((longlong)param_1 + 0x1c));
  local_1b4 = iVar9;
  local_1b0 = param_2;
  iVar9 = FUN_140077d91(local_1a8,0x100,"%s 0x%08X (%d tabs)%s  {",param_2);
  puVar15 = local_1a8 + iVar9;
  iVar9 = FUN_140077fbc((int)param_1[1],3);
  if (0 < iVar9) {
    lVar16 = 0;
    lVar11 = 0;
    do {
      local_1d8 = FUN_1400cc790(param_1,param_1[2] + lVar16);
      puVar14 = &DAT_140edae88;
      if (lVar11 == 0) {
        puVar14 = &DAT_140edcdbf;
      }
      iVar9 = FUN_140077d91(puVar15,local_a8 + -(longlong)puVar15,"%s\'%s\'",puVar14);
      puVar15 = puVar15 + iVar9;
      lVar11 = lVar11 + 1;
      iVar9 = FUN_140077fbc((int)param_1[1],3);
      lVar16 = lVar16 + 0x38;
    } while (lVar11 < iVar9);
  }
  pcVar13 = " } ";
  if (3 < (int)param_1[1]) {
    pcVar13 = " ... }";
  }
  FUN_140077d91(puVar15,local_a8 + -(longlong)puVar15,pcVar13);
  if (local_1b4 < local_1b8) {
    uVar10 = FUN_14007a629(1);
    FUN_14007a7b5(0,uVar10);
    cVar7 = FUN_1400c4fe4(local_1b0,"%s",local_1a8);
    FUN_14007a8e1(1);
  }
  else {
    cVar7 = FUN_1400c4fe4(local_1b0,"%s",local_1a8);
    cVar8 = FUN_1400808b4(0);
    if (cVar8 != '\0') {
      uVar10 = FUN_14007c4e4(*(undefined8 *)(*param_1 + 0x48));
      local_1c8 = (char *)((ulonglong)local_1c8 & 0xffffffff00000000);
      local_1d0._0_4_ = 0x3f800000;
      local_1d8 = local_1d8 & 0xffffffff00000000;
      FUN_1400de17e(uVar10,param_1 + 7,param_1 + 8,0xff00ffff);
      local_1d0._0_4_ = 0x3f800000;
      local_1d8._0_4_ = 0xff00ff00;
      FUN_1400ddffa(uVar10,*(undefined4 *)((longlong)param_1 + 0x6c),
                    *(undefined4 *)((longlong)param_1 + 0x3c),
                    *(undefined4 *)((longlong)param_1 + 0x44));
      local_1d0 = (double)CONCAT44(local_1d0._4_4_,0x3f800000);
      local_1d8 = CONCAT44(local_1d8._4_4_,0xff00ff00);
      FUN_1400ddffa(uVar10,(int)param_1[0xe],*(undefined4 *)((longlong)param_1 + 0x3c),
                    *(undefined4 *)((longlong)param_1 + 0x44));
    }
  }
  uVar6 = DAT_1402113a0;
  uVar5 = DAT_1401c86a4;
  if (cVar7 != '\0') {
    if (0 < (int)param_1[1]) {
      uVar12 = 0;
      lVar11 = 0;
      do {
        lVar4 = param_1[2];
        lVar16 = lVar4 + lVar11;
        FUN_14009136c(lVar16);
        cVar7 = FUN_1400ad18f(&DAT_140ecd754);
        if (cVar7 != '\0') {
          FUN_1400cc9bb(param_1,lVar16,0xffffffff);
        }
        FUN_140092bab(0,uVar6);
        cVar7 = FUN_1400ad18f(&DAT_140ecd74d);
        if (cVar7 != '\0') {
          FUN_1400cc9bb(param_1,lVar16,1);
        }
        FUN_140092bab(0,uVar5);
        fVar1 = *(float *)(lVar4 + 0x20 + lVar11);
        fVar2 = *(float *)(lVar4 + 0x1c + lVar11);
        fVar3 = *(float *)(lVar4 + 0x18 + lVar11);
        local_1d8 = FUN_1400cc790(param_1,lVar16);
        uVar10 = 0x20;
        if (*(int *)(lVar4 + lVar11) == (int)param_1[4]) {
          uVar10 = 0x2a;
        }
        local_1d0 = (double)fVar3;
        local_1c8 = (char *)(double)fVar2;
        local_1c0 = (double)fVar1;
        FUN_1400abfd5("%02d%c Tab 0x%08X \'%s\' Offset: %.2f, Width: %.2f/%.2f",uVar12 & 0xffffffff,
                      uVar10);
        FUN_140091667();
        uVar12 = uVar12 + 1;
        lVar11 = lVar11 + 0x38;
      } while ((longlong)uVar12 < (longlong)(int)param_1[1]);
    }
    FUN_1400c66d9();
  }
  if (DAT_140f17b40 != (local_a0 ^ (ulonglong)auStack_1f8)) {
                    /* WARNING: Subroutine does not return */
    FUN_140188a00(local_a0 ^ (ulonglong)auStack_1f8);
  }
  return;
}

