/* Ghidra pseudocode. Image: pe_00d3d4d0_014c.exe Address: 0049f844 */

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_0049f844(DWORD *param_1,uint param_2,WCHAR *param_3,int param_4)

{
  WCHAR WVar1;
  WCHAR *pWVar2;
  uint uVar3;
  BOOL BVar4;
  DWORD DVar5;
  uint uVar6;
  WCHAR *pWVar7;
  DWORD local_1418;
  HANDLE local_1414;
  WCHAR *local_1410;
  CHAR local_140c [3416];
  WCHAR local_6b4 [854];
  uint local_8;
  
  local_8 = DAT_0050e8c0 ^ (uint)&stack0xfffffffc;
  local_1414 = *(HANDLE *)((&DAT_00521cc8)[(int)param_2 >> 6] + 0x18 + (param_2 & 0x3f) * 0x38);
  local_1410 = (WCHAR *)(param_4 + (int)param_3);
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  pWVar7 = param_3;
  if (param_3 < local_1410) {
    do {
      pWVar2 = local_6b4;
      do {
        if (local_1410 <= pWVar7) break;
        WVar1 = *pWVar7;
        pWVar7 = pWVar7 + 1;
        if (WVar1 == L'\n') {
          *pWVar2 = L'\r';
          pWVar2 = pWVar2 + 1;
        }
        *pWVar2 = WVar1;
        pWVar2 = pWVar2 + 1;
      } while (pWVar2 < local_6b4 + 0x354);
      uVar3 = FUN_00496063(0xfde9,0,local_6b4,(int)pWVar2 - (int)local_6b4 >> 1,local_140c,0xd55,
                           (LPCSTR)0x0,(LPBOOL)0x0);
      if (uVar3 == 0) {
LAB_0049f95d:
        DVar5 = GetLastError();
        *param_1 = DVar5;
        break;
      }
      uVar6 = 0;
      if (uVar3 != 0) {
        do {
          BVar4 = WriteFile(local_1414,local_140c + uVar6,uVar3 - uVar6,&local_1418,
                            (LPOVERLAPPED)0x0);
          if (BVar4 == 0) goto LAB_0049f95d;
          uVar6 = uVar6 + local_1418;
        } while (uVar6 < uVar3);
      }
      param_1[1] = (int)pWVar7 - (int)param_3;
    } while (pWVar7 < local_1410);
  }
                    /* WARNING: Subroutine does not return */
  FUN_0047f2c0(local_8 ^ (uint)&stack0xfffffffc);
}

