/* Ghidra pseudocode. Image: pe_00a0fad0_8664.exe Address: 1400b39b6 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8
FUN_1400b39b6(undefined8 param_1,longlong param_2,uint param_3,char param_4,undefined8 param_5)

{
  WCHAR *pWVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  longlong lVar7;
  FILETIME FVar8;
  FILETIME FVar9;
  DWORD DVar10;
  UINT UVar11;
  int iVar12;
  DWORD DVar13;
  uint uVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  longlong lVar17;
  undefined8 *puVar18;
  undefined8 *puVar19;
  HANDLE pvVar20;
  ulonglong uVar21;
  longlong lVar22;
  longlong lVar23;
  undefined8 uVar24;
  ulonglong uVar25;
  ulonglong uVar26;
  undefined8 *puVar27;
  undefined1 auVar28 [16];
  undefined1 auStack_438 [32];
  undefined8 *local_418;
  longlong *local_410;
  undefined4 local_408;
  undefined8 local_400;
  undefined8 local_3f8;
  char local_3f0;
  undefined1 *local_3e8;
  char local_3d1;
  ulonglong local_3d0;
  longlong local_3c8;
  longlong local_3c0;
  undefined8 *local_3b8;
  undefined8 *local_3b0;
  undefined8 local_3a8;
  longlong local_3a0;
  undefined8 local_398;
  ulonglong local_390;
  ulonglong local_388;
  longlong local_380;
  FILETIME local_378;
  ulonglong local_370;
  HANDLE local_368;
  longlong local_360;
  longlong local_358;
  undefined8 local_350;
  longlong local_348;
  undefined8 local_340;
  undefined8 local_338;
  longlong local_330;
  undefined8 local_328;
  undefined8 local_31c;
  undefined8 local_314;
  longlong local_30c;
  longlong lStack_304;
  longlong local_2fc;
  ulonglong local_2f4;
  _WIN32_FIND_DATAW local_2ec;
  undefined1 local_9c [12];
  ulonglong local_90;
  
  local_90 = DAT_1401c9640 ^ (ulonglong)auStack_438;
  local_3d1 = param_4;
  FUN_1400b2294(param_5,local_9c);
  uVar15 = _malloc_base(0x1000000);
  uVar16 = FUN_140114300(param_1,&DAT_140173b02);
  local_31c = 0xffffffff00065844;
  local_314 = 0x30;
  local_30c = -1;
  lStack_304 = -1;
  local_2fc = -1;
  UVar11 = GetACP();
  local_2f4 = (ulonglong)UVar11;
  SetFileApisToANSI();
  local_418 = (undefined8 *)0x0;
  FUN_1400b2404(&local_31c,0x30,uVar16,local_9c);
  lVar17 = _calloc_base(1,0x1000000);
  uVar24 = 0xffffffff;
  if (((lVar17 != 0) &&
      (puVar18 = (undefined8 *)_calloc_base(1,0x1000000), puVar18 != (undefined8 *)0x0)) &&
     (puVar19 = (undefined8 *)_calloc_base(1,0x1000000), puVar19 != (undefined8 *)0x0)) {
    local_360 = 0;
    local_3a0 = param_2;
    iVar12 = FUN_1400afad2(&DAT_140174404,lVar17);
    local_358 = (longlong)iVar12;
    *puVar18 = 0;
    puVar18[1] = 0x10;
    puVar18[6] = 0;
    *(undefined1 (*) [16])(puVar18 + 4) = (undefined1  [16])0x0;
    *(undefined1 (*) [16])(puVar18 + 2) = (undefined1  [16])0x0;
    puVar18[7] = 0xffffffffffffffff;
    local_340 = 0;
    local_338 = 0xffffffffffffffff;
    local_330 = (longlong)(int)param_3;
    local_328 = 0x40;
    *puVar19 = 0;
    puVar19[1] = 0xffffffffffffffff;
    puVar19[2] = local_330;
    puVar19[3] = 0x40;
    dVar6 = DAT_140164ee0;
    dVar5 = _UNK_140140ec8;
    dVar4 = _DAT_140140ec0;
    uVar3 = DAT_140140eb0._4_4_;
    uVar2 = (undefined4)DAT_140140eb0;
    local_350 = 0x20;
    local_348 = local_330 * 0x40 + 0x40;
    local_3c0 = lVar17;
    local_3b8 = puVar19;
    local_3b0 = puVar18;
    if ((int)param_3 < 1) {
      local_3d0 = 0x30;
    }
    else {
      local_3d0 = (ulonglong)param_3;
      uVar25 = 0;
      lVar22 = local_3a0;
      local_3a8 = uVar16;
      local_398 = uVar15;
      do {
        DVar13 = GetFileAttributesW(*(LPCWSTR *)(lVar22 + uVar25 * 8));
        if (DVar13 != 0xffffffff) {
          if ((DVar13 & 0x10) == 0) {
            pvVar20 = FindFirstFileW(*(LPCWSTR *)(lVar22 + uVar25 * 8),&local_2ec);
            DVar10 = local_2ec.nFileSizeLow;
            DVar13 = local_2ec.nFileSizeHigh;
            FVar9 = local_2ec.ftLastAccessTime;
            FVar8 = local_2ec.ftCreationTime;
            lVar7 = local_358;
            lVar23 = local_360;
            if (pvVar20 != (HANDLE)0xffffffffffffffff) {
              local_378 = local_2ec.ftLastWriteTime;
              local_388 = (ulonglong)local_2ec.dwFileAttributes;
              local_368 = pvVar20;
              iVar12 = FUN_1400afad2(local_2ec.cFileName,local_358 + lVar17);
              local_380 = lVar7;
              local_358 = iVar12 + lVar7;
              puVar27 = (undefined8 *)CONCAT44(DVar13,DVar10);
              if (puVar27 == (undefined8 *)0x0) {
                uVar21 = 0xffffffffffffffff;
              }
              else {
                uVar15 = FUN_140114300(*(undefined8 *)(local_3a0 + uVar25 * 8),&DAT_140173b08);
                FUN_140113fe4(uVar15,0,2);
                uVar21 = FUN_140114548(uVar15);
                FUN_140113fe4(uVar15,0,0);
                if ((local_3d1 == '\0') || ((undefined8 *)0x9fffff < puVar27)) {
LAB_1400b3ea9:
                  uVar24 = local_398;
                  uVar16 = local_3a8;
                  local_390 = 0xffffffffffffffff;
                  if (uVar21 == 0) {
                    uVar26 = 0;
                  }
                  else {
                    local_3c8 = lVar23;
                    uVar26 = 0;
                    local_370 = uVar25;
                    do {
                      uVar25 = uVar21 - uVar26;
                      if (0xffffff < uVar25) {
                        uVar25 = 0x1000000;
                      }
                      uVar25 = (ulonglong)((int)uVar25 + 3U & 0x3fffffc);
                      local_418 = (undefined8 *)(uVar26 + (longlong)puVar27);
                      FUN_1400b246c(uVar24,uVar25,uVar15,local_9c);
                      FUN_1400b21f0(uVar24,uVar25,uVar16);
                      uVar26 = uVar25 + uVar26;
                      uVar25 = local_370;
                      lVar23 = local_3c8;
                      lVar17 = local_3c0;
                    } while (uVar26 < uVar21);
                  }
                }
                else {
                  uVar14 = FUN_14011cf50(local_2ec.cFileName);
                  if (4 < uVar14) {
                    pWVar1 = local_2ec.cFileName + (uVar14 - 3);
                    iVar12 = FUN_1400afa28(pWVar1,&DAT_140172d76);
                    if (((iVar12 == 0) ||
                        (iVar12 = FUN_1400afa28(pWVar1,&DAT_14017331c), iVar12 == 0)) ||
                       ((iVar12 = FUN_1400afa28(pWVar1,&DAT_140173326), iVar12 == 0 ||
                        ((((iVar12 = FUN_1400afa28(pWVar1,&DAT_140173312), iVar12 == 0 ||
                           (iVar12 = FUN_1400afa28(pWVar1,&DAT_140173c10), iVar12 == 0)) ||
                          (iVar12 = FUN_1400afa28(pWVar1,&DAT_1401733cc), iVar12 == 0)) ||
                         ((iVar12 = FUN_1400afa28(pWVar1,&DAT_140172d64), iVar12 == 0 ||
                          (iVar12 = FUN_1400afa28(local_2ec.cFileName +
                                                  ((ulonglong)(uVar14 - 3) - 1),L"jpeg"),
                          iVar12 == 0)))))))) goto LAB_1400b3ea9;
                  }
                  lVar22 = _malloc_base(uVar21 * 3 + 0x40);
                  FUN_1400b2242(lVar22,uVar21,uVar15);
                  local_3c8 = lVar22 + uVar21;
                  uVar14 = FUN_1400b2b96(lVar22,uVar21 & 0xffffffff,lVar22 + uVar21);
                  auVar28._8_4_ = (int)(uVar21 >> 0x20);
                  auVar28._0_8_ = uVar21;
                  auVar28._12_4_ = uVar3;
                  if (dVar6 < (double)uVar14 /
                              ((auVar28._8_8_ - dVar5) +
                              ((double)CONCAT44(uVar2,(int)uVar21) - dVar4))) {
                    FUN_140113fe4(uVar15,0,0);
                    thunk_FUN_1401212e0(lVar22);
                    goto LAB_1400b3ea9;
                  }
                  uVar26 = (ulonglong)(uVar14 + 3 & 0xfffffffc);
                  local_418 = puVar27;
                  local_390 = (ulonglong)uVar14;
                  FUN_1400b2404(local_3c8,uVar26,local_3a8,local_9c);
                  thunk_FUN_1401212e0(lVar22);
                }
                FUN_140115998(uVar15);
                local_360 = uVar26 + lVar23;
                uVar21 = local_390;
                puVar19 = local_3b8;
                puVar18 = local_3b0;
              }
              puVar18[uVar25 * 8 + 8] = local_380;
              puVar18[uVar25 * 8 + 9] = local_388;
              *(FILETIME *)(puVar18 + uVar25 * 8 + 10) = FVar8;
              ((FILETIME *)(puVar18 + uVar25 * 8 + 10))[1] = FVar9;
              *(FILETIME *)(puVar18 + uVar25 * 8 + 0xc) = local_378;
              puVar18[uVar25 * 8 + 0xd] = lVar23;
              puVar18[uVar25 * 8 + 0xe] = puVar27;
              puVar18[uVar25 * 8 + 0xf] = uVar21;
              FindClose(local_368);
              lVar22 = local_3a0;
              uVar16 = local_3a8;
            }
          }
          else {
            local_3f0 = local_3d1;
            local_3f8 = local_398;
            local_408 = (undefined4)uVar25;
            local_410 = &local_360;
            local_418 = &local_340;
            local_400 = uVar16;
            local_3e8 = local_9c;
            FUN_1400b24c4(*(undefined8 *)(lVar22 + uVar25 * 8),lVar17,puVar19,puVar18);
          }
        }
        uVar25 = uVar25 + 1;
      } while (uVar25 != local_3d0);
      local_3d0 = local_360 + 0x30;
      uVar15 = local_398;
    }
    lVar22 = local_348;
    uVar24 = local_350;
    lVar17 = local_358;
    local_418 = (undefined8 *)0x0;
    FUN_1400b2404(local_3c0,local_358,uVar16,local_9c);
    puVar19 = local_3b0;
    local_418 = (undefined8 *)lVar17;
    FUN_1400b2404(local_3b0,lVar22,uVar16,local_9c);
    puVar18 = local_3b8;
    lVar22 = lVar22 + lVar17;
    local_418 = (undefined8 *)lVar22;
    FUN_1400b2404(local_3b8,uVar24,uVar16,local_9c);
    local_31c = CONCAT44((int)uVar24 + (int)lVar22,0x65844);
    local_314 = 0x30;
    local_30c = local_3d0;
    uVar24 = 0;
    lStack_304 = lVar17;
    local_2fc = lVar22;
    FUN_140113fe4(uVar16,0,0);
    local_418 = (undefined8 *)0x0;
    FUN_1400b2404(&local_31c,0x30,uVar16,local_9c);
    FUN_140115998(uVar16);
    thunk_FUN_1401212e0(local_3c0);
    thunk_FUN_1401212e0(puVar19);
    thunk_FUN_1401212e0(puVar18);
    thunk_FUN_1401212e0(uVar15);
  }
  if (DAT_1401c9640 != (local_90 ^ (ulonglong)auStack_438)) {
                    /* WARNING: Subroutine does not return */
    FUN_1400d3720(local_90 ^ (ulonglong)auStack_438);
  }
  return uVar24;
}

