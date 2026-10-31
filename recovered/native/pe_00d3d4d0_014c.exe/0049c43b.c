/* Ghidra pseudocode. Image: pe_00d3d4d0_014c.exe Address: 0049c43b */

void FUN_0049c43b(LPCWSTR param_1,LPCWSTR param_2,int *param_3)

{
  char cVar1;
  HANDLE hFindFile;
  int iVar2;
  int iVar3;
  BOOL BVar4;
  uint uVar5;
  LPCWSTR extraout_EDX;
  int extraout_EDX_00;
  _WIN32_FIND_DATAW local_258;
  uint local_8;
  
  local_8 = DAT_0050e8c0 ^ (uint)&stack0xfffffffc;
  while ((param_2 != param_1 &&
         (cVar1 = FUN_0049c5af(*param_2), param_2 = extraout_EDX, cVar1 == '\0'))) {
    param_2 = extraout_EDX + -1;
  }
  if ((*param_2 != L':') || (param_2 == param_1 + 1)) {
    cVar1 = FUN_0049c5af(*param_2);
    uVar5 = 0;
    if (cVar1 != '\0') {
      uVar5 = (extraout_EDX_00 - (int)param_1 >> 1) + 1;
    }
    hFindFile = FindFirstFileExW(param_1,FindExInfoStandard,&local_258,FindExSearchNameMatch,
                                 (LPVOID)0x0,0);
    if (hFindFile != (HANDLE)0xffffffff) {
      iVar2 = param_3[1] - *param_3 >> 2;
      do {
        if (((local_258.cFileName[0] != L'.') ||
            ((local_258.cFileName[1] != L'\0' &&
             ((local_258.cFileName[1] != L'.' || (local_258.cFileName[2] != L'\0')))))) &&
           (iVar3 = FUN_0049c387(local_258.cFileName,(int)param_1,uVar5,param_3), iVar3 != 0)) {
          FindClose(hFindFile);
          goto LAB_0049c5a0;
        }
        BVar4 = FindNextFileW(hFindFile,&local_258);
      } while (BVar4 != 0);
      iVar3 = param_3[1] - *param_3 >> 2;
      if (iVar2 != iVar3) {
        FUN_00492530((undefined1 *)(*param_3 + iVar2 * 4),iVar3 - iVar2,4,&LAB_0049c5d3);
      }
      FindClose(hFindFile);
      goto LAB_0049c5a0;
    }
  }
  FUN_0049c387(param_1,0,0,param_3);
LAB_0049c5a0:
                    /* WARNING: Subroutine does not return */
  FUN_0047f2c0(local_8 ^ (uint)&stack0xfffffffc);
}

