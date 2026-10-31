/* Ghidra pseudocode. Image: pe_00bf40d0_8664.exe Address: 1400ac4d0 */

int FUN_1400ac4d0(uint param_1,LPWSTR param_2,uint param_3)

{
  WCHAR *pWVar1;
  byte *pbVar2;
  char cVar3;
  char cVar4;
  byte bVar5;
  BOOL BVar6;
  uint uVar7;
  __acrt_ptd *p_Var8;
  ulonglong uVar9;
  LPWSTR pWVar10;
  undefined7 extraout_var;
  LPWSTR pWVar11;
  WCHAR WVar12;
  uint nNumberOfBytesToRead;
  int iVar13;
  ulonglong uVar14;
  longlong lVar15;
  LPWSTR lpBuffer;
  DWORD local_res20 [2];
  DWORD local_68 [2];
  HANDLE local_60;
  ulonglong local_58;
  ulonglong local_50;
  LPWSTR local_48;
  
  if (param_1 == 0xfffffffe) {
    p_Var8 = FUN_140095e80();
    *(undefined4 *)p_Var8 = 0;
    p_Var8 = FUN_140095e5c();
    *(undefined4 *)p_Var8 = 9;
    return -1;
  }
  pWVar10 = (LPWSTR)0x0;
  iVar13 = 0;
  if ((-1 < (int)param_1) && (param_1 < DAT_1401437a0)) {
    uVar9 = (ulonglong)(param_1 & 0x3f);
    local_50 = 1;
    local_58 = (ulonglong)(longlong)(int)param_1 >> 6;
    lVar15 = (&DAT_1401433a0)[local_58];
    if ((*(byte *)(lVar15 + 0x38 + uVar9 * 0x48) & 1) != 0) {
      if (param_3 < 0x80000000) {
        if ((param_3 == 0) || ((*(byte *)(lVar15 + 0x38 + uVar9 * 0x48) & 2) != 0)) {
          return 0;
        }
        if (param_2 != (LPWSTR)0x0) {
          local_60 = *(HANDLE *)(lVar15 + 0x28 + uVar9 * 0x48);
          cVar3 = *(char *)(lVar15 + 0x39 + uVar9 * 0x48);
          if (cVar3 == '\x01') {
            if ((~(byte)param_3 & 1) == 0) goto LAB_1400ac5ca;
            uVar7 = param_3 >> 1;
            if (uVar7 < 4) {
              uVar7 = 4;
            }
            pWVar10 = _malloc_base((ulonglong)uVar7);
            FUN_1400a1290((LPVOID)0x0);
            FUN_1400a1290((LPVOID)0x0);
            if (pWVar10 != (LPWSTR)0x0) {
              lVar15 = FUN_1400a9134(param_1,(LARGE_INTEGER)0x0,1);
              *(longlong *)((&DAT_1401433a0)[local_58] + 0x30 + uVar9 * 0x48) = lVar15;
              pWVar11 = pWVar10;
              goto LAB_1400ac66c;
            }
            p_Var8 = FUN_140095e5c();
            *(undefined4 *)p_Var8 = 0xc;
            p_Var8 = FUN_140095e80();
            *(undefined4 *)p_Var8 = 8;
          }
          else {
            pWVar11 = param_2;
            uVar7 = param_3;
            if ((cVar3 == '\x02') && ((~(byte)param_3 & 1) == 0)) {
LAB_1400ac5ca:
              p_Var8 = FUN_140095e80();
              *(undefined4 *)p_Var8 = 0;
              p_Var8 = FUN_140095e5c();
              *(undefined4 *)p_Var8 = 0x16;
              FUN_1400a0ea0();
            }
            else {
LAB_1400ac66c:
              lpBuffer = pWVar11;
              nNumberOfBytesToRead = uVar7;
              if (((*(byte *)((&DAT_1401433a0)[local_58] + 0x38 + uVar9 * 0x48) & 0x48) != 0) &&
                 ((cVar4 = *(char *)((&DAT_1401433a0)[local_58] + 0x3a + uVar9 * 0x48),
                  cVar4 != '\n' && (uVar7 != 0)))) {
                *(char *)pWVar11 = cVar4;
                nNumberOfBytesToRead = uVar7 - 1;
                lpBuffer = (LPWSTR)((longlong)pWVar11 + 1);
                iVar13 = 1;
                *(undefined1 *)((&DAT_1401433a0)[local_58] + 0x3a + uVar9 * 0x48) = 10;
                if ((cVar3 != '\0') &&
                   ((cVar4 = *(char *)((&DAT_1401433a0)[local_58] + 0x3b + uVar9 * 0x48),
                    cVar4 != '\n' && (nNumberOfBytesToRead != 0)))) {
                  *(char *)lpBuffer = cVar4;
                  lpBuffer = pWVar11 + 1;
                  nNumberOfBytesToRead = uVar7 - 2;
                  *(undefined1 *)((&DAT_1401433a0)[local_58] + 0x3b + uVar9 * 0x48) = 10;
                  iVar13 = 2;
                  if ((cVar3 == '\x01') &&
                     ((cVar4 = *(char *)((&DAT_1401433a0)[local_58] + 0x3c + uVar9 * 0x48),
                      cVar4 != '\n' && (iVar13 = 2, nNumberOfBytesToRead != 0)))) {
                    *(char *)lpBuffer = cVar4;
                    iVar13 = 3;
                    lpBuffer = (LPWSTR)((longlong)pWVar11 + 3);
                    nNumberOfBytesToRead = uVar7 - 3;
                    *(undefined1 *)((&DAT_1401433a0)[local_58] + 0x3c + uVar9 * 0x48) = 10;
                  }
                }
              }
              local_68[0] = 0;
              local_48 = pWVar11;
              bVar5 = FUN_1400b03b0(param_1);
              if ((((int)CONCAT71(extraout_var,bVar5) == 0) ||
                  (-1 < *(char *)((&DAT_1401433a0)[local_58] + 0x38 + uVar9 * 0x48))) ||
                 (BVar6 = GetConsoleMode(local_60,local_68), BVar6 == 0)) {
                local_50 = local_50 & 0xffffffffffffff00;
LAB_1400ac7a2:
                local_res20[0] = 0;
                BVar6 = ReadFile(local_60,lpBuffer,nNumberOfBytesToRead,local_res20,
                                 (LPOVERLAPPED)0x0);
                if ((BVar6 != 0) && (uVar7 = local_res20[0], local_res20[0] <= param_3)) {
LAB_1400ac7e4:
                  iVar13 = iVar13 + uVar7;
                  if (*(char *)((&DAT_1401433a0)[local_58] + 0x38 + uVar9 * 0x48) < '\0') {
                    if (cVar3 == '\x02') {
                      uVar14 = (ulonglong)(longlong)iVar13 >> 1;
                      if ((char)local_50 == '\0') {
                        iVar13 = FUN_1400acc60(param_1,local_48,uVar14);
                      }
                      else {
                        pWVar1 = local_48;
                        for (pWVar11 = local_48; pWVar11 < local_48 + uVar14;
                            pWVar11 = (LPWSTR)((longlong)pWVar11 + lVar15)) {
                          WVar12 = *pWVar11;
                          if (WVar12 == L'\x1a') {
                            pbVar2 = (byte *)((&DAT_1401433a0)[local_58] + 0x38 + uVar9 * 0x48);
                            *pbVar2 = *pbVar2 | 2;
                            break;
                          }
                          if (((WVar12 == L'\r') && (pWVar11 + 1 < local_48 + uVar14)) &&
                             (pWVar11[1] == L'\n')) {
                            WVar12 = L'\n';
                            lVar15 = 4;
                          }
                          else {
                            lVar15 = 2;
                          }
                          *pWVar1 = WVar12;
                          pWVar1 = pWVar1 + 1;
                        }
                        iVar13 = (int)((longlong)pWVar1 - (longlong)local_48 >> 1) * 2;
                      }
                    }
                    else {
                      iVar13 = FUN_1400ac930(param_1,(byte *)lpBuffer,(longlong)iVar13,param_2,
                                             param_3 >> 1);
                    }
                  }
                  goto LAB_1400ac782;
                }
                uVar7 = GetLastError();
                if (uVar7 != 5) {
                  if (uVar7 == 0x6d) {
                    iVar13 = 0;
                    goto LAB_1400ac782;
                  }
                  goto LAB_1400ac778;
                }
                p_Var8 = FUN_140095e5c();
                *(undefined4 *)p_Var8 = 9;
                p_Var8 = FUN_140095e80();
                *(undefined4 *)p_Var8 = 5;
              }
              else {
                if (cVar3 != '\x02') goto LAB_1400ac7a2;
                local_res20[0] = 0;
                BVar6 = ReadConsoleW(local_60,lpBuffer,nNumberOfBytesToRead >> 1,local_res20,
                                     (PCONSOLE_READCONSOLE_CONTROL)0x0);
                if (BVar6 != 0) {
                  uVar7 = local_res20[0] * 2;
                  goto LAB_1400ac7e4;
                }
                uVar7 = GetLastError();
LAB_1400ac778:
                FUN_140095ea4(uVar7);
              }
            }
          }
          iVar13 = -1;
LAB_1400ac782:
          FUN_1400a1290(pWVar10);
          return iVar13;
        }
      }
      p_Var8 = FUN_140095e80();
      *(undefined4 *)p_Var8 = 0;
      p_Var8 = FUN_140095e5c();
      *(undefined4 *)p_Var8 = 0x16;
      goto LAB_1400ac90f;
    }
  }
  p_Var8 = FUN_140095e80();
  *(undefined4 *)p_Var8 = 0;
  p_Var8 = FUN_140095e5c();
  *(undefined4 *)p_Var8 = 9;
LAB_1400ac90f:
  FUN_1400a0ea0();
  return -1;
}

