/* Ghidra pseudocode. Image: pe_00a0fad0_8664.exe Address: 1400b1810 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4
FUN_1400b1810(undefined8 param_1,longlong param_2,uint param_3,char param_4,undefined8 param_5)

{
  FILETIME *pFVar1;
  double dVar2;
  FILETIME FVar3;
  FILETIME FVar4;
  DWORD DVar5;
  int iVar6;
  uint uVar7;
  uint uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  longlong lVar11;
  undefined8 *puVar12;
  undefined8 *puVar13;
  HANDLE pvVar14;
  FILE *pFVar15;
  ulonglong uVar16;
  void *_DstBuf;
  longlong lVar17;
  uint uVar18;
  undefined4 uVar19;
  ulonglong uVar20;
  char cVar21;
  ulonglong uVar22;
  int iVar23;
  WCHAR *pWVar24;
  undefined1 auStack_3d8 [32];
  undefined8 local_3b8;
  int *local_3b0;
  undefined4 local_3a8;
  undefined8 local_3a0;
  undefined8 local_398;
  char local_390;
  undefined1 *local_388;
  char local_379;
  FILE *local_378;
  uint local_36c;
  void *local_368;
  undefined8 *local_360;
  undefined8 *local_358;
  ulonglong local_350;
  longlong local_348;
  DWORD local_340;
  uint local_33c;
  longlong local_338;
  undefined8 local_330;
  longlong local_328;
  FILETIME local_320;
  HANDLE local_318;
  ulonglong local_310;
  int local_308;
  uint local_304;
  int local_300;
  int local_2fc;
  undefined8 local_2f8;
  uint local_2f0;
  undefined4 local_2ec;
  undefined4 local_2e8;
  undefined8 local_2e4;
  undefined8 uStack_2dc;
  int local_2d4;
  UINT local_2d0;
  _WIN32_FIND_DATAW local_2cc;
  undefined1 local_7c [12];
  ulonglong local_70;
  
  local_70 = DAT_1401c9640 ^ (ulonglong)auStack_3d8;
  local_348 = param_2;
  FUN_1400afdf8(param_5,local_7c);
  uVar9 = _malloc_base(0x1000000);
  uVar10 = FUN_140114300(param_1,&DAT_140173b02);
  local_2e8 = 0x55844;
  local_2d4 = -1;
  local_2e4 = _DAT_140164ef0;
  uStack_2dc = _UNK_140164ef8;
  local_2d0 = GetACP();
  SetFileApisToANSI();
  local_3b8 = (undefined8 *)((ulonglong)local_3b8._4_4_ << 0x20);
  FUN_1400aff10(&local_2e8,0x1c,uVar10,local_7c);
  lVar11 = _calloc_base(1,0x1000000);
  uVar19 = 0xffffffff;
  if (((lVar11 != 0) &&
      (puVar12 = (undefined8 *)_calloc_base(1,0x1000000), puVar12 != (undefined8 *)0x0)) &&
     (local_379 = param_4, puVar13 = (undefined8 *)_calloc_base(1,0x1000000),
     puVar13 != (undefined8 *)0x0)) {
    local_308 = 0;
    local_304 = FUN_1400afad2(&DAT_140174404,lVar11);
    *puVar12 = 0x1000000000;
    puVar12[3] = 0;
    puVar12[4] = 0;
    puVar12[1] = 0;
    puVar12[2] = 0;
    *(undefined4 *)(puVar12 + 5) = 0xffffffff;
    local_2f8 = 0xffffffff00000000;
    local_2ec = 0x2c;
    *puVar13 = 0xffffffff00000000;
    *(uint *)(puVar13 + 1) = param_3;
    *(undefined4 *)((longlong)puVar13 + 0xc) = 0x2c;
    dVar2 = DAT_140164ee0;
    local_300 = 0x10;
    local_2fc = param_3 * 0x2c + 0x2c;
    local_360 = puVar12;
    local_358 = puVar13;
    local_338 = lVar11;
    local_2f0 = param_3;
    if ((int)param_3 < 1) {
      local_378 = (FILE *)CONCAT44(local_378._4_4_,0x1c);
    }
    else {
      local_310 = (ulonglong)param_3;
      uVar20 = 0;
      lVar17 = local_348;
      local_330 = uVar10;
      cVar21 = local_379;
      do {
        DVar5 = GetFileAttributesW(*(LPCWSTR *)(lVar17 + uVar20 * 8));
        if (DVar5 != 0xffffffff) {
          if ((DVar5 & 0x10) == 0) {
            pvVar14 = FindFirstFileW(*(LPCWSTR *)(lVar17 + uVar20 * 8),&local_2cc);
            FVar4 = local_2cc.ftLastAccessTime;
            FVar3 = local_2cc.ftCreationTime;
            uVar7 = local_304;
            iVar23 = local_308;
            if (pvVar14 != (HANDLE)0xffffffffffffffff) {
              local_320 = local_2cc.ftLastWriteTime;
              local_340 = local_2cc.dwFileAttributes;
              local_350 = (ulonglong)local_2cc.nFileSizeLow;
              local_318 = pvVar14;
              iVar6 = FUN_1400afad2(local_2cc.cFileName,(ulonglong)local_304 + lVar11);
              local_33c = uVar7;
              local_304 = iVar6 + uVar7;
              if (local_2cc.nFileSizeHigh == 0 && local_2cc.nFileSizeLow == 0) {
                uVar7 = 0xffffffff;
                uVar10 = local_330;
              }
              else {
                pFVar15 = (FILE *)FUN_140114300(*(undefined8 *)(local_348 + uVar20 * 8),
                                                &DAT_140173b08);
                FUN_140113f48(pFVar15,0,2);
                uVar7 = FUN_1401144b0(pFVar15);
                uVar22 = (ulonglong)uVar7;
                local_378 = pFVar15;
                FUN_140113f48(pFVar15,0,0);
                uVar10 = local_330;
                if ((cVar21 == '\0') ||
                   (0x9fffff < CONCAT44(local_2cc.nFileSizeHigh,local_2cc.nFileSizeLow))) {
LAB_1400b1cdb:
                  uVar22 = local_350;
                  local_36c = 0xffffffff;
                  if (uVar7 == 0) {
                    uVar18 = 0;
                  }
                  else {
                    local_368 = (void *)CONCAT44(local_368._4_4_,iVar23);
                    uVar18 = 0;
                    do {
                      uVar8 = uVar7 - uVar18;
                      if (0xffffff < uVar8) {
                        uVar8 = 0x1000000;
                      }
                      uVar8 = uVar8 + 3 & 0x3fffffc;
                      local_3b8 = (undefined8 *)CONCAT44(local_3b8._4_4_,uVar18 + (int)uVar22);
                      FUN_1400aff7c(uVar9,uVar8,local_378,local_7c);
                      FUN_140116e20(uVar9,uVar8,1,uVar10);
                      uVar18 = uVar8 + uVar18;
                    } while (uVar18 < uVar7);
                    lVar11 = local_338;
                    iVar23 = (int)local_368;
                  }
                }
                else {
                  uVar16 = FUN_14011cf50(local_2cc.cFileName);
                  if (4 < uVar16) {
                    pWVar24 = local_2cc.cFileName + (uVar16 - 3);
                    iVar6 = FUN_1400afa28(pWVar24,&DAT_140172d76);
                    if (((iVar6 == 0) || (iVar6 = FUN_1400afa28(pWVar24,&DAT_14017331c), iVar6 == 0)
                        ) || ((iVar6 = FUN_1400afa28(pWVar24,&DAT_140173326), iVar6 == 0 ||
                              ((((iVar6 = FUN_1400afa28(pWVar24,&DAT_140173312), iVar6 == 0 ||
                                 (iVar6 = FUN_1400afa28(pWVar24,&DAT_140173c10), iVar6 == 0)) ||
                                (iVar6 = FUN_1400afa28(pWVar24,&DAT_1401733cc), iVar6 == 0)) ||
                               ((iVar6 = FUN_1400afa28(pWVar24,&DAT_140172d64), iVar6 == 0 ||
                                (iVar6 = FUN_1400afa28(local_2cc.cFileName + (uVar16 - 4),L"jpeg"),
                                iVar6 == 0)))))))) goto LAB_1400b1cdb;
                  }
                  _DstBuf = (void *)_malloc_base(uVar22 * 3 + 0x40 & 0xffffffff);
                  local_328 = (longlong)_DstBuf + uVar22;
                  fread(_DstBuf,uVar22,1,local_378);
                  lVar17 = local_328;
                  local_368 = _DstBuf;
                  uVar8 = FUN_1400b0832(_DstBuf,uVar7,local_328);
                  if (dVar2 < (double)uVar8 / (double)uVar22) {
                    FUN_140113f48(local_378,0,0);
                    thunk_FUN_1401212e0(local_368);
                    goto LAB_1400b1cdb;
                  }
                  uVar18 = uVar8 + 3 & 0xfffffffc;
                  local_3b8 = (undefined8 *)CONCAT44(local_3b8._4_4_,(int)local_350);
                  local_36c = uVar8;
                  FUN_1400aff10(lVar17,uVar18,uVar10,local_7c);
                  thunk_FUN_1401212e0(local_368);
                }
                FUN_140115998(local_378);
                local_308 = uVar18 + iVar23;
                puVar12 = local_360;
                puVar13 = local_358;
                uVar7 = local_36c;
                cVar21 = local_379;
              }
              lVar17 = uVar20 * 0x2c;
              *(uint *)((longlong)puVar12 + lVar17 + 0x2c) = local_33c;
              *(DWORD *)((longlong)puVar12 + lVar17 + 0x30) = local_340;
              pFVar1 = (FILETIME *)((longlong)puVar12 + lVar17 + 0x34);
              *pFVar1 = FVar3;
              pFVar1[1] = FVar4;
              *(FILETIME *)((longlong)puVar12 + lVar17 + 0x44) = local_320;
              *(int *)((longlong)puVar12 + lVar17 + 0x4c) = iVar23;
              *(int *)((longlong)puVar12 + lVar17 + 0x50) = (int)local_350;
              *(uint *)((longlong)puVar12 + lVar17 + 0x54) = uVar7;
              FindClose(local_318);
              lVar17 = local_348;
            }
          }
          else {
            local_388 = local_7c;
            local_3a8 = (undefined4)uVar20;
            local_3b0 = &local_308;
            local_3b8 = &local_2f8;
            local_3a0 = uVar10;
            local_398 = uVar9;
            local_390 = cVar21;
            FUN_1400affd6(*(undefined8 *)(lVar17 + uVar20 * 8),lVar11,puVar13,puVar12);
          }
        }
        uVar20 = uVar20 + 1;
      } while (uVar20 != local_310);
      local_378 = (FILE *)CONCAT44(local_378._4_4_,local_308 + 0x1c);
    }
    iVar6 = local_2fc;
    iVar23 = local_300;
    uVar7 = local_304;
    uVar19 = 0;
    local_3b8 = (undefined8 *)((ulonglong)local_3b8 & 0xffffffff00000000);
    FUN_1400aff10(lVar11,local_304,uVar10,local_7c);
    local_3b8._0_4_ = uVar7;
    FUN_1400aff10(local_360,iVar6,uVar10,local_7c);
    puVar12 = local_358;
    iVar6 = iVar6 + uVar7;
    local_3b8._0_4_ = iVar6;
    FUN_1400aff10(local_358,iVar23,uVar10,local_7c);
    local_2e8 = 0x55844;
    local_2e4 = CONCAT44(0x1c,iVar23 + iVar6);
    uStack_2dc = CONCAT44(uVar7,(int)local_378);
    local_2d4 = iVar6;
    FUN_140113f48(uVar10,0,0);
    local_3b8 = (undefined8 *)((ulonglong)local_3b8._4_4_ << 0x20);
    FUN_1400aff10(&local_2e8,0x1c,uVar10,local_7c);
    FUN_140115998(uVar10);
    thunk_FUN_1401212e0(local_338);
    thunk_FUN_1401212e0(local_360);
    thunk_FUN_1401212e0(puVar12);
    thunk_FUN_1401212e0(uVar9);
  }
  if (DAT_1401c9640 != (local_70 ^ (ulonglong)auStack_3d8)) {
                    /* WARNING: Subroutine does not return */
    FUN_1400d3720(local_70 ^ (ulonglong)auStack_3d8);
  }
  return uVar19;
}

