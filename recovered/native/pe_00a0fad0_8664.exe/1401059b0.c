/* Ghidra pseudocode. Image: pe_00a0fad0_8664.exe Address: 1401059b0 */

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_1401059b0(LPCWSTR param_1,DWORD param_2,byte *param_3,int param_4,byte *param_5,int param_6
                  ,UINT param_7)

{
  int *piVar1;
  longlong lVar2;
  int cchCount1;
  int dwCmpFlags;
  LPCWSTR lpLocaleName;
  BOOL BVar3;
  int iVar4;
  int iVar5;
  size_t sVar6;
  BYTE *pBVar7;
  LPCWSTR lpString1;
  undefined4 *puVar8;
  ulonglong uVar9;
  ulonglong uVar10;
  undefined1 *puVar11;
  undefined1 *puVar12;
  undefined4 *puVar13;
  undefined1 auStackY_c8 [32];
  int local_78 [2];
  LPCWSTR local_70;
  _cpinfo local_68;
  ulonglong local_50;
  
  puVar12 = auStackY_c8;
  local_50 = DAT_1401c9640 ^ (ulonglong)local_78;
  local_78[1] = param_2;
  local_70 = param_1;
  if (param_4 < 1) {
    if (param_4 < -1) goto LAB_140105cb3;
  }
  else {
    sVar6 = __strncnt((char *)param_3,(longlong)param_4);
    param_4 = (int)sVar6;
  }
  if (param_6 < 1) {
    puVar12 = auStackY_c8;
    if (param_6 < -1) goto LAB_140105cb3;
  }
  else {
    sVar6 = __strncnt((char *)param_5,(longlong)param_6);
    param_6 = (int)sVar6;
  }
  if ((param_4 == 0) || (param_6 == 0)) {
    puVar12 = auStackY_c8;
    if ((param_4 == param_6) ||
       (((puVar12 = auStackY_c8, 1 < param_6 || (puVar12 = auStackY_c8, 1 < param_4)) ||
        (BVar3 = GetCPInfo(param_7,&local_68), puVar12 = auStackY_c8, BVar3 == 0))))
    goto LAB_140105cb3;
    if (0 < param_4) {
      puVar12 = auStackY_c8;
      if (1 < local_68.MaxCharSize) {
        pBVar7 = local_68.LeadByte;
        while (((puVar12 = auStackY_c8, local_68.LeadByte[0] != 0 &&
                (puVar12 = auStackY_c8, pBVar7[1] != 0)) &&
               ((*param_3 < *pBVar7 || (puVar12 = auStackY_c8, pBVar7[1] < *param_3))))) {
          pBVar7 = pBVar7 + 2;
          local_68.LeadByte[0] = *pBVar7;
        }
      }
      goto LAB_140105cb3;
    }
    if (0 < param_6) {
      puVar12 = auStackY_c8;
      if (1 < local_68.MaxCharSize) {
        pBVar7 = local_68.LeadByte;
        while (((puVar12 = auStackY_c8, local_68.LeadByte[0] != 0 &&
                (puVar12 = auStackY_c8, pBVar7[1] != 0)) &&
               ((*param_5 < *pBVar7 || (puVar12 = auStackY_c8, pBVar7[1] < *param_5))))) {
          pBVar7 = pBVar7 + 2;
          local_68.LeadByte[0] = *pBVar7;
        }
      }
      goto LAB_140105cb3;
    }
  }
  iVar4 = MultiByteToWideChar(param_7,9,(LPCSTR)param_3,param_4,(LPWSTR)0x0,0);
  local_78[0] = iVar4;
  puVar12 = auStackY_c8;
  if (iVar4 == 0) goto LAB_140105cb3;
  uVar9 = (longlong)iVar4 * 2 + 0x10;
  uVar10 = 0;
  if ((ulonglong)((longlong)iVar4 * 2) < uVar9) {
    uVar10 = uVar9;
  }
  puVar12 = auStackY_c8;
  if (uVar10 == 0) goto LAB_140105cb3;
  if (uVar10 < 0x401) {
    uVar9 = uVar10 + 0xf;
    if (uVar9 <= uVar10) {
      uVar9 = 0xffffffffffffff0;
    }
    lVar2 = -(uVar9 & 0xfffffffffffffff0);
    puVar12 = auStackY_c8 + lVar2;
    if ((undefined4 *)((longlong)local_78 + lVar2) == (undefined4 *)0x0) goto LAB_140105cb3;
    *(undefined4 *)((longlong)local_78 + lVar2) = 0xcccc;
    lpString1 = (LPCWSTR)((longlong)&local_68 + lVar2);
    puVar12 = auStackY_c8 + lVar2;
  }
  else {
    lpString1 = (LPCWSTR)_malloc_base(uVar10);
    puVar12 = auStackY_c8;
    iVar4 = local_78[0];
    if (lpString1 != (LPCWSTR)0x0) {
      lpString1[0] = L'\xdddd';
      lpString1[1] = L'\0';
      lpString1 = lpString1 + 8;
      puVar12 = auStackY_c8;
    }
  }
  if (lpString1 == (LPCWSTR)0x0) goto LAB_140105cb3;
  *(int *)(puVar12 + 0x28) = iVar4;
  *(LPCWSTR *)(puVar12 + 0x20) = lpString1;
  *(undefined8 *)(puVar12 + -8) = 0x140105bc2;
  iVar4 = MultiByteToWideChar(param_7,1,(LPCSTR)param_3,param_4,*(LPWSTR *)(puVar12 + 0x20),
                              *(int *)(puVar12 + 0x28));
  puVar11 = puVar12;
  if (iVar4 != 0) {
    *(undefined4 *)(puVar12 + 0x28) = 0;
    *(undefined8 *)(puVar12 + 0x20) = 0;
    *(undefined8 *)(puVar12 + -8) = 0x140105be8;
    iVar4 = MultiByteToWideChar(param_7,9,(LPCSTR)param_5,param_6,*(LPWSTR *)(puVar12 + 0x20),
                                *(int *)(puVar12 + 0x28));
    if (iVar4 != 0) {
      uVar9 = (longlong)iVar4 * 2 + 0x10;
      uVar10 = 0;
      if ((ulonglong)((longlong)iVar4 * 2) < uVar9) {
        uVar10 = uVar9;
      }
      if (uVar10 != 0) {
        if (uVar10 < 0x401) {
          uVar9 = uVar10 + 0xf;
          if (uVar9 <= uVar10) {
            uVar9 = 0xffffffffffffff0;
          }
          *(undefined8 *)(puVar12 + -8) = 0x140105c34;
          lVar2 = -(uVar9 & 0xfffffffffffffff0);
          puVar11 = puVar12 + lVar2;
          puVar8 = (undefined4 *)(puVar12 + lVar2 + 0x50);
          if (puVar8 == (undefined4 *)0x0) goto LAB_140105c9f;
          *puVar8 = 0xcccc;
          puVar12 = puVar12 + lVar2;
LAB_140105c5f:
          puVar13 = puVar8 + 4;
          puVar11 = puVar12;
        }
        else {
          *(undefined8 *)(puVar12 + -8) = 0x140105c51;
          puVar8 = (undefined4 *)_malloc_base(uVar10);
          puVar13 = (undefined4 *)0x0;
          if (puVar8 != (undefined4 *)0x0) {
            *puVar8 = 0xdddd;
            goto LAB_140105c5f;
          }
        }
        if (puVar13 != (undefined4 *)0x0) {
          *(int *)(puVar11 + 0x28) = iVar4;
          piVar1 = puVar13 + -4;
          *(undefined4 **)(puVar11 + 0x20) = puVar13;
          *(undefined8 *)(puVar11 + -8) = 0x140105c8a;
          iVar5 = MultiByteToWideChar(param_7,1,(LPCSTR)param_5,param_6,*(LPWSTR *)(puVar11 + 0x20),
                                      *(int *)(puVar11 + 0x28));
          lpLocaleName = local_70;
          dwCmpFlags = local_78[1];
          cchCount1 = local_78[0];
          if (iVar5 != 0) {
            *(undefined8 *)(puVar11 + 0x40) = 0;
            *(undefined8 *)(puVar11 + 0x38) = 0;
            *(undefined8 *)(puVar11 + 0x30) = 0;
            *(int *)(puVar11 + 0x28) = iVar4;
            *(undefined4 **)(puVar11 + 0x20) = puVar13;
            *(undefined8 *)(puVar11 + -8) = 0x140105cff;
            CompareStringEx(lpLocaleName,dwCmpFlags,lpString1,cchCount1,*(LPCWSTR *)(puVar11 + 0x20)
                            ,*(int *)(puVar11 + 0x28),*(LPNLSVERSIONINFO *)(puVar11 + 0x30),
                            *(LPVOID *)(puVar11 + 0x38),*(LPARAM *)(puVar11 + 0x40));
            if (*piVar1 == 0xdddd) {
              *(undefined8 *)(puVar11 + -8) = 0x140105d12;
              thunk_FUN_1401212e0(piVar1);
            }
            puVar12 = puVar11;
            if (*(int *)(lpString1 + -8) == 0xdddd) {
              *(undefined8 *)(puVar11 + -8) = 0x140105d24;
              thunk_FUN_1401212e0(lpString1 + -8);
            }
            goto LAB_140105cb3;
          }
          if (*piVar1 == 0xdddd) {
            *(undefined8 *)(puVar11 + -8) = 0x140105c9f;
            thunk_FUN_1401212e0(piVar1);
          }
        }
      }
    }
  }
LAB_140105c9f:
  puVar12 = puVar11;
  if (*(int *)(lpString1 + -8) == 0xdddd) {
    *(undefined8 *)(puVar11 + -8) = 0x140105cb1;
    thunk_FUN_1401212e0(lpString1 + -8);
  }
LAB_140105cb3:
  uVar9 = local_50 ^ (ulonglong)local_78;
                    /* WARNING: Subroutine does not return */
  *(undefined **)(puVar12 + -8) = &UNK_140105cbf;
  FUN_1400d3720(uVar9);
}

