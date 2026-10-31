/* Ghidra pseudocode. Image: pe_00a0fad0_8664.exe Address: 1400baaa8 */

undefined8 FUN_1400baaa8(WCHAR *param_1,WCHAR *param_2,LPWSTR param_3)

{
  WCHAR WVar1;
  WCHAR WVar2;
  short sVar3;
  uint uVar4;
  int iVar5;
  longlong lVar6;
  WCHAR *pWVar7;
  uint uVar8;
  int iVar9;
  int iVar10;
  ulonglong uVar11;
  undefined1 auStack_c78 [40];
  WCHAR *local_c50;
  WCHAR local_c48 [1024];
  WCHAR local_448 [512];
  ulonglong local_48;
  
  local_48 = DAT_1401c9640 ^ (ulonglong)auStack_c78;
  local_c50 = param_2;
  if (param_3 == (LPWSTR)0x0) {
    param_3 = local_c48;
    GetCurrentDirectoryW(0x400,param_3);
  }
  pWVar7 = local_c50;
  if (param_1 != (WCHAR *)0x0) {
    WVar1 = *param_1;
    WVar2 = param_1[1];
    if (WVar1 == L'/') {
      if (WVar2 == L':') goto LAB_1400bab6b;
      if (WVar2 != L'/') goto LAB_1400bab98;
    }
    else {
      if (WVar1 != L'\\') {
        if (WVar2 != L':') {
LAB_1400bab98:
          FUN_14011cf10(local_c50,param_3);
          uVar4 = FUN_14011cf50(pWVar7);
          lVar6 = (longlong)(((ulonglong)uVar4 << 0x20) + -0x100000000) >> 0x1f;
          sVar3 = *(short *)((longlong)pWVar7 + lVar6);
          if ((sVar3 == 0x5c) || (sVar3 == 0x2f)) {
            *(undefined2 *)((longlong)local_c50 + lVar6) = 0;
            uVar4 = uVar4 - 1;
          }
          uVar11 = 0;
          goto LAB_1400babe9;
        }
LAB_1400bab6b:
        *local_c50 = WVar1;
        local_c50[1] = param_1[1];
        local_c50[2] = L'\0';
        uVar11 = (ulonglong)(param_1[2] == L'\\') | 2;
        uVar4 = 2;
        goto LAB_1400babe9;
      }
      if (WVar2 != L'\\') {
        *local_c50 = *param_3;
        local_c50[1] = param_3[1];
        local_c50[2] = L'\0';
        uVar4 = 2;
        uVar11 = 1;
        goto LAB_1400babe9;
      }
    }
    local_c50[0] = L'\\';
    local_c50[1] = L'\0';
    uVar4 = 1;
    uVar11 = 2;
LAB_1400babe9:
    iVar10 = 0;
    do {
      WVar1 = param_1[uVar11];
      if ((WVar1 == L'/') || (WVar1 == L'\\')) {
        iVar9 = 0;
        if ((iVar10 != 0) && (iVar5 = FUN_14011ced0(local_448,L"."), iVar5 != 0)) {
          iVar5 = FUN_14011ced0(local_448,L"..");
          if (iVar5 == 0) {
            pWVar7 = local_c50 + (int)uVar4;
            do {
              WVar1 = pWVar7[-1];
              pWVar7 = pWVar7 + -1;
              uVar8 = uVar4 - 1;
              if (WVar1 == L'\\') break;
              if (WVar1 == L':') goto LAB_1400bac36;
              uVar4 = uVar8;
            } while (WVar1 != L'/');
            *pWVar7 = L'\0';
            uVar4 = uVar8;
          }
          else {
            local_c50[(int)uVar4] = L'\\';
            FUN_14011cf10(local_c50 + (int)uVar4 + 1,local_448);
            uVar4 = uVar4 + iVar10 + 1;
          }
        }
      }
      else {
        if (WVar1 == L'\0') goto LAB_1400bacb3;
        local_448[iVar10] = WVar1;
        local_448[(longlong)iVar10 + 1] = L'\0';
        iVar9 = iVar10 + 1;
      }
LAB_1400bac36:
      iVar10 = iVar9;
      uVar11 = uVar11 + 1;
    } while( true );
  }
LAB_1400bacd6:
  FUN_14011cf10(pWVar7,param_3);
LAB_1400bacdb:
  if (DAT_1401c9640 == (local_48 ^ (ulonglong)auStack_c78)) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1400d3720(local_48 ^ (ulonglong)auStack_c78);
LAB_1400bacb3:
  if (iVar10 == 0) goto LAB_1400bacdb;
  local_c50[(int)uVar4] = L'\\';
  param_3 = local_448;
  pWVar7 = local_c50 + (int)uVar4 + 1;
  goto LAB_1400bacd6;
}

