/* Ghidra pseudocode. Image: pe_00a0fad0_8664.exe Address: 1400b24c4 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8
FUN_1400b24c4(LPCWSTR param_1,longlong param_2,longlong param_3,longlong param_4,longlong *param_5,
             longlong *param_6,int param_7,undefined8 param_8,undefined8 param_9,char param_10,
             undefined8 param_11)

{
  FILETIME *pFVar1;
  WCHAR *pWVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  FILETIME FVar8;
  FILETIME FVar9;
  DWORD DVar10;
  DWORD DVar11;
  int iVar12;
  uint uVar13;
  BOOL BVar14;
  HANDLE hFindFile;
  longlong lVar15;
  FILETIME FVar16;
  ulonglong uVar17;
  FILETIME FVar18;
  longlong lVar19;
  ulonglong uVar20;
  longlong lVar21;
  longlong lVar22;
  longlong *plVar23;
  ulonglong uVar24;
  undefined1 auVar25 [16];
  undefined1 auStack_5b8 [32];
  longlong *local_598;
  longlong *local_590;
  undefined4 local_588;
  undefined8 local_580;
  undefined8 local_578;
  char local_570;
  undefined8 local_568;
  FILETIME local_560;
  longlong local_558;
  longlong local_550;
  longlong local_548;
  longlong local_540;
  longlong local_538;
  longlong local_530;
  FILETIME local_528;
  HANDLE local_520;
  ulonglong local_518;
  ulonglong local_510;
  longlong local_508;
  longlong lStack_500;
  longlong local_4f8;
  longlong lStack_4f0;
  _WIN32_FIND_DATAW local_4e8;
  WCHAR local_298 [260];
  ulonglong local_90;
  
  local_90 = DAT_1401c9640 ^ (ulonglong)auStack_5b8;
  local_538 = param_3;
  hFindFile = FindFirstFileW(param_1,&local_4e8);
  FVar9 = local_4e8.ftLastAccessTime;
  FVar8 = local_4e8.ftCreationTime;
  if (hFindFile != (HANDLE)0xffffffffffffffff) {
    local_560 = local_4e8.ftLastWriteTime;
    uVar24 = (ulonglong)local_4e8.dwFileAttributes;
    lVar21 = param_6[1];
    lVar19 = param_6[2];
    lVar22 = (longlong)param_7 * 0x40;
    local_550 = param_2;
    iVar12 = FUN_1400afad2(local_4e8.cFileName,param_2 + lVar21);
    param_6[1] = param_6[1] + (longlong)iVar12;
    lVar15 = param_5[3] + param_4;
    *(longlong *)(lVar22 + lVar15) = lVar21;
    *(ulonglong *)(lVar22 + 8 + lVar15) = uVar24;
    pFVar1 = (FILETIME *)(lVar22 + 0x10 + lVar15);
    *pFVar1 = FVar8;
    pFVar1[1] = FVar9;
    *(FILETIME *)(lVar22 + 0x20 + lVar15) = local_560;
    *(longlong *)(lVar22 + 0x28 + lVar15) = lVar19;
    *(undefined8 *)(lVar22 + 0x30 + lVar15) = 0;
    *(undefined8 *)(lVar22 + 0x38 + lVar15) = 0xffffffffffffffff;
    FindClose(hFindFile);
    GetCurrentDirectoryW(0x104,local_298);
    SetCurrentDirectoryW(param_1);
    local_508 = lVar22 + param_5[3];
    local_548 = param_6[3];
    if (*param_5 - 1U < 0xfffffffffffffffe) {
      lStack_500 = *(longlong *)(param_4 + 0x28 + *param_5);
    }
    else {
      lStack_500 = 0;
    }
    uVar24 = 0;
    local_540 = param_4;
    lStack_4f0 = local_548;
    iVar12 = FUN_1400b0654(&DAT_140174404,0);
    lVar19 = local_550;
    local_4f8 = (longlong)iVar12;
    lVar21 = param_6[2];
    plVar23 = (longlong *)(local_538 + lVar21);
    *plVar23 = local_508;
    plVar23[1] = lStack_500;
    plVar23 = (longlong *)(local_538 + 0x10 + lVar21);
    *plVar23 = local_4f8;
    plVar23[1] = lStack_4f0;
    param_6[2] = _DAT_140164f10 + param_6[2];
    param_6[3] = local_4f8 * 0x40 + param_6[3];
    if (iVar12 != 0) {
      local_520 = FindFirstFileW(L"*",&local_4e8);
      dVar7 = DAT_140164ee0;
      dVar6 = _UNK_140140ec8;
      dVar5 = _DAT_140140ec0;
      uVar4 = DAT_140140eb0._4_4_;
      uVar3 = (undefined4)DAT_140140eb0;
      local_548 = local_548 + local_540;
      do {
        pWVar2 = local_4e8.cFileName;
        iVar12 = FUN_14011ced0(pWVar2,L".");
        if (iVar12 != 0) {
          iVar12 = FUN_14011ced0(pWVar2,L"..");
          DVar11 = local_4e8.nFileSizeLow;
          DVar10 = local_4e8.nFileSizeHigh;
          FVar9 = local_4e8.ftLastAccessTime;
          FVar8 = local_4e8.ftCreationTime;
          if (iVar12 != 0) {
            if ((local_4e8.dwFileAttributes & 0x10) == 0) {
              lVar21 = *param_6;
              local_530 = param_6[1];
              local_528 = local_4e8.ftLastWriteTime;
              local_518 = (ulonglong)local_4e8.dwFileAttributes;
              local_510 = uVar24;
              iVar12 = FUN_1400afad2(pWVar2,lVar19 + local_530);
              param_6[1] = param_6[1] + (longlong)iVar12;
              plVar23 = (longlong *)CONCAT44(DVar10,DVar11);
              if (plVar23 == (longlong *)0x0) {
                uVar24 = 0xffffffffffffffff;
              }
              else {
                FVar16 = (FILETIME)FUN_140114300(pWVar2,&DAT_140173b08);
                FUN_140113fe4(FVar16,0,2);
                uVar17 = FUN_140114548(FVar16);
                FUN_140113fe4(FVar16,0,0);
                if ((param_10 == '\0') || ((longlong *)0x9fffff < plVar23)) {
LAB_1400b294f:
                  uVar24 = 0xffffffffffffffff;
                  if (uVar17 == 0) {
                    uVar20 = 0;
                  }
                  else {
                    uVar20 = 0;
                    local_560 = FVar16;
                    local_558 = lVar21;
                    do {
                      uVar24 = uVar17 - uVar20;
                      if (0xffffff < uVar24) {
                        uVar24 = 0x1000000;
                      }
                      uVar24 = (ulonglong)((int)uVar24 + 3U & 0x3fffffc);
                      local_598 = (longlong *)(uVar20 + (longlong)plVar23);
                      FUN_1400b246c(param_9,uVar24,local_560,param_11);
                      FUN_1400b21f0(param_9,uVar24,param_8);
                      uVar20 = uVar24 + uVar20;
                    } while (uVar20 < uVar17);
                    uVar24 = 0xffffffffffffffff;
                    FVar16 = local_560;
                    lVar21 = local_558;
                  }
                }
                else {
                  uVar13 = FUN_14011cf50(pWVar2);
                  if (4 < uVar13) {
                    pWVar2 = pWVar2 + (uVar13 - 3);
                    iVar12 = FUN_1400afa28(pWVar2,&DAT_140172d76);
                    if (iVar12 != 0) {
                      iVar12 = FUN_1400afa28(pWVar2,&DAT_14017331c);
                      if (iVar12 != 0) {
                        iVar12 = FUN_1400afa28(pWVar2,&DAT_140173326);
                        if (iVar12 != 0) {
                          iVar12 = FUN_1400afa28(pWVar2,&DAT_140173312);
                          if (iVar12 != 0) {
                            iVar12 = FUN_1400afa28(pWVar2,&DAT_140173c10);
                            if (iVar12 != 0) {
                              iVar12 = FUN_1400afa28(pWVar2,&DAT_1401733cc);
                              if (iVar12 != 0) {
                                iVar12 = FUN_1400afa28(pWVar2,&DAT_140172d64);
                                if (iVar12 != 0) {
                                  iVar12 = FUN_1400afa28(local_4e8.cFileName +
                                                         ((ulonglong)(uVar13 - 3) - 1),L"jpeg");
                                  if (iVar12 != 0) goto LAB_1400b28cc;
                                }
                              }
                            }
                          }
                        }
                      }
                    }
                    goto LAB_1400b294f;
                  }
LAB_1400b28cc:
                  FVar18 = (FILETIME)_malloc_base(uVar17 * 3 + 0x40);
                  FUN_1400b2242(FVar18,uVar17,FVar16);
                  local_560 = FVar18;
                  local_558 = (longlong)FVar18 + uVar17;
                  uVar13 = FUN_1400b2b96(FVar18,uVar17 & 0xffffffff,(longlong)FVar18 + uVar17);
                  uVar24 = (ulonglong)uVar13;
                  auVar25._8_4_ = (int)(uVar17 >> 0x20);
                  auVar25._0_8_ = uVar17;
                  auVar25._12_4_ = uVar4;
                  if (dVar7 < (double)uVar24 /
                              ((auVar25._8_8_ - dVar6) +
                              ((double)CONCAT44(uVar3,(int)uVar17) - dVar5))) {
                    FUN_140113fe4(FVar16,0,0);
                    thunk_FUN_1401212e0(local_560);
                    goto LAB_1400b294f;
                  }
                  uVar20 = (ulonglong)(uVar13 + 3 & 0xfffffffc);
                  local_598 = plVar23;
                  FUN_1400b2404(local_558,uVar20,param_8,param_11);
                  thunk_FUN_1401212e0(local_560);
                }
                FUN_140115998(FVar16);
                *param_6 = *param_6 + uVar20;
                lVar19 = local_550;
              }
              lVar15 = (longlong)(int)local_510 * 0x40;
              *(longlong *)(local_548 + lVar15) = local_530;
              *(ulonglong *)(local_548 + 8 + lVar15) = local_518;
              pFVar1 = (FILETIME *)(local_548 + 0x10 + lVar15);
              *pFVar1 = FVar8;
              pFVar1[1] = FVar9;
              *(FILETIME *)(local_548 + 0x20 + lVar15) = local_528;
              *(longlong *)(local_548 + 0x28 + lVar15) = lVar21;
              *(longlong **)(local_548 + 0x30 + lVar15) = plVar23;
              *(ulonglong *)(local_548 + 0x38 + lVar15) = uVar24;
              uVar24 = local_510;
            }
            else {
              local_570 = param_10;
              local_578 = param_9;
              local_580 = param_8;
              local_588 = (undefined4)uVar24;
              local_598 = &local_508;
              local_590 = param_6;
              local_568 = param_11;
              FUN_1400b24c4(pWVar2,lVar19,local_538,local_540);
            }
            uVar24 = (ulonglong)((int)uVar24 + 1);
          }
        }
        BVar14 = FindNextFileW(local_520,&local_4e8);
      } while (BVar14 != 0);
      FindClose(local_520);
    }
    SetCurrentDirectoryW(local_298);
  }
  if (DAT_1401c9640 == (local_90 ^ (ulonglong)auStack_5b8)) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1400d3720(local_90 ^ (ulonglong)auStack_5b8);
}

