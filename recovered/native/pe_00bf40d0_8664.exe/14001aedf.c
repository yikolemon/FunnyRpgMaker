/* Ghidra pseudocode. Image: pe_00bf40d0_8664.exe Address: 14001aedf */

bool FUN_14001aedf(int param_1,uint param_2,longlong param_3,undefined *param_4)

{
  WCHAR WVar1;
  uint *puVar2;
  longlong lVar3;
  bool bVar4;
  DWORD DVar5;
  int iVar6;
  undefined8 uVar7;
  longlong lVar8;
  undefined7 extraout_var;
  longlong lVar9;
  wchar_t *pwVar10;
  LPWSTR lpBuffer;
  bool bVar11;
  undefined1 auStackY_758 [32];
  DWORD local_704;
  uint *local_700;
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
  undefined2 local_458 [264];
  WCHAR local_248 [264];
  ulonglong local_38;
  
  local_38 = DAT_14012ea80 ^ (ulonglong)auStackY_758;
  local_700 = (uint *)0x0;
  lpBuffer = local_248;
  DVar5 = GetEnvironmentVariableW(L"WINDIR",lpBuffer,0x104);
  if (0xffffefff < param_2 - 0x1001) {
    uVar7 = FUN_14001ab8c((longlong *)&local_700,param_1,param_2,param_3);
    puVar2 = local_700;
    bVar11 = false;
    if (((int)uVar7 != 0) && (0xfffffefc < DVar5 - 0x104)) {
      lVar8 = 0x104;
      do {
        if (*lpBuffer == L'\0') {
          pwVar10 = L"\\syswow64\\rundll32.exe";
          lVar3 = 0;
          goto LAB_14001afcb;
        }
        lpBuffer = lpBuffer + 1;
        lVar8 = lVar8 + -1;
      } while (lVar8 != 0);
    }
    goto LAB_14001af4d;
  }
  SetLastError(0x57);
  goto LAB_14001af4b;
  while( true ) {
    pwVar10 = pwVar10 + 1;
    lpBuffer[lVar9] = WVar1;
    lVar3 = lVar9 + 1;
    if (lVar8 == lVar9 + 1) break;
LAB_14001afcb:
    lVar9 = lVar3;
    WVar1 = *pwVar10;
    if (WVar1 == L'\0') {
      lpBuffer[lVar9] = L'\0';
      bVar11 = false;
      iVar6 = MultiByteToWideChar(0,0,(LPCSTR)(local_700 + 3),-1,local_668,0x104);
      if ((0xfffffefc < iVar6 - 0x104U) &&
         (uVar7 = FUN_14001b19b(local_458,0x104,0x14011c282,local_668), -1 < (int)uVar7)) {
        local_688 = (HANDLE)0x0;
        pvStack_680 = (HANDLE)0x0;
        bVar11 = false;
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
        iVar6 = (*(code *)param_4)(local_248,local_458,0,0);
        if (iVar6 != 0) {
          bVar4 = FUN_14001a8a7(local_688,(undefined8 *)&DAT_1400bb7ac,puVar2,*puVar2);
          if ((int)CONCAT71(extraout_var,bVar4) == 0) {
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
            bVar11 = local_704 == 0;
          }
        }
      }
      goto LAB_14001af4d;
    }
  }
  lpBuffer[lVar9] = L'\0';
LAB_14001af4b:
  bVar11 = false;
LAB_14001af4d:
  FUN_14001ae35((longlong *)&local_700);
  if (DAT_14012ea80 != (local_38 ^ (ulonglong)auStackY_758)) {
                    /* WARNING: Subroutine does not return */
    FUN_140086440(local_38 ^ (ulonglong)auStackY_758);
  }
  return bVar11;
}

