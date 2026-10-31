/* Ghidra pseudocode. Image: pe_00bf40d0_8664.exe Address: 1400abae4 */

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_1400abae4(DWORD *param_1,uint param_2,WCHAR *param_3,uint param_4)

{
  WCHAR WVar1;
  HANDLE hFile;
  uint uVar2;
  BOOL BVar3;
  DWORD DVar4;
  uint uVar5;
  ulonglong uVar6;
  WCHAR *pWVar7;
  WCHAR *pWVar8;
  undefined1 auStackY_1498 [32];
  DWORD local_1458 [4];
  WCHAR local_1448 [856];
  CHAR local_d98 [3424];
  ulonglong local_38;
  undefined8 uStack_30;
  
  uStack_30 = 0x1400abb00;
  local_38 = DAT_14012ea80 ^ (ulonglong)auStackY_1498;
  hFile = *(HANDLE *)
           ((&DAT_1401433a0)[(longlong)(int)param_2 >> 6] + 0x28 +
           (ulonglong)(param_2 & 0x3f) * 0x48);
  param_1[0] = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  pWVar7 = param_3;
  do {
    if ((WCHAR *)((ulonglong)param_4 + (longlong)param_3) <= pWVar7) {
LAB_1400abc29:
                    /* WARNING: Subroutine does not return */
      FUN_140086440(local_38 ^ (ulonglong)auStackY_1498);
    }
    pWVar8 = local_1448;
    do {
      if ((WCHAR *)((ulonglong)param_4 + (longlong)param_3) <= pWVar7) break;
      WVar1 = *pWVar7;
      pWVar7 = pWVar7 + 1;
      if (WVar1 == L'\n') {
        *pWVar8 = L'\r';
        pWVar8 = pWVar8 + 1;
      }
      *pWVar8 = WVar1;
      pWVar8 = pWVar8 + 1;
    } while (pWVar8 < local_1448 + 0x354);
    uVar2 = FUN_1400a13e0(0xfde9,0,local_1448,(int)((longlong)pWVar8 - (longlong)local_1448 >> 1),
                          local_d98,0xd55,(LPBOOL)0x0,(LPBOOL)0x0);
    if (uVar2 == 0) {
LAB_1400abc21:
      DVar4 = GetLastError();
      *param_1 = DVar4;
      goto LAB_1400abc29;
    }
    uVar6 = 0;
    if (uVar2 != 0) {
      do {
        local_1458[0] = 0;
        BVar3 = WriteFile(hFile,local_d98 + uVar6,uVar2 - (int)uVar6,local_1458,(LPOVERLAPPED)0x0);
        if (BVar3 == 0) goto LAB_1400abc21;
        uVar5 = (int)uVar6 + local_1458[0];
        uVar6 = (ulonglong)uVar5;
      } while (uVar5 < uVar2);
    }
    param_1[1] = (int)pWVar7 - (int)param_3;
  } while( true );
}

