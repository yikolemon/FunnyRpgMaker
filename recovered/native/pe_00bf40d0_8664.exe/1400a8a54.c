/* Ghidra pseudocode. Image: pe_00bf40d0_8664.exe Address: 1400a8a54 */

void FUN_1400a8a54(undefined8 *param_1,undefined8 *param_2)

{
  LPCWSTR lpFileName;
  byte bVar1;
  BOOL BVar2;
  int iVar3;
  __acrt_ptd *p_Var4;
  ushort *puVar5;
  LPCWSTR pWVar6;
  undefined8 uVar7;
  HANDLE hFindFile;
  LPVOID pvVar8;
  ushort uVar9;
  longlong lVar10;
  longlong *plVar11;
  longlong lVar12;
  longlong *plVar13;
  short *psVar14;
  ulonglong uVar15;
  ulonglong uVar16;
  longlong *plVar17;
  undefined1 auStackY_2f8 [32];
  longlong *local_2c8;
  longlong *plStack_2c0;
  undefined8 local_2b8;
  short *local_2b0;
  undefined8 *local_2a8;
  _WIN32_FIND_DATAW local_298;
  longlong local_48;
  ulonglong local_40;
  
  local_40 = DAT_14012ea80 ^ (ulonglong)auStackY_2f8;
  local_2a8 = param_2;
  if (param_2 == (undefined8 *)0x0) {
    p_Var4 = FUN_140095e5c();
    *(undefined4 *)p_Var4 = 0x16;
    FUN_1400a0ea0();
  }
  else {
    *param_2 = 0;
    puVar5 = (ushort *)*param_1;
    local_2c8 = (longlong *)0x0;
    plStack_2c0 = (longlong *)0x0;
    plVar11 = (longlong *)0x0;
    plVar13 = (longlong *)0x0;
    local_2b8 = 0;
    while (uVar15 = 0, puVar5 != (ushort *)0x0) {
      local_48 = CONCAT26(local_48._6_2_,0x3f002a);
      pWVar6 = (LPCWSTR)FUN_1400a7150(puVar5,(ushort *)&local_48);
      lpFileName = (LPCWSTR)*param_1;
      if (pWVar6 == (LPCWSTR)0x0) {
        uVar7 = FUN_1400a8e54((longlong)lpFileName,0,0,(longlong *)&local_2c8);
        plVar13 = local_2c8;
        plVar11 = plStack_2c0;
        if ((int)uVar7 != 0) {
          plVar11 = local_2c8;
          if (local_2c8 != plStack_2c0) {
            do {
              FUN_1400a1290((LPVOID)*plVar11);
              plVar11 = plVar11 + 1;
            } while (plVar11 != plStack_2c0);
          }
          goto LAB_1400a8d62;
        }
      }
      else {
        while ((pWVar6 != lpFileName &&
               ((0x2d < (ushort)(*pWVar6 + L'￑') ||
                ((0x200000000801U >> ((ulonglong)(ushort)(*pWVar6 + L'￑') & 0x3f) & 1) == 0))))) {
          pWVar6 = pWVar6 + -1;
        }
        if ((*pWVar6 != L':') || (pWVar6 == lpFileName + 1)) {
          uVar9 = *pWVar6 + L'￑';
          if ((0x2d < uVar9) || (bVar1 = 1, (0x200000000801U >> ((ulonglong)uVar9 & 0x3f) & 1) == 0)
             ) {
            bVar1 = 0;
          }
          FUN_1400b3c00((undefined1 (*) [32])&local_298,0,0x250);
          hFindFile = FindFirstFileExW(lpFileName,FindExInfoStandard,&local_298,
                                       FindExSearchNameMatch,(LPVOID)0x0,0);
          if (hFindFile != (HANDLE)0xffffffffffffffff) {
            lVar12 = (longlong)plVar11 - (longlong)plVar13 >> 3;
            do {
              if (((local_298.cFileName[0] != L'.') ||
                  ((local_298.cFileName[1] != L'\0' &&
                   ((local_298.cFileName[1] != L'.' || (local_298.cFileName[2] != L'\0')))))) &&
                 (uVar7 = FUN_1400a8e54((longlong)local_298.cFileName,(longlong)lpFileName,
                                        -(ulonglong)bVar1 &
                                        ((longlong)pWVar6 - (longlong)lpFileName >> 1) + 1U,
                                        (longlong *)&local_2c8), (int)uVar7 != 0)) {
                FindClose(hFindFile);
                goto LAB_1400a8cc6;
              }
              BVar2 = FindNextFileW(hFindFile,&local_298);
              plVar11 = plStack_2c0;
              plVar13 = local_2c8;
            } while (BVar2 != 0);
            lVar10 = (longlong)plStack_2c0 - (longlong)local_2c8 >> 3;
            if (lVar12 != lVar10) {
              FUN_14009aaf0((undefined1 *)(local_2c8 + lVar12),lVar10 - lVar12,8,&LAB_1400a8fdc);
            }
            FindClose(hFindFile);
            goto LAB_1400a8c8b;
          }
        }
        uVar7 = FUN_1400a8e54((longlong)lpFileName,0,0,(longlong *)&local_2c8);
        plVar11 = plStack_2c0;
        plVar13 = local_2c8;
        if ((int)uVar7 != 0) {
LAB_1400a8cc6:
          plVar13 = local_2c8;
          plVar11 = local_2c8;
          if (local_2c8 != plStack_2c0) {
            do {
              FUN_1400a1290((LPVOID)*plVar11);
              plVar11 = plVar11 + 1;
            } while (plVar11 != plStack_2c0);
          }
          goto LAB_1400a8d62;
        }
      }
LAB_1400a8c8b:
      param_1 = param_1 + 1;
      puVar5 = (ushort *)*param_1;
    }
    uVar16 = ((longlong)plVar11 - (longlong)plVar13 >> 3) + 1;
    for (plVar17 = plVar13; plVar17 != plVar11; plVar17 = plVar17 + 1) {
      lVar12 = -1;
      do {
        lVar12 = lVar12 + 1;
      } while (*(short *)(*plVar17 + lVar12 * 2) != 0);
      uVar15 = uVar15 + 1 + lVar12;
    }
    pvVar8 = __acrt_allocate_buffer_for_argv(uVar16,uVar15,2);
    if (pvVar8 == (LPVOID)0x0) {
      FUN_1400a1290((LPVOID)0x0);
      for (plVar17 = plVar13; plVar17 != plVar11; plVar17 = plVar17 + 1) {
        FUN_1400a1290((LPVOID)*plVar17);
      }
LAB_1400a8d62:
      FUN_1400a1290(plVar13);
    }
    else {
      psVar14 = (short *)((longlong)pvVar8 + uVar16 * 8);
      local_2b0 = psVar14;
      if (plVar13 != plVar11) {
        local_48 = (longlong)pvVar8 - (longlong)plVar13;
        plVar17 = plVar13;
        do {
          lVar12 = -1;
          do {
            lVar10 = lVar12;
            lVar12 = lVar10 + 1;
          } while (*(short *)(*plVar17 + lVar12 * 2) != 0);
          lVar10 = lVar10 + 2;
          iVar3 = FUN_1400a6f60(psVar14,uVar15 - ((longlong)psVar14 - (longlong)local_2b0 >> 1),
                                *plVar17,lVar10);
          if (iVar3 != 0) {
                    /* WARNING: Subroutine does not return */
            _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
          }
          *(short **)(local_48 + (longlong)plVar17) = psVar14;
          plVar17 = plVar17 + 1;
          psVar14 = psVar14 + lVar10;
        } while (plVar17 != plVar11);
      }
      *local_2a8 = pvVar8;
      FUN_1400a1290((LPVOID)0x0);
      for (plVar17 = plVar13; plVar17 != plVar11; plVar17 = plVar17 + 1) {
        FUN_1400a1290((LPVOID)*plVar17);
      }
      FUN_1400a1290(plVar13);
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_140086440(local_40 ^ (ulonglong)auStackY_2f8);
}

