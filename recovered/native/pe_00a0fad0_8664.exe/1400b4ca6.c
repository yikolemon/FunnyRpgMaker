/* Ghidra pseudocode. Image: pe_00a0fad0_8664.exe Address: 1400b4ca6 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8
FUN_1400b4ca6(undefined4 param_1,LPCWSTR param_2,longlong param_3,longlong *param_4,
             longlong *param_5,longlong *param_6,longlong *param_7,int param_8,undefined8 param_9,
             undefined8 param_10,byte param_11,undefined1 param_12,char param_13,byte param_14,
             undefined8 param_15,undefined8 param_16,char param_17,undefined8 param_18,
             longlong param_19)

{
  WCHAR *pWVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  int iVar7;
  int iVar8;
  uint uVar9;
  BOOL BVar10;
  HANDLE hFindFile;
  undefined8 uVar11;
  ulonglong uVar12;
  longlong lVar13;
  longlong lVar14;
  longlong lVar15;
  longlong lVar16;
  longlong lVar17;
  ulonglong uVar18;
  ulonglong uVar19;
  undefined1 uVar20;
  byte bVar21;
  longlong lVar22;
  longlong *plVar23;
  bool bVar24;
  undefined1 auVar25 [16];
  undefined1 auStack_678 [32];
  longlong *local_658;
  longlong *local_650;
  longlong *local_648;
  longlong local_640;
  undefined8 local_638;
  undefined8 local_630;
  byte local_628;
  undefined1 local_620;
  char local_618;
  byte local_610;
  undefined8 local_608;
  undefined8 local_600;
  char local_5f8;
  undefined8 local_5f0;
  longlong local_5e8;
  int local_5d4;
  undefined1 *local_5d0;
  undefined4 local_5c4;
  longlong local_5c0;
  longlong local_5b8;
  longlong local_5b0;
  ulonglong local_5a8;
  ulonglong local_5a0;
  undefined8 local_598;
  longlong local_590;
  HANDLE local_588;
  longlong local_580;
  longlong local_578;
  longlong local_570;
  longlong local_568;
  longlong *local_560;
  longlong local_558;
  ulonglong local_550;
  FILETIME local_548;
  FILETIME FStack_540;
  FILETIME local_538;
  longlong local_530;
  longlong *local_528;
  ulonglong local_520;
  longlong lStack_518;
  longlong local_510;
  longlong lStack_508;
  longlong local_500;
  longlong lStack_4f8;
  undefined1 local_4ef [7];
  _WIN32_FIND_DATAW local_4e8;
  WCHAR local_298 [260];
  ulonglong local_90;
  
  local_90 = DAT_1401c9640 ^ (ulonglong)auStack_678;
  hFindFile = FindFirstFileW(param_2,&local_4e8);
  if (hFindFile != (HANDLE)0xffffffffffffffff) {
    local_558 = param_7[1];
    local_548 = local_4e8.ftCreationTime;
    FStack_540 = local_4e8.ftLastAccessTime;
    local_538 = local_4e8.ftLastWriteTime;
    local_550 = (ulonglong)local_4e8.dwFileAttributes;
    local_530 = param_7[2];
    local_528 = (longlong *)0x0;
    local_520 = 0xffffffffffffffff;
    lStack_518 = -1;
    local_5c4 = param_1;
    iVar7 = FUN_1400b43bc(local_4e8.cFileName,local_558 + param_3);
    param_7[1] = param_7[1] + (longlong)iVar7;
    FUN_140135ff0((longlong)param_5 + (longlong)param_8 * 0x48 + param_6[3],&local_558,0x48);
    FindClose(hFindFile);
    GetCurrentDirectoryW(0x104,local_298);
    SetCurrentDirectoryW(param_2);
    local_510 = (longlong)param_8 * 0x48 + param_6[3];
    local_590 = param_7[3];
    if (*param_6 - 1U < 0xfffffffffffffffe) {
      lStack_508 = *(longlong *)((longlong)param_5 + *param_6 + 0x28);
    }
    else {
      lStack_508 = 0;
    }
    lStack_4f8 = local_590;
    iVar7 = FUN_1400b5ab6(&DAT_140174404,0);
    local_500 = (longlong)iVar7;
    lVar13 = param_7[2];
    plVar23 = (longlong *)((longlong)param_4 + lVar13);
    *plVar23 = local_510;
    plVar23[1] = lStack_508;
    plVar23 = (longlong *)((longlong)param_4 + lVar13 + 0x10);
    *plVar23 = local_500;
    plVar23[1] = lStack_4f8;
    lVar13 = param_7[2];
    param_7[2] = lVar13 + 0x20;
    param_7[3] = param_7[3] + local_500 * 0x48;
    if (iVar7 != 0) {
      local_570 = lVar13 + (longlong)param_4;
      local_588 = FindFirstFileW(L"*",&local_4e8);
      dVar6 = DAT_140164ee0;
      dVar5 = _UNK_140140ec8;
      dVar4 = _DAT_140140ec0;
      uVar3 = DAT_140140eb0._4_4_;
      uVar2 = (undefined4)DAT_140140eb0;
      local_578 = param_19 + 0xc;
      local_5d0 = local_4ef;
      if (param_17 != '\0') {
        local_5d0 = (undefined1 *)0x0;
      }
      local_5a0 = (ulonglong)param_14 << 0xb;
      local_5b8 = (ulonglong)param_14 * 0x400;
      local_5a8 = (ulonglong)((uint)param_14 << 0xd | 0x220);
      local_5b0 = (ulonglong)param_14 * -0x400;
      local_590 = local_590 + (longlong)param_5;
      local_5d4 = 0;
      local_568 = param_3;
      local_560 = param_4;
      do {
        pWVar1 = local_4e8.cFileName;
        iVar7 = FUN_14011ced0(pWVar1,L".");
        if ((iVar7 != 0) && (iVar8 = FUN_14011ced0(pWVar1,L".."), iVar7 = local_5d4, iVar8 != 0)) {
          if ((local_4e8.dwFileAttributes & 0x10) == 0) {
            lVar13 = param_7[1];
            local_548 = local_4e8.ftCreationTime;
            FStack_540 = local_4e8.ftLastAccessTime;
            local_538 = local_4e8.ftLastWriteTime;
            local_530 = *param_7;
            plVar23 = (longlong *)CONCAT44(local_4e8.nFileSizeHigh,local_4e8.nFileSizeLow);
            local_520 = 0xffffffffffffffff;
            lStack_518 = -1;
            local_558 = lVar13;
            local_550 = (ulonglong)local_4e8.dwFileAttributes;
            local_528 = plVar23;
            if (*(char *)(param_19 + 0x100c) == '\x01') {
              FUN_14011cf10(local_578,pWVar1);
              *(int *)(param_19 + 4) = *(int *)(param_19 + 4) + 1;
              FUN_1400b5cca(param_19,0);
              lVar13 = param_7[1];
            }
            iVar7 = FUN_1400b43bc(pWVar1,lVar13 + param_3);
            param_7[1] = param_7[1] + (longlong)iVar7;
            if (param_17 == '\0') {
              local_638 = param_18;
              local_650 = param_5;
              local_658 = &local_558;
              local_648 = param_4;
              local_640 = param_3;
              uVar11 = FUN_1400b4554(local_5c4,param_15,param_16,local_570);
              FUN_1400b464a(param_18,uVar11,local_4ef);
            }
            if (plVar23 != (longlong *)0x0) {
              uVar11 = FUN_140114300(pWVar1,&DAT_140173b08);
              bVar24 = false;
              FUN_140113fe4(uVar11,0,2);
              uVar12 = FUN_140114548(uVar11);
              FUN_140113fe4(uVar11,0,0);
              uVar9 = FUN_14011cf50(pWVar1);
              bVar21 = 0;
              if (4 < uVar9) {
                pWVar1 = pWVar1 + (uVar9 - 3);
                iVar7 = FUN_1400afa28(pWVar1,&DAT_140172d76);
                if (iVar7 == 0) {
                  bVar24 = true;
                  bVar21 = 1;
                }
                else {
                  iVar7 = FUN_1400afa28(pWVar1,&DAT_14017331c);
                  if ((((((iVar7 == 0) || (iVar7 = FUN_1400afa28(pWVar1,&DAT_140173326), iVar7 == 0)
                         ) || (iVar7 = FUN_1400afa28(pWVar1,&DAT_140173312), iVar7 == 0)) ||
                       ((iVar7 = FUN_1400afa28(pWVar1,&DAT_140173c10), iVar7 == 0 ||
                        (iVar7 = FUN_1400afa28(pWVar1,&DAT_140173c08), iVar7 == 0)))) ||
                      (iVar7 = FUN_1400afa28(pWVar1,&DAT_140173b5a), iVar7 == 0)) ||
                     ((((iVar7 = FUN_1400afa28(pWVar1,&DAT_1401733cc), iVar7 == 0 ||
                        (iVar7 = FUN_1400afa28(pWVar1,&DAT_140172d6c), iVar7 == 0)) ||
                       ((iVar7 = FUN_1400afa28(pWVar1,&DAT_140172fee), iVar7 == 0 ||
                        (((iVar7 = FUN_1400afa28(pWVar1,&DAT_140172d64), iVar7 == 0 ||
                          (iVar7 = FUN_1400afa28(pWVar1,&DAT_1401733ea), iVar7 == 0)) ||
                         (iVar7 = FUN_1400afa28(pWVar1,&DAT_140173b52), iVar7 == 0)))))) ||
                      ((iVar7 = FUN_1400afa28(pWVar1,&DAT_140173102), iVar7 == 0 ||
                       (iVar7 = FUN_1400afa28(local_4e8.cFileName + ((ulonglong)(uVar9 - 3) - 1),
                                              L"jpeg"), iVar7 == 0)))))) {
                    bVar21 = 1;
                  }
                  else {
                    bVar21 = 0;
                  }
                  iVar7 = FUN_1400afa28(pWVar1,&DAT_140173b52);
                  if (iVar7 == 0) {
                    bVar24 = true;
                  }
                  else {
                    iVar7 = FUN_1400afa28(pWVar1,&DAT_140173102);
                    bVar24 = iVar7 == 0;
                  }
                }
              }
              if (param_13 != '\0') {
                bVar21 = 1;
              }
              if (param_14 == 0) {
                bVar21 = 0;
              }
              if ((param_11 == 0) || ((longlong *)0x9fffff < plVar23 && !bVar24)) {
LAB_1400b55e7:
                if ((param_11 & bVar21) != 0) {
                  lVar14 = _calloc_base(1,uVar12 + 0x20);
                  FUN_1400b2242(lVar14,uVar12,uVar11);
                  uVar18 = local_5a0;
                  lVar22 = uVar12 - local_5a0;
                  if (param_14 == 0xff || (uVar12 < local_5a0 || lVar22 == 0)) {
                    local_598 = uVar11;
                    lVar17 = _calloc_base(1,uVar12 * 2 + 0x220);
                    lStack_518 = FUN_1400d2220(lVar14,uVar12,lVar17);
                    uVar12 = lStack_518 + 3U & 0xfffffffffffffffc;
                    uVar18 = uVar12;
                    lVar13 = lVar17;
                    local_658 = plVar23;
                  }
                  else {
                    local_598 = uVar11;
                    lVar13 = _calloc_base(1,local_5a8);
                    lVar17 = local_5b8;
                    FUN_140135ff0(lVar13,lVar14,local_5b8);
                    FUN_140135ff0(lVar17 + lVar13,uVar12 + lVar14 + local_5b0,lVar17);
                    lVar16 = uVar18 + lVar13;
                    lVar15 = FUN_1400d2220(lVar13,uVar18,lVar16);
                    lStack_518 = lVar15;
                    FUN_1400b4baa(lVar16,lVar15,param_9,local_5d0);
                    uVar18 = lVar15 + lVar22 + 3U & 0xfffffffffffffffc;
                    uVar12 = uVar18 - lVar15;
                    lVar17 = lVar14 + lVar17;
                    local_658 = (longlong *)((longlong)plVar23 + lVar15);
                  }
                  FUN_1400b4baa(lVar17,uVar12,param_9);
                  thunk_FUN_1401212e0(lVar14);
                  goto LAB_1400b57f7;
                }
                if (uVar12 == 0) {
                  uVar18 = 0;
                }
                else {
                  uVar18 = 0;
                  do {
                    uVar19 = uVar12 - uVar18;
                    if (0xffffff < uVar19) {
                      uVar19 = 0x1000000;
                    }
                    uVar19 = (ulonglong)((int)uVar19 + 3U & 0x3fffffc);
                    FUN_1401366a0(param_10,0,uVar19);
                    local_658 = (longlong *)(uVar18 + (longlong)plVar23);
                    FUN_1400b4c30(param_10,uVar19,uVar11);
                    FUN_1400b21f0(param_10,uVar19,param_9);
                    uVar18 = uVar19 + uVar18;
                  } while (uVar18 < uVar12);
                }
              }
              else {
                if (4 < uVar9 && !bVar24) {
                  pWVar1 = local_4e8.cFileName + (uVar9 - 3);
                  iVar7 = FUN_1400afa28(pWVar1,&DAT_140172d76);
                  if (((((iVar7 == 0) || (iVar7 = FUN_1400afa28(pWVar1,&DAT_14017331c), iVar7 == 0))
                       || (iVar7 = FUN_1400afa28(pWVar1,&DAT_140173326), iVar7 == 0)) ||
                      (((iVar7 = FUN_1400afa28(pWVar1,&DAT_140173312), iVar7 == 0 ||
                        (iVar7 = FUN_1400afa28(pWVar1,&DAT_140173c10), iVar7 == 0)) ||
                       ((iVar7 = FUN_1400afa28(pWVar1,&DAT_140173c08), iVar7 == 0 ||
                        ((iVar7 = FUN_1400afa28(pWVar1,&DAT_1401733cc), iVar7 == 0 ||
                         (iVar7 = FUN_1400afa28(pWVar1,&DAT_140172d6c), iVar7 == 0)))))))) ||
                     ((iVar7 = FUN_1400afa28(pWVar1,&DAT_140172fee), iVar7 == 0 ||
                      ((iVar7 = FUN_1400afa28(pWVar1,&DAT_140172d64), iVar7 == 0 ||
                       (iVar7 = FUN_1400afa28(local_4e8.cFileName + ((ulonglong)(uVar9 - 3) - 1),
                                              L"jpeg"), iVar7 == 0)))))) goto LAB_1400b55e7;
                }
                lVar13 = _malloc_base(uVar12 * 3 + 0x40);
                FUN_1400b2242(lVar13,uVar12,uVar11);
                if (*(char *)(param_19 + 0x100c) == '\x01') {
                  FUN_1400b5cca(param_19,1);
                  uVar20 = *(undefined1 *)(param_19 + 0x100c);
                }
                else {
                  uVar20 = 0;
                }
                local_5c0 = lVar13 + uVar12;
                local_658 = (longlong *)CONCAT71(local_658._1_7_,param_12);
                uVar9 = FUN_1400b5d94(lVar13,uVar12 & 0xffffffff,local_5c0,uVar20);
                uVar18 = local_5a0;
                uVar19 = (ulonglong)uVar9;
                if ((!bVar24) &&
                   (auVar25._8_4_ = (int)(uVar12 >> 0x20), auVar25._0_8_ = uVar12,
                   auVar25._12_4_ = uVar3,
                   dVar6 < (double)uVar19 /
                           ((auVar25._8_8_ - dVar5) + ((double)CONCAT44(uVar2,(int)uVar12) - dVar4))
                   )) {
                  FUN_140113fe4(uVar11,0,0);
                  thunk_FUN_1401212e0(lVar13);
                  goto LAB_1400b55e7;
                }
                local_520 = uVar19;
                if (bVar21 == 0) {
                  uVar18 = (ulonglong)(uVar9 + 3 & 0xfffffffc);
                  local_658 = plVar23;
                  local_598 = uVar11;
                  FUN_1400b4baa(local_5c0,uVar18,param_9);
                }
                else {
                  if ((param_14 == 0xff) || (uVar9 <= (uint)local_5a0)) {
                    local_598 = uVar11;
                    lVar14 = _calloc_base(1,uVar9 * 2 + 0x220);
                    lStack_518 = FUN_1400d2220(local_5c0,uVar19,lVar14);
                    uVar12 = lStack_518 + 3U & 0xfffffffffffffffc;
                    uVar18 = uVar12;
                    lVar22 = lVar14;
                    local_658 = plVar23;
                  }
                  else {
                    local_598 = uVar11;
                    lVar17 = _calloc_base(1,local_5a8);
                    lVar22 = local_5b8;
                    lVar14 = local_5c0;
                    FUN_140135ff0(lVar17,local_5c0,local_5b8);
                    FUN_140135ff0(lVar17 + lVar22,uVar19 + lVar14 + local_5b0,lVar22);
                    local_580 = lVar17;
                    lVar16 = FUN_1400d2220(lVar17,uVar18,lVar17 + uVar18);
                    lStack_518 = lVar16;
                    FUN_1400b4baa(lVar17 + uVar18,lVar16,param_9,local_5d0);
                    uVar18 = (uVar19 - uVar18) + lVar16 + 3 & 0xfffffffffffffffc;
                    uVar12 = uVar18 - lVar16;
                    lVar14 = lVar14 + local_5b8;
                    lVar22 = local_580;
                    local_658 = (longlong *)((longlong)plVar23 + lVar16);
                  }
                  FUN_1400b4baa(lVar14,uVar12,param_9);
                  thunk_FUN_1401212e0(lVar22);
                }
LAB_1400b57f7:
                thunk_FUN_1401212e0(lVar13);
                uVar11 = local_598;
              }
              FUN_140115998(uVar11);
              *param_7 = *param_7 + uVar18;
              param_4 = local_560;
              param_3 = local_568;
            }
            iVar7 = local_5d4;
            FUN_140135ff0(local_590 + (longlong)local_5d4 * 0x48,&local_558,0x48);
          }
          else {
            local_5e8 = param_19;
            local_5f0 = param_18;
            local_5f8 = param_17;
            local_600 = param_16;
            local_608 = param_15;
            local_610 = param_14;
            local_618 = param_13;
            local_620 = param_12;
            local_628 = param_11;
            local_630 = param_10;
            local_640 = CONCAT44(local_640._4_4_,local_5d4);
            local_650 = &local_510;
            local_658 = param_5;
            local_648 = param_7;
            local_638 = param_9;
            FUN_1400b4ca6(local_5c4,pWVar1,param_3,param_4);
          }
          local_5d4 = iVar7 + 1;
        }
        BVar10 = FindNextFileW(local_588,&local_4e8);
      } while (BVar10 != 0);
      FindClose(local_588);
    }
    SetCurrentDirectoryW(local_298);
  }
  if (DAT_1401c9640 != (local_90 ^ (ulonglong)auStack_678)) {
                    /* WARNING: Subroutine does not return */
    FUN_1400d3720(local_90 ^ (ulonglong)auStack_678);
  }
  return 0;
}

