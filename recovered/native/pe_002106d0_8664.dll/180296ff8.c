/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 180296ff8 */

void FUN_180296ff8(char *param_1,char *param_2,longlong *param_3)

{
  byte bVar1;
  char *pcVar2;
  int iVar3;
  BOOL BVar4;
  HANDLE hFindFile;
  LPCWSTR pWVar5;
  char *pcVar6;
  longlong lVar7;
  longlong lVar8;
  byte bVar9;
  undefined8 uVar10;
  ulonglong uVar11;
  LPCWSTR pWVar12;
  undefined1 auStackY_378 [32];
  undefined1 local_348 [8];
  ulonglong local_340;
  undefined8 local_338;
  undefined8 local_330;
  LPCWSTR local_328;
  undefined8 local_320;
  undefined8 local_318;
  char local_310;
  longlong local_308;
  longlong local_300;
  char local_2f0;
  longlong local_2e8;
  longlong local_2e0;
  char local_2d0;
  undefined8 local_2c8;
  undefined8 local_2c0;
  char *local_2b8;
  undefined8 local_2b0;
  undefined8 local_2a8;
  char local_2a0;
  _WIN32_FIND_DATAW local_298;
  ulonglong local_48;
  
  local_48 = DAT_180402640 ^ (ulonglong)auStackY_378;
  while ((param_2 != param_1 &&
         ((0x2d < (byte)(*param_2 - 0x2fU) ||
          ((0x200000000801U >> ((longlong)(char)(*param_2 - 0x2fU) & 0x3fU) & 1) == 0))))) {
    param_2 = (char *)FUN_1802a54cc(param_1);
  }
  if ((*param_2 == ':') && (param_2 != param_1 + 1)) {
    FUN_180296e74(param_1,0,0,param_3);
  }
  else {
    bVar9 = *param_2 - 0x2f;
    pWVar12 = (LPCWSTR)0x0;
    if ((0x2d < bVar9) || (bVar1 = 1, (0x200000000801U >> ((longlong)(char)bVar9 & 0x3fU) & 1) == 0)
       ) {
      bVar1 = 0;
    }
    uVar11 = -(ulonglong)bVar1 & (ulonglong)(param_2 + (1 - (longlong)param_1));
    local_340 = uVar11;
    FUN_1802a89a0(&local_298,0,0x250);
    local_338 = 0;
    local_330 = 0;
    local_328 = (LPCWSTR)0x0;
    local_320 = 0;
    local_318 = 0;
    local_310 = '\0';
    _LocaleUpdate::_LocaleUpdate((_LocaleUpdate *)&local_308,(__crt_locale_pointers *)0x0);
    if (*(int *)(local_300 + 0xc) == 0xfde9) {
      if (local_2f0 != '\0') {
        *(uint *)(local_308 + 0x3a8) = *(uint *)(local_308 + 0x3a8) & 0xfffffffd;
      }
      pWVar5 = (LPCWSTR)0xfde9;
    }
    else {
      iVar3 = FUN_180291878();
      if (iVar3 == 0) {
        if (local_2f0 != '\0') {
          *(uint *)(local_308 + 0x3a8) = *(uint *)(local_308 + 0x3a8) & 0xfffffffd;
        }
        pWVar5 = (LPCWSTR)0x1;
      }
      else {
        pWVar5 = pWVar12;
        if (local_2f0 != '\0') {
          *(uint *)(local_308 + 0x3a8) = *(uint *)(local_308 + 0x3a8) & 0xfffffffd;
        }
      }
    }
    iVar3 = FUN_18026f610(param_1,&local_338,local_348,pWVar5);
    pWVar5 = local_328;
    if (iVar3 != 0) {
      pWVar5 = pWVar12;
    }
    hFindFile = FindFirstFileExW(pWVar5,FindExInfoStandard,&local_298,FindExSearchNameMatch,
                                 (LPVOID)0x0,0);
    if (hFindFile == (HANDLE)0xffffffffffffffff) {
      FUN_180296e74(param_1,0,0,param_3);
      if (local_310 != '\0') {
        FUN_180290e40(local_328);
      }
    }
    else {
      lVar8 = param_3[1] - *param_3 >> 3;
      do {
        uVar10 = 0;
        local_2c8 = 0;
        local_2c0 = 0;
        local_2b8 = (char *)0x0;
        local_2b0 = 0;
        local_2a8 = 0;
        local_2a0 = '\0';
        _LocaleUpdate::_LocaleUpdate((_LocaleUpdate *)&local_2e8,(__crt_locale_pointers *)0x0);
        if (*(int *)(local_2e0 + 0xc) == 0xfde9) {
          if (local_2d0 != '\0') {
            *(uint *)(local_2e8 + 0x3a8) = *(uint *)(local_2e8 + 0x3a8) & 0xfffffffd;
          }
          uVar10 = 0xfde9;
        }
        else {
          iVar3 = FUN_180291878();
          if (iVar3 == 0) {
            if (local_2d0 != '\0') {
              *(uint *)(local_2e8 + 0x3a8) = *(uint *)(local_2e8 + 0x3a8) & 0xfffffffd;
            }
            uVar10 = 1;
          }
          else if (local_2d0 != '\0') {
            *(uint *)(local_2e8 + 0x3a8) = *(uint *)(local_2e8 + 0x3a8) & 0xfffffffd;
          }
        }
        iVar3 = FUN_180296cc8(local_298.cFileName,&local_2c8,local_348,uVar10);
        pcVar2 = local_2b8;
        pcVar6 = local_2b8;
        if (iVar3 != 0) {
          pcVar6 = (char *)0x0;
        }
        if ((*pcVar6 == '.') && ((pcVar6[1] == '\0' || ((pcVar6[1] == '.' && (pcVar6[2] == '\0')))))
           ) {
          if (local_2a0 != '\0') {
            FUN_180290e40(local_2b8);
          }
        }
        else {
          iVar3 = FUN_180296e74(pcVar6,param_1,uVar11,param_3);
          if (iVar3 != 0) {
            if (local_2a0 != '\0') {
              FUN_180290e40(pcVar2);
            }
            FindClose(hFindFile);
            if (local_310 != '\0') {
              FUN_180290e40(local_328);
            }
            goto LAB_180297335;
          }
          uVar11 = local_340;
          if (local_2a0 != '\0') {
            FUN_180290e40(pcVar2);
            uVar11 = local_340;
          }
        }
        BVar4 = FindNextFileW(hFindFile,&local_298);
      } while (BVar4 != 0);
      lVar7 = param_3[1] - *param_3 >> 3;
      if (lVar8 != lVar7) {
        FUN_180289570(*param_3 + lVar8 * 8,lVar7 - lVar8,8,&LAB_180297358);
      }
      FindClose(hFindFile);
      if (local_310 != '\0') {
        FUN_180290e40(local_328);
      }
    }
  }
LAB_180297335:
                    /* WARNING: Subroutine does not return */
  FUN_1802396d0(local_48 ^ (ulonglong)auStackY_378);
}

