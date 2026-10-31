/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 100cf516 */

uint __fastcall FUN_100cf516(HANDLE param_1,LPCVOID param_2,int param_3,uint param_4)

{
  HANDLE hProcess;
  BOOL BVar1;
  DWORD dwErrCode;
  DWORD DVar2;
  size_t sVar3;
  void *lpBuffer;
  int iVar4;
  char *pcVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  LPCVOID pvVar9;
  undefined4 local_1b0;
  undefined4 uStack_1ac;
  undefined4 uStack_1a8;
  undefined4 uStack_1a4;
  undefined4 local_1a0;
  undefined4 uStack_19c;
  undefined4 uStack_198;
  undefined4 uStack_194;
  undefined4 local_190;
  undefined4 uStack_18c;
  undefined4 uStack_188;
  undefined4 uStack_184;
  undefined4 local_180;
  undefined4 uStack_17c;
  undefined4 uStack_178;
  int iStack_174;
  undefined1 local_170 [6];
  ushort local_16a;
  ushort local_15c;
  short local_158;
  SIZE_T local_11c;
  undefined4 local_118;
  uint local_f0;
  uint local_ec;
  undefined4 local_a0;
  undefined4 local_9c;
  uint local_98;
  uint local_94;
  DWORD local_78 [3];
  uint uStack_6c;
  uint local_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined8 local_58;
  uint local_50;
  int local_4c;
  LPVOID local_48;
  uint local_44;
  uint local_40;
  uint local_3c;
  uint local_38;
  uint local_34;
  void *local_30;
  HANDLE local_2c;
  LPCVOID local_28;
  uint local_24;
  undefined1 *local_20;
  void *local_1c;
  undefined1 *local_18;
  undefined4 local_14;
  
  local_20 = (undefined1 *)&local_1b0;
  local_14 = 0xffffffff;
  local_18 = &LAB_100d06f0;
  local_1c = ExceptionList;
  local_180 = 0;
  uStack_17c = 0;
  uStack_178 = 0;
  iStack_174 = 0;
  local_190 = 0;
  uStack_18c = 0;
  uStack_188 = 0;
  uStack_184 = 0;
  local_1a0 = 0;
  uStack_19c = 0;
  uStack_198 = 0;
  uStack_194 = 0;
  local_1b0 = 0;
  uStack_1ac = 0;
  uStack_1a8 = 0;
  uStack_1a4 = 0;
  ExceptionList = &local_1c;
  local_2c = param_1;
  local_28 = param_2;
  BVar1 = ReadProcessMemory(param_1,param_2,&local_1b0,0x40,&local_38);
  local_24 = 0;
  if (BVar1 == 0) {
    ExceptionList = local_1c;
    return 0;
  }
  if (local_38 < 0x40) {
    ExceptionList = local_1c;
    return 0;
  }
  _memset(local_170,0,0xf8);
  BVar1 = ReadProcessMemory(local_2c,(LPCVOID)(iStack_174 + (int)local_28),local_170,0xf8,&local_38)
  ;
  if (BVar1 == 0) {
    ExceptionList = local_1c;
    return local_24;
  }
  if (local_38 < 0xf8) {
    ExceptionList = local_1c;
    return local_24;
  }
  if (local_158 != 0x10b) {
    SetLastError(9);
    ExceptionList = local_1c;
    return local_24;
  }
  uVar7 = 0;
  local_a0 = 0;
  local_9c = 0;
  if (local_16a != 0) {
    pvVar9 = (LPCVOID)((int)local_28 + (uint)local_15c + iStack_174 + 0x18);
    do {
      local_58 = 0;
      local_68 = 0;
      uStack_64 = 0;
      uStack_60 = 0;
      uStack_5c = 0;
      local_78[0] = 0;
      local_78[1] = 0;
      local_78[2] = 0;
      uStack_6c = 0;
      BVar1 = ReadProcessMemory(local_2c,pvVar9,local_78,0x28,&local_38);
      if (BVar1 == 0) {
        ExceptionList = local_1c;
        return local_24;
      }
      if (local_38 < 0x28) {
        ExceptionList = local_1c;
        return local_24;
      }
      if (((local_98 == 0) && (uStack_6c <= local_f0)) && (local_f0 < local_68 + uStack_6c)) {
        local_98 = uStack_6c;
        local_94 = local_68;
      }
      uVar7 = uVar7 + 1;
      pvVar9 = (LPCVOID)((int)pvVar9 + 0x28);
    } while (uVar7 < local_16a);
  }
  uVar7 = local_f0;
  if ((local_f0 != 0) && (local_ec == 0)) {
    BVar1 = ReadProcessMemory(local_2c,(LPCVOID)((int)local_28 + local_f0),local_78,0x14,
                              (SIZE_T *)0x0);
    if (BVar1 == 0) {
      ExceptionList = local_1c;
      return local_24;
    }
    pvVar9 = (LPCVOID)(uVar7 + (int)local_28);
    while( true ) {
      pvVar9 = (LPCVOID)((int)pvVar9 + 0x14);
      local_ec = local_ec + 0x14;
      if (uStack_6c == 0) break;
      BVar1 = ReadProcessMemory(local_2c,pvVar9,local_78,0x14,(SIZE_T *)0x0);
      if (BVar1 == 0) {
        ExceptionList = local_1c;
        return local_24;
      }
    }
    dwErrCode = GetLastError();
    OutputDebugStringW(
                      L"[This PE file has an import table, but the import table size is marked as 0. This is an error.If it is not repaired, the launched program will not work properly, Detours has automatically repaired its import table size for you! ! !]\r\n"
                      );
    DVar2 = GetLastError();
    if (DVar2 != dwErrCode) {
      SetLastError(dwErrCode);
    }
  }
  uVar7 = (uint)((ulonglong)param_4 * 0x14);
  if ((int)((ulonglong)param_4 * 0x14 >> 0x20) != 0) {
    ExceptionList = local_1c;
    return 0;
  }
  local_40 = (local_ec / 5 & 0xfffffffc) * 5;
  uVar6 = uVar7 + local_40;
  if ((CARRY4(uVar7,local_40)) || (local_50 = uVar6 + 7 & 0xfffffff8, local_50 < uVar6)) {
    ExceptionList = local_1c;
    return 0;
  }
  local_3c = param_4 * 0x10 + local_50;
  if (CARRY4(param_4 * 0x10,local_50)) {
    ExceptionList = local_1c;
    return 0;
  }
  local_34 = local_3c;
  if (param_4 != 0) {
    uVar7 = 0;
    do {
      uVar6 = local_34;
      sVar3 = _strlen(*(char **)(param_3 + uVar7 * 4));
      local_34 = (sVar3 & 0xfffffffc) + uVar6 + 4;
      if (local_34 < uVar6) {
        ExceptionList = local_1c;
        return 0;
      }
      uVar7 = uVar7 + 1;
    } while (param_4 != uVar7);
  }
  local_14 = 0xffffffff;
  local_30 = (void *)FUN_102332c0(local_34);
  uVar7 = local_34;
  local_14 = 0xffffffff;
  _memset(local_30,0,local_34);
  local_48 = (LPVOID)FUN_100d057c(uVar7);
  uVar7 = local_40;
  if (local_48 == (LPVOID)0x0) {
    local_24 = 0;
  }
  else {
    local_78[0] = 0;
    if (local_f0 != 0) {
      BVar1 = ReadProcessMemory(local_2c,(LPCVOID)(local_f0 + (int)local_28),
                                (LPVOID)((int)local_30 + param_4 * 0x14),local_40,&local_38);
      local_24 = 0;
      if ((BVar1 == 0) || (local_38 < uVar7)) goto code_r0x100cfa6c;
    }
    local_44 = (int)local_48 - (int)local_28;
    lpBuffer = local_30;
    uVar7 = local_3c;
    if (param_4 != 0) {
      local_4c = (int)local_30 + 1;
      local_24 = 0;
      uVar6 = 0;
      do {
        uVar8 = local_34 - uVar7;
        local_3c = uVar7;
        iVar4 = FUN_100d065c((int)lpBuffer + uVar7,uVar8,*(undefined4 *)(param_3 + uVar6 * 4));
        lpBuffer = local_30;
        uVar7 = local_3c;
        if (iVar4 < 0) goto code_r0x100cfa6c;
        if (1 < uVar8) {
          pcVar5 = (char *)(local_3c + local_4c);
          do {
            if ((pcVar5[-1] == '?') && (*pcVar5 == '?')) {
              pcVar5[-0xffffffff00000001] = '3';
              pcVar5[0] = '2';
              break;
            }
            uVar8 = uVar8 - 1;
            pcVar5 = pcVar5 + 1;
          } while (1 < uVar8);
        }
        iVar4 = uVar6 * 0x10 + local_50;
        *(uint *)((int)local_30 + uVar6 * 0x14) = iVar4 + local_44;
        *(undefined4 *)((int)local_30 + iVar4) = 0x80000001;
        *(undefined4 *)((int)local_30 + iVar4 + 4) = 0;
        *(uint *)((int)local_30 + uVar6 * 0x14 + 0x10) = local_44 + iVar4 + 8;
        *(undefined4 *)((int)local_30 + iVar4 + 8) = 0x80000001;
        *(undefined4 *)((int)local_30 + iVar4 + 0xc) = 0;
        *(undefined4 *)((int)local_30 + uVar6 * 0x14 + 4) = 0;
        local_24 = 0;
        *(undefined4 *)((int)local_30 + uVar6 * 0x14 + 8) = 0;
        *(uint *)((int)local_30 + uVar6 * 0x14 + 0xc) = local_3c + local_44;
        local_40 = uVar6;
        sVar3 = _strlen(*(char **)(param_3 + uVar6 * 4));
        uVar7 = uVar7 + (sVar3 & 0xfffffffc) + 4;
        uVar6 = local_40 + 1;
        local_14 = 0xffffffff;
      } while (uVar6 != param_4);
    }
    BVar1 = WriteProcessMemory(local_2c,local_48,lpBuffer,uVar7,(SIZE_T *)0x0);
    local_24 = 0;
    if (BVar1 != 0) {
      if (local_98 == 0) {
        local_98 = local_44;
        local_94 = local_34;
      }
      local_f0 = local_44;
      local_ec = local_34;
      iVar4 = FUN_100f8631(local_2c,local_28,local_11c,0x40,local_78);
      pvVar9 = local_28;
      hProcess = local_2c;
      if (iVar4 != 0) {
        local_118 = 0;
        local_24 = 0;
        BVar1 = WriteProcessMemory(local_2c,local_28,&local_1b0,0x40,(SIZE_T *)0x0);
        if ((BVar1 != 0) &&
           (BVar1 = WriteProcessMemory(hProcess,(LPVOID)(iStack_174 + (int)pvVar9),local_170,0xf8,
                                       (SIZE_T *)0x0), BVar1 != 0)) {
          BVar1 = VirtualProtectEx(local_2c,local_28,local_11c,local_78[0],local_78);
          local_24 = (uint)(BVar1 != 0);
        }
      }
    }
  }
code_r0x100cfa6c:
  local_14 = 0xffffffff;
  thunk_FUN_10274120(local_30);
  ExceptionList = local_1c;
  return local_24;
}

