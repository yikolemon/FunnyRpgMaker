/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 1800d3c46 */

bool FUN_1800d3c46(undefined4 param_1,int param_2,undefined8 param_3,code *param_4)

{
  WCHAR WVar1;
  undefined4 *puVar2;
  longlong lVar3;
  DWORD DVar4;
  int iVar5;
  longlong lVar6;
  longlong lVar7;
  wchar_t *pwVar8;
  LPWSTR lpBuffer;
  bool bVar9;
  undefined1 auStackY_758 [32];
  DWORD local_704;
  undefined4 *local_700;
  undefined8 local_6f8;
  undefined8 uStack_6f0;
  undefined8 local_6e8;
  undefined8 uStack_6e0;
  undefined8 local_6d8;
  undefined8 uStack_6d0;
  undefined8 local_6c8;
  undefined8 uStack_6c0;
  undefined8 local_6b8;
  undefined8 uStack_6b0;
  undefined8 local_6a8;
  undefined8 uStack_6a0;
  undefined8 local_698;
  HANDLE local_688;
  HANDLE pvStack_680;
  undefined8 local_678;
  WCHAR local_668 [264];
  undefined1 local_458 [528];
  WCHAR local_248 [264];
  ulonglong local_38;
  
  local_38 = DAT_180402640 ^ (ulonglong)auStackY_758;
  local_700 = (undefined4 *)0x0;
  lpBuffer = local_248;
  DVar4 = GetEnvironmentVariableW(L"WINDIR",lpBuffer,0x104);
  if (0xffffefff < param_2 - 0x1001U) {
    iVar5 = FUN_1800d38f3(&local_700,param_1,param_2,param_3);
    puVar2 = local_700;
    bVar9 = false;
    if ((iVar5 != 0) && (0xfffffefc < DVar4 - 0x104)) {
      lVar6 = 0x104;
      do {
        if (*lpBuffer == L'\0') {
          pwVar8 = L"\\syswow64\\rundll32.exe";
          lVar3 = 0;
          goto LAB_1800d3d32;
        }
        lpBuffer = lpBuffer + 1;
        lVar6 = lVar6 + -1;
      } while (lVar6 != 0);
    }
    goto LAB_1800d3cb4;
  }
  SetLastError(0x57);
  goto LAB_1800d3cb2;
  while( true ) {
    pwVar8 = pwVar8 + 1;
    lpBuffer[lVar7] = WVar1;
    lVar3 = lVar7 + 1;
    if (lVar6 == lVar7 + 1) break;
LAB_1800d3d32:
    lVar7 = lVar3;
    WVar1 = *pwVar8;
    if (WVar1 == L'\0') {
      lpBuffer[lVar7] = L'\0';
      bVar9 = false;
      iVar5 = MultiByteToWideChar(0,0,(LPCSTR)(local_700 + 3),-1,local_668,0x104);
      if ((0xfffffefc < iVar5 - 0x104U) &&
         (iVar5 = FUN_1800d3f02(local_458,0x104,L"rundll32.exe \"%s\",#1",local_668), -1 < iVar5)) {
        local_688 = (HANDLE)0x0;
        pvStack_680 = (HANDLE)0x0;
        bVar9 = false;
        local_678 = 0;
        uStack_6f0 = 0;
        local_6e8 = 0;
        uStack_6e0 = 0;
        local_6d8 = 0;
        uStack_6d0 = 0;
        local_6c8 = 0;
        uStack_6c0 = 0;
        local_6b8 = 0;
        uStack_6b0 = 0;
        local_6a8 = 0;
        uStack_6a0 = 0;
        local_698 = 0;
        local_6f8 = 0x68;
        iVar5 = (*param_4)(local_248,local_458,0,0);
        if (iVar5 != 0) {
          iVar5 = FUN_1800d34af(local_688,&DAT_1802be800,puVar2,*puVar2);
          if (iVar5 == 0) {
            TerminateProcess(local_688,0xffffffff);
            CloseHandle(local_688);
            CloseHandle(pvStack_680);
          }
          else {
            ResumeThread(pvStack_680);
            WaitForSingleObject(local_688,0xffffffff);
            local_704 = 500;
            GetExitCodeProcess(local_688,&local_704);
            CloseHandle(local_688);
            CloseHandle(pvStack_680);
            bVar9 = local_704 == 0;
          }
        }
      }
      goto LAB_1800d3cb4;
    }
  }
  lpBuffer[lVar7] = L'\0';
LAB_1800d3cb2:
  bVar9 = false;
LAB_1800d3cb4:
  FUN_1800d3b9c(&local_700);
  if (DAT_180402640 != (local_38 ^ (ulonglong)auStackY_758)) {
                    /* WARNING: Subroutine does not return */
    FUN_1802396d0(local_38 ^ (ulonglong)auStackY_758);
  }
  return bVar9;
}

