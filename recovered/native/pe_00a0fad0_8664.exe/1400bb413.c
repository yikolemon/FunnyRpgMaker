/* Ghidra pseudocode. Image: pe_00a0fad0_8664.exe Address: 1400bb413 */

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

int FUN_1400bb413(longlong *param_1,undefined8 param_2,int *param_3,int param_4,int param_5,
                 longlong *param_6,longlong *param_7,longlong *param_8,int *param_9,
                 undefined4 param_10,code *param_11)

{
  WCHAR *pWVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  longlong lVar6;
  HANDLE hFindFile;
  longlong lVar7;
  uint uVar8;
  code *pcVar9;
  longlong *plVar10;
  undefined8 *puVar11;
  undefined *puVar12;
  longlong lVar13;
  undefined1 auStack_3368 [32];
  undefined1 *local_3348;
  longlong *local_3340;
  longlong *local_3338;
  longlong *local_3330;
  int *local_3328;
  undefined4 local_3320;
  code *local_3318;
  int *local_3308;
  int local_3300;
  int local_32fc;
  longlong *local_32f8;
  int local_32f0;
  uint local_32ec;
  longlong local_32e8;
  longlong local_32e0;
  undefined8 local_32d8;
  longlong *local_32d0;
  longlong *local_32c8;
  longlong *local_32c0;
  undefined1 local_32b8 [4096];
  WCHAR local_22b8 [2048];
  undefined1 local_12b8 [4104];
  _WIN32_FIND_DATAW local_2b0;
  ulonglong local_60;
  undefined8 uStack_48;
  
  uStack_48 = 0x1400bb429;
  local_60 = DAT_1401c9640 ^ (ulonglong)auStack_3368;
  local_3308 = param_3;
  local_3300 = param_4;
  local_32e8 = FUN_14011cf50();
  local_32d8 = param_2;
  lVar6 = FUN_14011cf50(param_2);
  FUN_14011cf10(local_12b8,(longlong)param_1 + lVar6 * 2);
  lVar6 = FUN_14011cf50(local_12b8);
  local_32f8 = param_1;
  FUN_14011cf10(local_22b8,param_1);
  FUN_14011cea0(local_22b8,L"*");
  hFindFile = FindFirstFileW(local_22b8,&local_2b0);
  if (hFindFile == (HANDLE)0xffffffffffffffff) {
LAB_1400bb9dc:
    iVar4 = -1;
  }
  else {
    if (local_3308 != (int *)0x0) {
      local_32f0 = *local_3308;
    }
    local_32ec = (uint)(local_3308 != (int *)0x0);
    pWVar1 = local_2b0.cFileName;
    local_32e8 = local_32e8 + lVar6;
    local_32e0 = (longlong)(int)lVar6 * 2;
    local_32c8 = param_8 + 1;
    local_32c0 = param_6 + 1;
    local_32d0 = param_7 + 1;
    local_32fc = 0;
    pcVar9 = FindNextFileW_exref;
    iVar4 = local_3300;
    do {
      iVar3 = FUN_14011ced0(pWVar1,L".");
      if (iVar3 != 0) {
        iVar3 = FUN_14011ced0(pWVar1,L"..");
        if (iVar3 != 0) {
          uVar8 = local_2b0.dwFileAttributes & 0x10;
          if (uVar8 == 0 && param_8 != (longlong *)0x0) {
            lVar6 = FUN_140107f30(pWVar1,0x2e);
            puVar12 = (undefined *)(lVar6 + 2);
            if (lVar6 == 0) {
              puVar12 = &DAT_140174404;
            }
            lVar6 = *param_8;
            plVar10 = local_32c8;
            while (pcVar9 = FindNextFileW_exref, lVar6 != 0) {
              iVar3 = FUN_1401156b0(puVar12);
              if (iVar3 == 0) {
                pcVar9 = FindNextFileW_exref;
                if (plVar10[-1] != 0) goto LAB_1400bb62a;
                break;
              }
              lVar6 = *plVar10;
              plVar10 = plVar10 + 1;
            }
          }
          else {
LAB_1400bb62a:
            lVar6 = *param_6;
            plVar10 = local_32c0;
            while (lVar6 != 0) {
              iVar3 = FUN_14011ced0(pWVar1);
              pcVar9 = FindNextFileW_exref;
              if (iVar3 == 0) goto LAB_1400bb957;
              lVar6 = *plVar10;
              plVar10 = plVar10 + 1;
            }
            if (uVar8 != 0) {
LAB_1400bb6b5:
              if (param_5 != 1 || uVar8 == 0) goto LAB_1400bb7ad;
              FUN_14011cf10(local_22b8,local_32f8);
              FUN_14011cea0(local_22b8,pWVar1);
              FUN_14011cea0(local_22b8,L"\\");
              FUN_14011cf10(local_32b8,local_12b8);
              FUN_14011cea0(local_32b8,pWVar1);
              FUN_14011cea0(local_32b8,L"\\");
              local_3318 = param_11;
              local_3320 = param_10;
              local_3328 = param_9;
              local_3330 = param_8;
              local_3338 = param_7;
              local_3340 = param_6;
              local_3348 = (undefined1 *)CONCAT44(local_3348._4_4_,1);
              iVar3 = FUN_1400bb413(local_22b8,local_32d8,local_3308,iVar4);
              if (-1 < iVar3) {
                local_32fc = local_32fc + iVar3;
                goto LAB_1400bb7ad;
              }
              FindClose(hFindFile);
              if (local_3308 != (int *)0x0) {
LAB_1400bb992:
                iVar4 = *local_3308;
                if (local_32f0 < iVar4) {
                  lVar7 = (longlong)local_32f0;
                  lVar6 = lVar7 * 0x50;
                  do {
                    if (*(longlong *)(*(longlong *)(local_3308 + 2) + lVar6) != 0) {
                      thunk_FUN_1401212e0();
                      iVar4 = *local_3308;
                    }
                    lVar7 = lVar7 + 1;
                    lVar6 = lVar6 + 0x50;
                  } while (lVar7 < iVar4);
                }
              }
              goto LAB_1400bb9dc;
            }
            lVar6 = FUN_140107f30(pWVar1,0x2e);
            puVar12 = (undefined *)(lVar6 + 2);
            if (lVar6 == 0) {
              puVar12 = &DAT_140174404;
            }
            plVar10 = local_32d0;
            if (*param_7 != 0) {
              do {
                iVar3 = FUN_14011ced0(puVar12);
                pcVar9 = FindNextFileW_exref;
                if (iVar3 == 0) goto LAB_1400bb957;
                lVar6 = *plVar10;
                plVar10 = plVar10 + 1;
              } while (lVar6 != 0);
              goto LAB_1400bb6b5;
            }
LAB_1400bb7ad:
            if (param_11 != (code *)0x0) {
              local_3340 = local_32f8;
              local_3348 = local_12b8;
              (*param_11)(local_32ec,*param_9,param_10,pWVar1);
            }
            piVar2 = local_3308;
            if ((local_3308 != (int *)0x0) && (iVar4 == 0 || uVar8 == 0)) {
              lVar6 = *(longlong *)(local_3308 + 2);
              lVar13 = (longlong)*local_3308 * 0x50;
              puVar11 = (undefined8 *)(lVar6 + 0x40 + lVar13);
              *puVar11 = 0;
              puVar11[1] = 0;
              puVar11 = (undefined8 *)(lVar6 + 0x30 + lVar13);
              *puVar11 = 0;
              puVar11[1] = 0;
              puVar11 = (undefined8 *)(lVar6 + 0x20 + lVar13);
              *puVar11 = 0;
              puVar11[1] = 0;
              puVar11 = (undefined8 *)(lVar6 + 0x10 + lVar13);
              *puVar11 = 0;
              puVar11[1] = 0;
              *(undefined8 *)(lVar6 + lVar13) = 0;
              ((undefined8 *)(lVar6 + lVar13))[1] = 0;
              *(FILETIME *)(lVar6 + 0x30 + lVar13) = local_2b0.ftCreationTime;
              *(FILETIME *)(lVar6 + 0x38 + lVar13) = local_2b0.ftLastAccessTime;
              *(FILETIME *)(lVar6 + 0x40 + lVar13) = local_2b0.ftLastWriteTime;
              *(ulonglong *)(lVar6 + 0x20 + lVar13) =
                   CONCAT44(local_2b0.nFileSizeHigh,local_2b0.nFileSizeLow);
              *(DWORD *)(lVar6 + 0x48 + lVar13) = local_2b0.dwFileAttributes;
              *(uint *)(lVar6 + 0x28 + lVar13) = uVar8 >> 4;
              iVar4 = FUN_14011cf50(pWVar1);
              lVar7 = _malloc_base((longlong)
                                   (((ulonglong)(uint)((int)local_32e8 + iVar4) << 0x20) +
                                   0x300000000) >> 0x1f);
              *(longlong *)(lVar6 + lVar13) = lVar7;
              if (lVar7 == 0) {
                FindClose(hFindFile);
                goto LAB_1400bb992;
              }
              puVar11 = (undefined8 *)(lVar6 + lVar13);
              lVar6 = (longlong)iVar4;
              puVar11[2] = lVar7 + lVar6 * 2 + 2;
              puVar11[3] = local_32e0 + 4 + lVar7 + lVar6 * 2;
              FUN_14011cf10(lVar7,pWVar1);
              FUN_14011cf10(puVar11[2],local_12b8);
              FUN_14011cf10(puVar11[3],local_32f8);
              uVar5 = FUN_1400bba75(*puVar11,lVar6 * 2);
              *(undefined4 *)(puVar11 + 1) = uVar5;
              *piVar2 = *piVar2 + 1;
              iVar4 = local_3300;
            }
            local_32fc = local_32fc + 1;
            *param_9 = *param_9 + 1;
            pcVar9 = FindNextFileW_exref;
          }
        }
      }
LAB_1400bb957:
      iVar3 = (*pcVar9)(hFindFile,&local_2b0);
    } while (iVar3 != 0);
    FindClose(hFindFile);
    iVar4 = local_32fc;
  }
  if (DAT_1401c9640 != (local_60 ^ (ulonglong)auStack_3368)) {
                    /* WARNING: Subroutine does not return */
    FUN_1400d3720(local_60 ^ (ulonglong)auStack_3368);
  }
  return iVar4;
}

