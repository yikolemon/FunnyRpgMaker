/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 140056c6d */

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

DWORD FUN_140056c6d(longlong *param_1,char *param_2)

{
  longlong lVar1;
  BOOL BVar2;
  DWORD DVar3;
  longlong lVar4;
  undefined4 *puVar5;
  LPWCH pWVar6;
  HANDLE hJob;
  LPCWSTR lpCurrentDirectory;
  undefined8 uVar7;
  ulonglong uVar8;
  DWORD DVar9;
  undefined8 *lpEnvironment;
  longlong lVar10;
  LPWCH pWVar11;
  ulonglong in_stack_ffffffffffffee48;
  _SECURITY_ATTRIBUTES local_1188 [170];
  wchar_t *local_188;
  undefined8 local_180;
  _SECURITY_ATTRIBUTES *local_178;
  ulonglong local_170;
  _STARTUPINFOW local_168;
  LPWSTR **local_f8;
  undefined8 uStack_f0;
  undefined8 local_e8;
  ulonglong local_e0;
  LPWSTR **local_d0;
  _PROCESS_INFORMATION local_c8;
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined8 local_98;
  undefined8 uStack_90;
  HANDLE local_80;
  undefined4 local_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined8 local_68;
  undefined8 uStack_60;
  HANDLE local_58;
  char *local_50;
  undefined8 local_48;
  
  local_48 = 0xfffffffffffffffe;
  local_f8 = (LPWSTR **)0x0;
  uStack_f0 = 0;
  local_e8 = 0;
  local_e0 = 7;
  lVar1 = param_1[1];
  uVar8 = 0;
  local_d0 = (LPWSTR **)&local_f8;
  local_50 = param_2;
  for (lVar10 = *param_1; lVar10 != lVar1; lVar10 = lVar10 + 0x20) {
    FUN_140003aa0(&local_168,lVar10);
    lVar4 = FUN_1400577f6(&local_168,0x20,0);
    if (((lVar4 != -1) || (lVar4 = FUN_1400577f6(&local_168,0x22,0), lVar4 != -1)) ||
       (lVar4 = FUN_1400577f6(&local_168,10,0), lVar4 != -1)) {
      FUN_140057928(local_1188,&DAT_140edd040,1);
      in_stack_ffffffffffffee48 = in_stack_ffffffffffffee48 & 0xffffffff00000000;
      FUN_14005784d(&local_a8,&local_168,local_1188,&DAT_140edd040,in_stack_ffffffffffffee48);
      FUN_140040b8e(&local_168,&local_a8);
      FUN_140001e90(&local_a8);
      FUN_1400579d0(local_1188);
      FUN_140057928(local_1188,&DAT_140edd0d8,1);
      in_stack_ffffffffffffee48 = in_stack_ffffffffffffee48 & 0xffffffff00000000;
      FUN_14005784d(&local_c8,&local_168,local_1188,&DAT_140edd0d6,in_stack_ffffffffffffee48);
      puVar5 = (undefined4 *)FUN_1400480a2(&local_c8,0,1);
      uStack_74 = puVar5[1];
      uStack_70 = puVar5[2];
      uStack_6c = puVar5[3];
      local_68._0_4_ = puVar5[4];
      local_68._4_4_ = puVar5[5];
      uStack_60._0_4_ = puVar5[6];
      uStack_60._4_4_ = puVar5[7];
      local_78._0_2_ = (undefined2)*puVar5;
      local_78._2_2_ = (undefined2)((uint)*puVar5 >> 0x10);
      *(undefined8 *)(puVar5 + 4) = 0;
      *(undefined8 *)(puVar5 + 6) = 7;
      *(undefined2 *)puVar5 = 0;
      FUN_1400168f8(&local_78,0x22);
      local_98 = CONCAT44(local_68._4_4_,(undefined4)local_68);
      uStack_90 = CONCAT44(uStack_60._4_4_,(undefined4)uStack_60);
      local_a8 = (undefined8 *)CONCAT44(uStack_74,CONCAT22(local_78._2_2_,(undefined2)local_78));
      uStack_a0 = CONCAT44(uStack_6c,uStack_70);
      local_68 = 0;
      uStack_60 = 7;
      local_78._0_2_ = 0;
      FUN_140040b8e(&local_168,&local_a8);
      FUN_140001e90(&local_a8);
      FUN_140001e90(&local_78);
      FUN_140001e90(&local_c8);
      FUN_1400579d0(local_1188);
    }
    FUN_140016bfa(&local_f8);
    uVar8 = uVar8 + 1;
    if (uVar8 < (ulonglong)(param_1[1] - *param_1 >> 5)) {
      FUN_1400168f8(&local_f8);
    }
    FUN_140001e90(&local_168);
  }
  local_a8 = (undefined8 *)0x0;
  uStack_a0 = 0;
  local_98 = 0;
  uStack_90 = 7;
  pWVar6 = GetEnvironmentStringsW();
  for (pWVar11 = pWVar6;
      (pWVar11 != (LPWCH)0x0 &&
      ((FUN_1400168f8(&local_a8,*pWVar11), *pWVar11 != L'\0' || (pWVar11[1] != L'\0'))));
      pWVar11 = pWVar11 + 1) {
  }
  FreeEnvironmentStringsW(pWVar6);
  lVar1 = *(longlong *)(local_50 + 0x38);
  for (lVar10 = *(longlong *)(local_50 + 0x30); lVar10 != lVar1; lVar10 = lVar10 + 0x20) {
    FUN_140016bfa(&local_a8);
    FUN_1400168f8(&local_a8);
  }
  FUN_1400168f8(&local_a8,0);
  local_58 = (HANDLE)0x0;
  local_80 = (HANDLE)0x0;
  if ((*local_50 == '\0') && (*(longlong *)(local_50 + 8) == 0)) {
    local_168.lpReserved = (LPWSTR)0x0;
    local_168.hStdInput = (HANDLE)0x0;
    local_168.hStdOutput = (HANDLE)0x0;
    local_168.wShowWindow = 0;
    local_168.cbReserved2 = 0;
    local_168._68_4_ = 0;
    local_168.lpReserved2 = (LPBYTE)0x0;
    local_168.dwXCountChars = 0;
    local_168.dwYCountChars = 0;
    local_168.dwFillAttribute = 0;
    local_168.dwFlags = 0;
    local_168.dwX = 0;
    local_168.dwY = 0;
    local_168.dwXSize = 0;
    local_168.dwYSize = 0;
    local_168.lpDesktop = (LPWSTR)0x0;
    local_168.lpTitle = (LPWSTR)0x0;
    local_168.hStdError = (HANDLE)0x0;
    local_168.cb = 0x68;
    local_168._4_4_ = 0;
  }
  else {
    local_1188[0].lpSecurityDescriptor = (LPVOID)0x0;
    local_1188[0]._0_8_ = 0x18;
    local_1188[0].bInheritHandle = 1;
    local_1188[0]._20_4_ = 0;
    BVar2 = CreatePipe(&local_58,&local_80,local_1188,0);
    if (BVar2 == 0) {
      DVar9 = 0xfffffff6;
      goto LAB_140057517;
    }
    BVar2 = SetHandleInformation(local_58,1,0);
    if (BVar2 == 0) {
      CloseHandle(local_58);
      CloseHandle(local_80);
      DVar9 = 0xfffffff5;
      goto LAB_140057517;
    }
    local_168.lpReserved = (LPWSTR)0x0;
    local_168.hStdInput = (HANDLE)0x0;
    local_168.hStdOutput = (HANDLE)0x0;
    local_168.wShowWindow = 0;
    local_168.cbReserved2 = 0;
    local_168._68_4_ = 0;
    local_168.lpReserved2 = (LPBYTE)0x0;
    local_168.dwXCountChars = 0;
    local_168.dwYCountChars = 0;
    local_168.dwFillAttribute = 0;
    local_168.dwFlags = 0;
    local_168.dwX = 0;
    local_168.dwY = 0;
    local_168.dwXSize = 0;
    local_168.dwYSize = 0;
    local_168.lpDesktop = (LPWSTR)0x0;
    local_168.lpTitle = (LPWSTR)0x0;
    local_168.hStdError = (HANDLE)0x0;
    local_168.cb = 0x68;
    local_168._4_4_ = 0;
    if ((*local_50 != '\0') || (*(longlong *)(local_50 + 8) != 0)) {
      local_1188[0].lpSecurityDescriptor = (LPVOID)0x0;
      local_1188[0]._0_8_ = 0x18;
      local_1188[0].bInheritHandle = 1;
      local_1188[0]._20_4_ = 0;
      local_168.dwFillAttribute = 0;
      local_168.dwFlags = 0x100;
      local_168.hStdOutput = local_80;
      local_168.hStdError = local_80;
      local_168.hStdInput = CreateFileW(L"NUL",0xc0000000,3,local_1188,3,0,(HANDLE)0x0);
    }
  }
  local_c8.hProcess = (HANDLE)0x0;
  local_c8.hThread = (HANDLE)0x0;
  local_c8.dwProcessId = 0;
  local_c8.dwThreadId = 0;
  if ((local_50[0x48] == '\x01') &&
     (hJob = CreateJobObjectW((LPSECURITY_ATTRIBUTES)0x0,(LPCWSTR)0x0), hJob != (HANDLE)0x0)) {
    FUN_1401c5830(local_1188,0,0x90);
    local_1188[0].bInheritHandle = 0x2000;
    BVar2 = SetInformationJobObject(hJob,JobObjectExtendedLimitInformation,local_1188,0x90);
    if (BVar2 == 0) {
      CloseHandle(hJob);
      hJob = (HANDLE)0x0;
    }
  }
  else {
    hJob = (HANDLE)0x0;
  }
  if (*(ulonglong *)(local_50 + 0x28) < 8) {
    lpCurrentDirectory = (LPCWSTR)(local_50 + 0x10);
  }
  else {
    lpCurrentDirectory = *(LPCWSTR *)(local_50 + 0x10);
  }
  if (*(longlong *)(local_50 + 0x20) == 0) {
    lpCurrentDirectory = (LPCWSTR)0x0;
  }
  lpEnvironment = &local_a8;
  if (7 < uStack_90) {
    lpEnvironment = local_a8;
  }
  if (7 < local_e0) {
    local_d0 = local_f8;
  }
  BVar2 = CreateProcessW((LPCWSTR)0x0,(LPWSTR)local_d0,(LPSECURITY_ATTRIBUTES)0x0,
                         (LPSECURITY_ATTRIBUTES)0x0,1,0x8000400,lpEnvironment,lpCurrentDirectory,
                         &local_168,&local_c8);
  if (BVar2 == 0) {
    DVar9 = 0xffffffff;
    if ((*local_50 != '\0') || (*(longlong *)(local_50 + 8) != 0)) {
      DVar3 = GetLastError();
      FUN_1400559dc(&local_78,DVar3);
      local_188 = L"CreateProcess failed with error: {}";
      local_180 = 0x23;
      FUN_140057a89(local_1188,&local_188,&local_78);
      FUN_140001e90(&local_78);
      if (*local_50 == '\x01') {
        uVar7 = FUN_140055d1b(&DAT_140f2b020,local_1188);
        FUN_140057b05(uVar7);
      }
      lVar10 = *(longlong *)(local_50 + 8);
      if (lVar10 != 0) {
        puVar5 = &local_78;
        FUN_1400562c1(puVar5,local_1188);
        if (0xf < uStack_60) {
          puVar5 = (undefined4 *)CONCAT44(uStack_74,CONCAT22(local_78._2_2_,(undefined2)local_78));
        }
        FUN_140003816(lVar10,puVar5,local_68);
        FUN_14000109c(&local_78);
      }
      FUN_140001e90(local_1188);
    }
    goto LAB_140057517;
  }
  if (hJob == (HANDLE)0x0) {
LAB_1400572aa:
    hJob = (HANDLE)0x0;
  }
  else {
    BVar2 = AssignProcessToJobObject(hJob,local_c8.hProcess);
    if (BVar2 == 0) {
      CloseHandle(hJob);
      goto LAB_1400572aa;
    }
  }
  if ((*local_50 != '\0') || (*(longlong *)(local_50 + 8) != 0)) {
    CloseHandle(local_80);
    CloseHandle(local_168.hStdInput);
    local_78._0_2_ = 0;
    local_78._2_2_ = 0;
    while (BVar2 = ReadFile(local_58,local_1188,0xfff,&local_78,(LPOVERLAPPED)0x0), BVar2 != 0) {
      if (*local_50 == '\x01') {
        local_170 = (ulonglong)CONCAT22(local_78._2_2_,(undefined2)local_78);
        local_178 = local_1188;
        FUN_140057b39(&PTR_DAT_140f17c90,&local_178);
      }
      if (*(longlong *)(local_50 + 8) != 0) {
        FUN_140003816(*(longlong *)(local_50 + 8),local_1188,
                      CONCAT22(local_78._2_2_,(undefined2)local_78));
      }
    }
    CloseHandle(local_58);
  }
  WaitForSingleObject(local_c8.hProcess,0xffffffff);
  local_1188[0]._0_8_ = local_1188[0]._0_8_ & 0xffffffff00000000;
  GetExitCodeProcess(local_c8.hProcess,&local_1188[0].nLength);
  CloseHandle(local_c8.hThread);
  CloseHandle(local_c8.hProcess);
  if (hJob != (HANDLE)0x0) {
    CloseHandle(hJob);
  }
  DVar9 = local_1188[0].nLength;
LAB_140057517:
  FUN_140001e90(&local_a8);
  FUN_140001e90(&local_f8);
  return DVar9;
}

