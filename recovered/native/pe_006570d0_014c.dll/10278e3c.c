/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 10278e3c */

void FUN_10278e3c(uchar *param_1,uchar *param_2,int *param_3)

{
  uchar uVar1;
  bool bVar2;
  uint uVar3;
  int iVar4;
  HANDLE hFindFile;
  int iVar5;
  BOOL BVar6;
  LPCWSTR lpFileName;
  char *pcVar7;
  uchar *puVar8;
  undefined4 local_290;
  undefined4 local_28c;
  LPCWSTR local_288;
  undefined4 local_284;
  undefined4 local_280;
  char local_27c;
  undefined4 local_278;
  undefined4 local_274;
  char *local_270;
  undefined4 local_26c;
  undefined4 local_268;
  char local_264;
  int *local_260;
  uchar local_259;
  _WIN32_FIND_DATAW local_258;
  uint local_8;
  
  local_8 = DAT_10388d00 ^ (uint)&stack0xfffffffc;
  local_260 = param_3;
  for (; (((param_2 != param_1 && (uVar1 = *param_2, uVar1 != '/')) && (uVar1 != '\\')) &&
         (uVar1 != ':')); param_2 = __mbsdec(param_1,param_2)) {
  }
  local_259 = *param_2;
  if ((local_259 == ':') && (param_2 != param_1 + 1)) {
    FUN_10278d8b(param_1,0,0,local_260);
  }
  else {
    if ((local_259 == '/') || ((local_259 == '\\' || (bVar2 = false, local_259 == ':')))) {
      bVar2 = true;
    }
    local_290 = 0;
    local_28c = 0;
    local_288 = (LPCWSTR)0x0;
    local_284 = 0;
    puVar8 = (uchar *)0x0;
    if (bVar2) {
      puVar8 = param_2 + (1 - (int)param_1);
    }
    local_280 = 0;
    local_27c = '\0';
    uVar3 = __acrt_get_utf8_acp_compatibility_codepage();
    iVar4 = __acrt_mbs_to_wcs_cp<__crt_win32_buffer_internal_dynamic_resizing>
                      ((char *)param_1,
                       (__crt_win32_buffer<wchar_t,__crt_win32_buffer_internal_dynamic_resizing> *)
                       &local_290,uVar3);
    lpFileName = local_288;
    if (iVar4 != 0) {
      lpFileName = (LPCWSTR)0x0;
    }
    hFindFile = FindFirstFileExW(lpFileName,FindExInfoStandard,&local_258,FindExSearchNameMatch,
                                 (LPVOID)0x0,0);
    if (hFindFile == (HANDLE)0xffffffff) {
      FUN_10278d8b(param_1,0,0,local_260);
      if (local_27c != '\0') {
        FUN_10274120(local_288);
      }
    }
    else {
      iVar4 = local_260[1] - *local_260 >> 2;
      do {
        local_278 = 0;
        local_274 = 0;
        local_270 = (char *)0x0;
        local_26c = 0;
        local_268 = 0;
        local_264 = '\0';
        uVar3 = __acrt_get_utf8_acp_compatibility_codepage();
        iVar5 = FUN_10278c19(local_258.cFileName,&local_278,&local_259,uVar3);
        pcVar7 = local_270;
        if (iVar5 != 0) {
          pcVar7 = (char *)0x0;
        }
        if (((*pcVar7 != '.') ||
            ((pcVar7[1] != '\0' && ((pcVar7[1] != '.' || (pcVar7[2] != '\0')))))) &&
           (iVar5 = FUN_10278d8b(pcVar7,param_1,puVar8,local_260), iVar5 != 0)) {
          if (local_264 != '\0') {
            FUN_10274120(local_270);
          }
          FindClose(hFindFile);
          if (local_27c != '\0') {
            FUN_10274120(local_288);
          }
          goto LAB_102790ba;
        }
        if (local_264 != '\0') {
          FUN_10274120(local_270);
        }
        BVar6 = FindNextFileW(hFindFile,&local_258);
      } while (BVar6 != 0);
      iVar5 = local_260[1] - *local_260 >> 2;
      if (iVar4 != iVar5) {
        FUN_1026fb00(*local_260 + iVar4 * 4,iVar5 - iVar4,4,&LAB_102790c8);
      }
      FindClose(hFindFile);
      if (local_27c != '\0') {
        FUN_10274120(local_288);
      }
    }
  }
LAB_102790ba:
                    /* WARNING: Subroutine does not return */
  FUN_102283e0();
}

