/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 100c6055 */

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 **** FUN_100c6055(int *param_1,char *param_2)

{
  int iVar1;
  uint *puVar2;
  undefined4 ****ppppuVar3;
  undefined4 *****hJob;
  BOOL BVar4;
  LPCWSTR lpCurrentDirectory;
  undefined4 uVar5;
  int *unaff_FS_OFFSET;
  undefined4 ****local_1110;
  undefined4 ****local_110c;
  HANDLE local_1108;
  HANDLE local_1104;
  undefined4 ****local_1100;
  LPWSTR pWStack_10fc;
  LPWSTR pWStack_10f8;
  LPWSTR pWStack_10f4;
  undefined8 local_10f0;
  int local_10e0;
  LPWSTR ***local_10dc;
  undefined4 ****local_10d8 [5];
  uint local_10c4;
  _PROCESS_INFORMATION local_10c0 [2];
  LPWSTR ***local_10a0;
  undefined4 uStack_109c;
  undefined4 uStack_1098;
  undefined4 uStack_1094;
  undefined4 local_1090;
  uint local_108c;
  wchar_t *local_1088;
  undefined4 uStack_1084;
  _STARTUPINFOW local_1080;
  _SECURITY_ATTRIBUTES local_1030;
  undefined4 uStack_1024;
  undefined4 local_1020;
  undefined4 uStack_101c;
  undefined4 uStack_1018;
  undefined4 uStack_1014;
  undefined4 local_1010;
  undefined4 uStack_100c;
  undefined4 uStack_1008;
  undefined4 uStack_1004;
  undefined4 local_1000;
  undefined4 uStack_ffc;
  undefined4 uStack_ff8;
  undefined4 uStack_ff4;
  undefined4 local_ff0;
  undefined4 uStack_fec;
  undefined4 uStack_fe8;
  undefined4 uStack_fe4;
  undefined4 local_fe0;
  undefined4 uStack_fdc;
  undefined4 uStack_fd8;
  undefined4 uStack_fd4;
  undefined4 local_fd0;
  undefined4 uStack_fcc;
  undefined4 uStack_fc8;
  undefined4 uStack_fc4;
  undefined1 *local_28;
  undefined1 *local_24;
  int local_20;
  undefined1 *local_1c;
  undefined4 local_18;
  undefined4 uStack_14;
  
  local_28 = &stack0xfffffffc;
  uStack_14 = 0x100c6068;
  local_24 = (undefined1 *)&local_1110;
  local_1c = &LAB_100c7e00;
  local_20 = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = (int)&local_20;
  local_1090 = 0;
  local_10a0 = (LPWSTR ***)0x0;
  uStack_109c = 0;
  uStack_1098 = 0;
  uStack_1094 = 0;
  local_108c = 7;
  local_1110 = (undefined4 ****)0x0;
  local_10e0 = param_1[1];
  local_10dc = (LPWSTR ***)&local_10a0;
  iVar1 = *param_1;
  while (iVar1 != local_10e0) {
    local_18 = 0;
    local_110c = (undefined4 ****)iVar1;
    FUN_10003728(iVar1);
    local_18 = 1;
    iVar1 = FUN_100c6a0c();
    if (((iVar1 != -1) || (iVar1 = FUN_100c6a0c(), iVar1 != -1)) ||
       (iVar1 = FUN_100c6a0c(), iVar1 != -1)) {
      FUN_1008ec70();
      local_18 = 6;
      FUN_1008eb9b(&local_1080,&local_1030,&local_1100,&DAT_10356e0e,0);
      local_18 = 7;
      FUN_100128b2(&local_1080);
      local_18 = 0xffffffff;
      FUN_10001134();
      FUN_10018a12();
      local_18 = 1;
      FUN_1008ec70();
      local_18 = 2;
      FUN_1008eb9b(local_10d8,&local_1030,local_10c0,&DAT_10356fb0,0);
      local_18 = 3;
      puVar2 = (uint *)FUN_100a2816(0,1,0x22);
      local_10f0._0_4_ = puVar2[4];
      local_10f0._4_4_ = puVar2[5];
      local_1100 = (undefined4 ****)*puVar2;
      pWStack_10fc = (LPWSTR)puVar2[1];
      pWStack_10f8 = (LPWSTR)puVar2[2];
      pWStack_10f4 = (LPWSTR)puVar2[3];
      puVar2[4] = 0;
      puVar2[5] = 7;
      *(undefined2 *)puVar2 = 0;
      local_18 = 4;
      FUN_100045e8(0x22);
      local_1080.dwX = (DWORD)local_10f0;
      local_1080.dwY = local_10f0._4_4_;
      local_1080.cb = (DWORD)local_1100;
      local_1080.lpReserved = pWStack_10fc;
      local_1080.lpDesktop = pWStack_10f8;
      local_1080.lpTitle = pWStack_10f4;
      local_10f0 = 0x700000000;
      local_1100 = (undefined4 ****)((uint)local_1100 & 0xffff0000);
      local_18 = 5;
      FUN_100128b2(&local_1080);
      local_18 = 0xffffffff;
      FUN_10001134();
      FUN_10001134();
      FUN_10001134();
      FUN_10018a12();
    }
    local_18 = 1;
    FUN_100048de();
    local_1110 = (undefined4 ****)((int)local_1110 + 1);
    if (local_1110 < (undefined4 ****)((param_1[1] - *param_1 >> 3) * -0x55555555)) {
      FUN_100045e8(0x20);
    }
    local_18 = 0xffffffff;
    FUN_10001134();
    iVar1 = (int)local_110c + 0x18;
  }
  local_1100 = (undefined4 *****)0x0;
  pWStack_10fc = (LPWSTR)0x0;
  pWStack_10f8 = (LPWSTR)0x0;
  pWStack_10f4 = (LPWSTR)0x0;
  local_10f0 = 0x700000000;
  local_18 = 8;
  ppppuVar3 = (undefined4 ****)GetEnvironmentStringsW();
  local_110c = ppppuVar3;
  while ((ppppuVar3 != (undefined4 ****)0x0 &&
         ((local_1110 = ppppuVar3, FUN_100045e8(*(WCHAR *)ppppuVar3), *(WCHAR *)local_1110 != L'\0'
          || (*(LPWCH)((int)local_1110 + 2) != L'\0'))))) {
    ppppuVar3 = (undefined4 ****)((int)local_1110 + 2);
  }
  FreeEnvironmentStringsW((LPWCH)local_110c);
  local_110c = *(undefined4 *****)(param_2 + 0x24);
  for (local_1110 = *(undefined4 *****)(param_2 + 0x20); local_1110 != local_110c;
      local_1110 = local_1110 + 6) {
    FUN_100048de();
    FUN_100045e8(0);
  }
  local_1110 = &local_1100;
  FUN_100045e8(0);
  local_1108 = (HANDLE)0x0;
  local_1104 = (HANDLE)0x0;
  if ((*param_2 == '\0') && (*(int *)(param_2 + 4) == 0)) {
    local_1080.lpReserved2 = (LPBYTE)0x0;
    local_1080.hStdInput = (HANDLE)0x0;
    local_1080.hStdOutput = (HANDLE)0x0;
    local_1080.hStdError = (HANDLE)0x0;
    local_1080.dwYCountChars = 0;
    local_1080.dwFillAttribute = 0;
    local_1080.dwFlags = 0;
    local_1080.wShowWindow = 0;
    local_1080.cbReserved2 = 0;
    local_1080.dwXSize = 0;
    local_1080.dwYSize = 0;
    local_1080.dwXCountChars = 0;
    local_1080.lpReserved = (LPWSTR)0x0;
    local_1080.lpDesktop = (LPWSTR)0x0;
    local_1080.lpTitle = (LPWSTR)0x0;
    local_1080.dwX = 0;
    local_1080.dwY = 0;
    local_1080.cb = 0x44;
  }
  else {
    local_1030.lpSecurityDescriptor = (LPVOID)0x0;
    local_1030.nLength = 0xc;
    local_1030.bInheritHandle = 1;
    BVar4 = CreatePipe(&local_1108,&local_1104,&local_1030,0);
    if (BVar4 == 0) {
      local_1110 = (undefined4 ****)0xfffffff6;
      goto code_r0x100c6874;
    }
    BVar4 = SetHandleInformation(local_1108,1,0);
    if (BVar4 == 0) {
      CloseHandle(local_1108);
      local_1110 = (undefined4 ****)0xfffffff5;
      CloseHandle(local_1104);
      goto code_r0x100c6874;
    }
    local_1080.lpReserved2 = (LPBYTE)0x0;
    local_1080.hStdInput = (HANDLE)0x0;
    local_1080.hStdOutput = (HANDLE)0x0;
    local_1080.hStdError = (HANDLE)0x0;
    local_1080.dwYCountChars = 0;
    local_1080.dwFillAttribute = 0;
    local_1080.dwFlags = 0;
    local_1080.wShowWindow = 0;
    local_1080.cbReserved2 = 0;
    local_1080.dwXSize = 0;
    local_1080.dwYSize = 0;
    local_1080.dwXCountChars = 0;
    local_1080.lpReserved = (LPWSTR)0x0;
    local_1080.lpDesktop = (LPWSTR)0x0;
    local_1080.lpTitle = (LPWSTR)0x0;
    local_1080.dwX = 0;
    local_1080.dwY = 0;
    local_1080.cb = 0x44;
    if ((*param_2 != '\0') || (*(int *)(param_2 + 4) != 0)) {
      local_1030.lpSecurityDescriptor = (LPVOID)0x0;
      local_1030.nLength = 0xc;
      local_1030.bInheritHandle = 1;
      local_1080.dwFlags = 0x100;
      local_1080.hStdOutput = local_1104;
      local_1080.hStdError = local_1104;
      local_1080.hStdInput = CreateFileW(L"NUL",0xc0000000,3,&local_1030,3,0,(HANDLE)0x0);
    }
  }
  local_10c0[0].hProcess = (HANDLE)0x0;
  local_10c0[0].hThread = (HANDLE)0x0;
  local_10c0[0].dwProcessId = 0;
  local_10c0[0].dwThreadId = 0;
  local_110c = (undefined4 *****)0x0;
  if (param_2[0x2c] == '\x01') {
    local_110c = (undefined4 *****)0x0;
    hJob = CreateJobObjectW((LPSECURITY_ATTRIBUTES)0x0,(LPCWSTR)0x0);
    if (hJob != (undefined4 *****)0x0) {
      uStack_101c = 0;
      uStack_1018 = 0;
      uStack_1014 = 0;
      local_fd0 = 0;
      uStack_fcc = 0;
      uStack_fc8 = 0;
      uStack_fc4 = 0;
      local_fe0 = 0;
      uStack_fdc = 0;
      uStack_fd8 = 0;
      uStack_fd4 = 0;
      local_ff0 = 0;
      uStack_fec = 0;
      uStack_fe8 = 0;
      uStack_fe4 = 0;
      local_1000 = 0;
      uStack_ffc = 0;
      uStack_ff8 = 0;
      uStack_ff4 = 0;
      local_1010 = 0;
      uStack_100c = 0;
      uStack_1008 = 0;
      uStack_1004 = 0;
      local_1030.nLength = 0;
      local_1030.lpSecurityDescriptor = (LPVOID)0x0;
      local_1030.bInheritHandle = 0;
      uStack_1024 = 0;
      local_1020 = 0x2000;
      local_110c = hJob;
      BVar4 = SetInformationJobObject(hJob,JobObjectExtendedLimitInformation,&local_1030,0x70);
      if (BVar4 == 0) {
        CloseHandle(local_110c);
        local_110c = (undefined4 *****)0x0;
      }
    }
  }
  if (*(uint *)(param_2 + 0x1c) < 8) {
    lpCurrentDirectory = (LPCWSTR)(param_2 + 8);
  }
  else {
    lpCurrentDirectory = *(LPCWSTR *)(param_2 + 8);
  }
  if (*(int *)(param_2 + 0x18) == 0) {
    lpCurrentDirectory = (LPCWSTR)0x0;
  }
  if (7 < local_10f0._4_4_) {
    local_1110 = local_1100;
  }
  if (7 < local_108c) {
    local_10dc = local_10a0;
  }
  BVar4 = CreateProcessW((LPCWSTR)0x0,(LPWSTR)local_10dc,_DAT_102968d0,_UNK_102968d4,_UNK_102968d8,
                         _UNK_102968dc,local_1110,lpCurrentDirectory,&local_1080,local_10c0);
  if (BVar4 == 0) {
    local_1110 = (undefined4 ****)0xffffffff;
    if ((*param_2 != '\0') || (*(int *)(param_2 + 4) != 0)) {
      GetLastError();
      FUN_100c4e7c();
      local_18 = 0xb;
      local_1088 = L"CreateProcess failed with error: {}";
      uStack_1084 = 0x23;
      FUN_1007dd49(&local_1030,0x2310356260,local_10d8);
      local_18 = 0xffffffff;
      local_110c = local_10d8;
      FUN_10001134();
      local_18 = 9;
      if (*param_2 == '\x01') {
        uVar5 = FUN_100c5036();
        FUN_100c6a56(uVar5);
      }
      local_10e0 = *(int *)(param_2 + 4);
      if (local_10e0 != 0) {
        FUN_100c5628();
        local_18 = 10;
        if (0xf < local_10c4) {
          local_110c = local_10d8[0];
        }
        FUN_1000347e();
        local_18 = 0xffffffff;
        FUN_10001fee();
      }
      local_18 = 0xffffffff;
      FUN_10001134();
    }
  }
  else {
    local_1110 = (undefined4 *****)0x0;
    if ((undefined4 *****)local_110c != (undefined4 *****)0x0) {
      BVar4 = AssignProcessToJobObject(local_110c,local_10c0[0].hProcess);
      if (BVar4 == 0) {
        CloseHandle(local_110c);
      }
      else {
        local_1110 = local_110c;
      }
    }
    if ((*param_2 != '\0') || (*(int *)(param_2 + 4) != 0)) {
      CloseHandle(local_1104);
      CloseHandle(local_1080.hStdInput);
      local_10d8[0] = (undefined4 *****)0x0;
      while (BVar4 = ReadFile(local_1108,&local_1030,0xfff,(LPDWORD)local_10d8,(LPOVERLAPPED)0x0),
            BVar4 != 0) {
        if (*param_2 == '\x01') {
          thunk_FUN_1007f2cb(&PTR_DAT_10389cd0,&local_1030,local_10d8[0]);
        }
        if (*(int *)(param_2 + 4) != 0) {
          FUN_1000347e();
        }
      }
      CloseHandle(local_1108);
    }
    WaitForSingleObject(local_10c0[0].hProcess,0xffffffff);
    local_1030.nLength = 0;
    GetExitCodeProcess(local_10c0[0].hProcess,&local_1030.nLength);
    CloseHandle(local_10c0[0].hThread);
    CloseHandle(local_10c0[0].hProcess);
    if ((undefined4 *****)local_1110 != (undefined4 *****)0x0) {
      CloseHandle(local_1110);
    }
    local_1110 = (undefined4 ****)local_1030.nLength;
  }
code_r0x100c6874:
  local_18 = 0xffffffff;
  FUN_10001134();
  FUN_10001134();
  *unaff_FS_OFFSET = local_20;
  return local_1110;
}

