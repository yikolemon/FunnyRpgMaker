/* Ghidra pseudocode. Image: pe_00bf40d0_8664.exe Address: 140001000 */

ulonglong FUN_140001000(int param_1,undefined8 *param_2)

{
  code *pcVar1;
  int iVar2;
  int iVar3;
  BOOL BVar4;
  DWORD DVar5;
  longlong *plVar6;
  ulonglong uVar7;
  undefined8 uVar8;
  uint uVar9;
  LPCWSTR ***ppppWVar10;
  undefined *****lpCommandLine;
  _STARTUPINFOW local_198;
  longlong local_128;
  int local_120;
  LPCWSTR **local_108 [3];
  ulonglong local_f0;
  undefined **local_e8;
  undefined8 uStack_e0;
  ulonglong local_d8;
  undefined ****local_c0;
  LPCWSTR **local_b8 [2];
  HANDLE local_a8;
  ulonglong local_a0;
  _PROCESS_INFORMATION local_98;
  undefined ****local_80;
  undefined **local_78;
  undefined8 uStack_70;
  ulonglong local_68;
  undefined ****local_48;
  undefined8 local_38;
  
  local_38 = 0xfffffffffffffffe;
  setlocale(0,".UTF-8");
  if (param_1 == 2) {
    iVar3 = FUN_14009cef0((ushort *)param_2[1],(ushort *)L"hotkey");
    if (iVar3 == 0) {
      FUN_1400180fc();
      uVar9 = 0;
      goto LAB_140001616;
    }
  }
  else if (2 < param_1) {
    FUN_140001cf8((undefined8 *)&local_198,param_2 + 1);
    FUN_140001be7((LPWSTR)local_b8,(LPCWSTR)&local_198);
    FUN_140001d40((longlong *)&local_198);
    FUN_140001cf8((undefined8 *)&local_198,param_2 + 2);
    FUN_140001be7((LPWSTR)local_108,(LPCWSTR)&local_198);
    FUN_140001d40((longlong *)&local_198);
    FUN_1400023b5();
    local_128 = 0xffff00000000;
    ppppWVar10 = local_b8;
    if (7 < local_a0) {
      ppppWVar10 = (LPCWSTR ***)local_b8[0];
    }
    local_120 = FUN_140088f20((LPCWSTR)ppppWVar10,(ulonglong *)&local_198,3,0xffffffff);
    FUN_140004480((int *)&local_128,local_120,(longlong)&local_198);
    iVar2 = local_120;
    local_78 = FUN_1400023b5();
    local_80 = (undefined ****)CONCAT44(local_80._4_4_,iVar2);
    iVar3 = (int)local_128;
    if ((int)local_128 == 0) {
      if (iVar2 != 0) {
        FUN_140002337("exists",&local_80,local_b8);
LAB_140001643:
        FUN_140002337("exists",&local_80,local_108);
        pcVar1 = (code *)swi(3);
        uVar7 = (*pcVar1)();
        return uVar7;
      }
LAB_140001392:
      plVar6 = FUN_1400018e3(&DAT_14013cb90,"INJECT_DLL_PATH not exist: ");
      plVar6 = FUN_140001d85(plVar6,local_b8);
      uVar9 = 1;
      FUN_140001bb3(plVar6);
    }
    else {
      FUN_1400023b5();
      if (iVar3 == 1) goto LAB_140001392;
      FUN_1400023b5();
      local_128 = 0xffff00000000;
      ppppWVar10 = local_108;
      if (7 < local_f0) {
        ppppWVar10 = (LPCWSTR ***)local_108[0];
      }
      local_120 = FUN_140088f20((LPCWSTR)ppppWVar10,(ulonglong *)&local_198,3,0xffffffff);
      FUN_140004480((int *)&local_128,local_120,(longlong)&local_198);
      iVar2 = local_120;
      local_78 = FUN_1400023b5();
      local_80 = (undefined ****)CONCAT44(local_80._4_4_,iVar2);
      iVar3 = (int)local_128;
      if ((int)local_128 == 0) {
        if (iVar2 != 0) goto LAB_140001643;
LAB_1400013d2:
        plVar6 = FUN_1400018e3(&DAT_14013cb90,"EXE_PATH not exist: ");
        plVar6 = FUN_140001d85(plVar6,local_108);
        uVar9 = 1;
        FUN_140001bb3(plVar6);
      }
      else {
        FUN_1400023b5();
        if (iVar3 == 1) goto LAB_1400013d2;
        FUN_140001e22((uint *)local_108,&local_128);
        uVar7 = FUN_140017d6a();
        if ((char)uVar7 == '\0') {
          local_198.lpReserved = (LPWSTR)0x0;
          local_198.hStdInput = (HANDLE)0x0;
          local_198.hStdOutput = (HANDLE)0x0;
          local_198.wShowWindow = 0;
          local_198.cbReserved2 = 0;
          local_198._68_4_ = 0;
          local_198.lpReserved2 = (LPBYTE)0x0;
          local_198.dwXCountChars = 0;
          local_198.dwYCountChars = 0;
          local_198.dwFillAttribute = 0;
          local_198.dwFlags = 0;
          local_198.dwX = 0;
          local_198.dwY = 0;
          local_198.dwXSize = 0;
          local_198.dwYSize = 0;
          local_198.lpDesktop = (LPWSTR)0x0;
          local_198.lpTitle = (LPWSTR)0x0;
          local_198.hStdError = (HANDLE)0x0;
          local_198.cb = 0x68;
          local_198._4_4_ = 0;
          local_98.dwProcessId = 0;
          local_98.dwThreadId = 0;
          local_98.hProcess = (HANDLE)0x0;
          local_98.hThread = (HANDLE)0x0;
          FUN_140001eda(&local_80,(undefined1 (*) [32])L"register hotkey");
          lpCommandLine = &local_80;
          if (7 < local_68) {
            lpCommandLine = (undefined *****)local_80;
          }
          BVar4 = CreateProcessW((LPCWSTR)*param_2,(LPWSTR)lpCommandLine,(LPSECURITY_ATTRIBUTES)0x0,
                                 (LPSECURITY_ATTRIBUTES)0x0,0,0x8000000,(LPVOID)0x0,(LPCWSTR)0x0,
                                 &local_198,&local_98);
          if (BVar4 == 0) {
            plVar6 = FUN_140001f51(&DAT_14013cb90,(undefined1 (*) [32])L"Failed to create process: "
                                  );
            plVar6 = FUN_140001f51(plVar6,(undefined1 (*) [32])*param_2);
            plVar6 = FUN_1400018e3(plVar6," | ");
            DVar5 = GetLastError();
            FUN_1400069fc((longlong *)&local_e8,DVar5);
            plVar6 = FUN_140001f3a(plVar6,&local_e8);
            FUN_140001bb3(plVar6);
            FUN_140002174((longlong *)&local_e8);
          }
          CloseHandle(local_98.hThread);
          CloseHandle(local_98.hProcess);
          FUN_140002174((longlong *)&local_80);
        }
        local_198.lpReserved = (LPWSTR)0x0;
        local_198.hStdInput = (HANDLE)0x0;
        local_198.hStdOutput = (HANDLE)0x0;
        local_198.wShowWindow = 0;
        local_198.cbReserved2 = 0;
        local_198._68_4_ = 0;
        local_198.lpReserved2 = (LPBYTE)0x0;
        local_198.dwXCountChars = 0;
        local_198.dwYCountChars = 0;
        local_198.dwFillAttribute = 0;
        local_198.dwFlags = 0;
        local_198.dwX = 0;
        local_198.dwY = 0;
        local_198.dwXSize = 0;
        local_198.dwYSize = 0;
        local_198.lpDesktop = (LPWSTR)0x0;
        local_198.lpTitle = (LPWSTR)0x0;
        local_198.hStdError = (HANDLE)0x0;
        local_198.cb = 0x68;
        local_198._4_4_ = 0;
        local_d8 = 0;
        local_e8 = (undefined **)0x0;
        uStack_e0 = 0;
        if (local_a0 < 8) {
          local_b8[0] = (LPCWSTR **)local_b8;
        }
        local_98.hThread = local_a8;
        local_98.hProcess = local_b8[0];
        FUN_14000486d((LPSTR)&local_80,&local_98.hProcess);
        uVar8 = FUN_14001b267();
        FUN_1400021ea((longlong *)&local_80);
        local_80 = (undefined ****)std::_Func_impl_no_alloc<`wmain'::`1'::<lambda_0>,void>::vftable;
        local_78 = local_e8;
        uStack_70 = uStack_e0;
        local_68 = local_d8;
        local_c0 = (undefined ****)&local_80;
        local_48 = local_c0;
        FUN_140002230((longlong *)&local_98,(longlong)&local_80);
        if ((undefined *****)local_48 != (undefined *****)0x0) {
          (*(code *)(*local_48)[4])(local_48,(undefined *****)local_48 != &local_80);
        }
        if (((int)uVar8 == 0) || (uVar9 = 0, local_e8 == (undefined **)0x0)) {
          plVar6 = FUN_140001f51(&DAT_14013cb90,(undefined1 (*) [32])L"Unable to launch process: ");
          plVar6 = FUN_140001d85(plVar6,local_108);
          plVar6 = FUN_1400018e3(plVar6," | ");
          plVar6 = FUN_140001d85(plVar6,local_b8);
          plVar6 = FUN_1400018e3(plVar6," | ");
          DVar5 = GetLastError();
          FUN_1400069fc((longlong *)&local_80,DVar5);
          plVar6 = FUN_140001f3a(plVar6,&local_80);
          FUN_140001bb3(plVar6);
          FUN_140002174((longlong *)&local_80);
          uVar9 = 0x65;
          TerminateProcess(local_e8,0);
        }
        FUN_1400022aa((longlong *)&local_98);
        FUN_140001d40(&local_128);
      }
    }
    FUN_140001d40((longlong *)local_108);
    FUN_140001d40((longlong *)local_b8);
    goto LAB_140001616;
  }
  plVar6 = FUN_1400018e3(&DAT_14013cb90,"USAGE: INJECT_DLL_PATH EXE_PATH");
  FUN_140001bb3(plVar6);
  uVar9 = 1;
LAB_140001616:
  return (ulonglong)uVar9;
}

