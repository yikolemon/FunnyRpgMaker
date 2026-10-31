/* Ghidra pseudocode. Image: pe_00a0fad0_8664.exe Address: 1400affd6 */

undefined8
FUN_1400affd6(LPCWSTR param_1,longlong param_2,longlong param_3,longlong param_4,uint *param_5,
             int *param_6,int param_7,undefined8 param_8,undefined8 param_9,char param_10,
             undefined8 param_11)

{
  FILETIME *pFVar1;
  double dVar2;
  DWORD DVar3;
  FILETIME FVar4;
  FILETIME FVar5;
  FILETIME FVar6;
  int iVar7;
  int iVar8;
  uint uVar9;
  uint uVar10;
  BOOL BVar11;
  HANDLE hFindFile;
  longlong lVar12;
  FILE *_File;
  ulonglong uVar13;
  void *_DstBuf;
  longlong lVar14;
  WCHAR *pWVar15;
  uint uVar16;
  ulonglong uVar17;
  longlong lVar18;
  longlong lVar19;
  undefined1 auStack_598 [32];
  int *local_578;
  int *local_570;
  undefined4 local_568;
  undefined8 local_560;
  undefined8 local_558;
  char local_550;
  undefined8 local_548;
  uint local_534;
  longlong local_530;
  longlong local_528;
  ulonglong local_520;
  uint local_514;
  longlong local_510;
  longlong local_508;
  HANDLE local_500;
  longlong local_4f8;
  ulonglong local_4f0;
  FILETIME local_4e8;
  ulonglong local_4e0;
  int local_4d8;
  undefined4 uStack_4d4;
  int iStack_4d0;
  uint uStack_4cc;
  _WIN32_FIND_DATAW local_4c8;
  WCHAR local_278 [260];
  ulonglong local_70;
  
  local_70 = DAT_1401c9640 ^ (ulonglong)auStack_598;
  local_508 = param_3;
  hFindFile = FindFirstFileW(param_1,&local_4c8);
  FVar6 = local_4c8.ftLastWriteTime;
  FVar5 = local_4c8.ftLastAccessTime;
  FVar4 = local_4c8.ftCreationTime;
  DVar3 = local_4c8.dwFileAttributes;
  if (hFindFile != (HANDLE)0xffffffffffffffff) {
    uVar9 = param_6[1];
    iVar8 = param_6[2];
    lVar19 = (longlong)param_7 * 0x2c;
    local_528 = param_4;
    local_510 = param_2;
    iVar7 = FUN_1400afad2(local_4c8.cFileName,(ulonglong)uVar9 + param_2);
    param_6[1] = param_6[1] + iVar7;
    lVar12 = (ulonglong)param_5[3] + local_528;
    *(uint *)(lVar19 + lVar12) = uVar9;
    *(DWORD *)(lVar19 + 4 + lVar12) = DVar3;
    pFVar1 = (FILETIME *)(lVar19 + 8 + lVar12);
    *pFVar1 = FVar4;
    pFVar1[1] = FVar5;
    *(FILETIME *)(lVar19 + 0x18 + lVar12) = FVar6;
    *(int *)(lVar19 + 0x20 + lVar12) = iVar8;
    *(undefined8 *)(lVar19 + 0x24 + lVar12) = 0xffffffff00000000;
    FindClose(hFindFile);
    GetCurrentDirectoryW(0x104,local_278);
    SetCurrentDirectoryW(param_1);
    lVar12 = local_528;
    local_4d8 = (int)lVar19 + param_5[3];
    uStack_4cc = param_6[3];
    uVar17 = (ulonglong)uStack_4cc;
    uStack_4d4 = 0;
    if (*param_5 - 1 < 0xfffffffe) {
      uStack_4d4 = *(undefined4 *)(local_528 + 0x20 + (ulonglong)*param_5);
    }
    uVar13 = 0;
    iStack_4d0 = FUN_1400b0654(&DAT_140174404,0);
    uVar9 = param_6[2];
    *(undefined8 *)(local_508 + (ulonglong)uVar9) = CONCAT44(uStack_4d4,local_4d8);
    ((undefined8 *)(local_508 + (ulonglong)uVar9))[1] = CONCAT44(uStack_4cc,iStack_4d0);
    param_6[2] = param_6[2] + 0x10;
    param_6[3] = param_6[3] + iStack_4d0 * 0x2c;
    if (iStack_4d0 != 0) {
      local_500 = FindFirstFileW(L"*",&local_4c8);
      dVar2 = DAT_140164ee0;
      lVar18 = uVar17 + lVar12;
      lVar19 = local_510;
      local_4f8 = lVar18;
      do {
        pWVar15 = local_4c8.cFileName;
        iVar8 = FUN_14011ced0(pWVar15,L".");
        if (iVar8 != 0) {
          iVar8 = FUN_14011ced0(pWVar15,L"..");
          FVar5 = local_4c8.ftLastAccessTime;
          FVar4 = local_4c8.ftCreationTime;
          if (iVar8 != 0) {
            if ((local_4c8.dwFileAttributes & 0x10) == 0) {
              local_514 = local_4c8.dwFileAttributes;
              iVar8 = *param_6;
              local_4f0 = (ulonglong)(uint)param_6[1];
              local_4e8 = local_4c8.ftLastWriteTime;
              local_520 = (ulonglong)local_4c8.nFileSizeLow;
              local_4e0 = uVar13;
              iVar7 = FUN_1400afad2(pWVar15,lVar19 + local_4f0);
              param_6[1] = param_6[1] + iVar7;
              if (local_4c8.nFileSizeHigh == 0 && local_4c8.nFileSizeLow == 0) {
                uVar9 = 0xffffffff;
              }
              else {
                _File = (FILE *)FUN_140114300(pWVar15,&DAT_140173b08);
                FUN_140113f48(_File,0,2);
                uVar9 = FUN_1401144b0(_File);
                uVar17 = (ulonglong)uVar9;
                FUN_140113f48(_File,0,0);
                if ((param_10 == '\0') ||
                   (0x9fffff < CONCAT44(local_4c8.nFileSizeHigh,local_4c8.nFileSizeLow))) {
LAB_1400b0415:
                  uVar17 = local_520;
                  local_534 = 0xffffffff;
                  if (uVar9 == 0) {
                    uVar16 = 0;
                  }
                  else {
                    local_530 = CONCAT44(local_530._4_4_,iVar8);
                    uVar16 = 0;
                    do {
                      uVar10 = uVar9 - uVar16;
                      if (0xffffff < uVar10) {
                        uVar10 = 0x1000000;
                      }
                      uVar10 = uVar10 + 3 & 0x3fffffc;
                      local_578 = (int *)CONCAT44(local_578._4_4_,(int)uVar17 + uVar16);
                      FUN_1400aff7c(param_9,uVar10,_File,param_11);
                      FUN_140116e20(param_9,uVar10,1,param_8);
                      uVar16 = uVar10 + uVar16;
                    } while (uVar16 < uVar9);
                    lVar18 = local_4f8;
                    iVar8 = (int)local_530;
                  }
                }
                else {
                  uVar13 = FUN_14011cf50(local_4c8.cFileName);
                  if (4 < uVar13) {
                    pWVar15 = local_4c8.cFileName + (uVar13 - 3);
                    iVar7 = FUN_1400afa28(pWVar15,&DAT_140172d76);
                    if (iVar7 != 0) {
                      iVar7 = FUN_1400afa28(pWVar15,&DAT_14017331c);
                      if (iVar7 != 0) {
                        iVar7 = FUN_1400afa28(pWVar15,&DAT_140173326);
                        if (iVar7 != 0) {
                          iVar7 = FUN_1400afa28(pWVar15,&DAT_140173312);
                          if (iVar7 != 0) {
                            iVar7 = FUN_1400afa28(pWVar15,&DAT_140173c10);
                            if (iVar7 != 0) {
                              iVar7 = FUN_1400afa28(pWVar15,&DAT_1401733cc);
                              if (iVar7 != 0) {
                                iVar7 = FUN_1400afa28(pWVar15,&DAT_140172d64);
                                if (iVar7 != 0) {
                                  iVar7 = FUN_1400afa28(local_4c8.cFileName + (uVar13 - 4),L"jpeg");
                                  if (iVar7 != 0) goto LAB_1400b03a8;
                                }
                              }
                            }
                          }
                        }
                      }
                    }
                    goto LAB_1400b0415;
                  }
LAB_1400b03a8:
                  _DstBuf = (void *)_malloc_base(uVar9 * 3 + 0x40);
                  fread(_DstBuf,uVar17,1,_File);
                  local_530 = uVar17 + (longlong)_DstBuf;
                  uVar10 = FUN_1400b0832(_DstBuf,uVar9,uVar17 + (longlong)_DstBuf);
                  if (dVar2 < (double)uVar10 / (double)uVar17) {
                    FUN_140113f48(_File,0,0);
                    thunk_FUN_1401212e0(_DstBuf);
                    goto LAB_1400b0415;
                  }
                  uVar16 = uVar10 + 3 & 0xfffffffc;
                  local_578 = (int *)CONCAT44(local_578._4_4_,(int)local_520);
                  local_534 = uVar10;
                  FUN_1400aff10(local_530,uVar16,param_8,param_11);
                  thunk_FUN_1401212e0(_DstBuf);
                }
                FUN_140115998(_File);
                *param_6 = *param_6 + uVar16;
                lVar19 = local_510;
                lVar12 = local_528;
                uVar9 = local_534;
              }
              lVar14 = (longlong)(int)local_4e0 * 0x2c;
              *(int *)(lVar18 + lVar14) = (int)local_4f0;
              *(uint *)(lVar18 + 4 + lVar14) = local_514;
              pFVar1 = (FILETIME *)(lVar18 + 8 + lVar14);
              *pFVar1 = FVar4;
              pFVar1[1] = FVar5;
              *(FILETIME *)(lVar18 + 0x18 + lVar14) = local_4e8;
              *(int *)(lVar18 + 0x20 + lVar14) = iVar8;
              *(int *)(lVar18 + 0x24 + lVar14) = (int)local_520;
              *(uint *)(lVar18 + 0x28 + lVar14) = uVar9;
              uVar13 = local_4e0;
            }
            else {
              local_548 = param_11;
              local_550 = param_10;
              local_558 = param_9;
              local_560 = param_8;
              local_568 = (undefined4)uVar13;
              local_578 = &local_4d8;
              local_570 = param_6;
              FUN_1400affd6(pWVar15,lVar19,local_508,lVar12);
            }
            uVar13 = (ulonglong)((int)uVar13 + 1);
          }
        }
        BVar11 = FindNextFileW(local_500,&local_4c8);
      } while (BVar11 != 0);
      FindClose(local_500);
    }
    SetCurrentDirectoryW(local_278);
  }
  if (DAT_1401c9640 == (local_70 ^ (ulonglong)auStack_598)) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1400d3720(local_70 ^ (ulonglong)auStack_598);
}

