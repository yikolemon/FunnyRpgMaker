/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 100f7a0f */

int FUN_100f7a0f(undefined4 *param_1)

{
  undefined1 *_Dst;
  undefined1 *puVar1;
  undefined4 *puVar2;
  DWORD DVar3;
  undefined4 *puVar4;
  DWORD DVar5;
  BOOL BVar6;
  uint uVar7;
  int iVar8;
  HANDLE hProcess;
  int iVar9;
  undefined4 *puVar10;
  CONTEXT local_2f4;
  int local_28;
  undefined4 *local_24;
  undefined1 *local_20;
  void *local_1c;
  undefined1 *local_18;
  undefined4 local_14;
  
  local_20 = (undefined1 *)&local_2f4;
  local_14 = 0xffffffff;
  local_18 = &LAB_100f89a0;
  local_1c = ExceptionList;
  ExceptionList = &local_1c;
  if (param_1 != (undefined4 *)0x0) {
    *param_1 = DAT_1039d6cc;
  }
  DVar3 = DAT_1039d6c0;
  DVar5 = GetCurrentThreadId();
  iVar9 = 0x10dd;
  if (DVar3 == DVar5) {
    puVar10 = DAT_1039d6c4;
    if (DAT_1039d6d0 == 0) {
      for (; puVar4 = DAT_1039d6c8, puVar2 = local_24, puVar10 != (undefined4 *)0x0;
          puVar10 = (undefined4 *)*puVar10) {
        if (puVar10[1] == 0) {
          puVar1 = (undefined1 *)puVar10[3];
          iVar9 = *(int *)(puVar10[4] + 0x44);
          _Dst = puVar1 + 5;
          *puVar1 = 0xe9;
          *(int *)(puVar1 + 1) = iVar9 - (int)_Dst;
          iVar9 = puVar10[4];
          if (_Dst < *(undefined1 **)(iVar9 + 0x40)) {
            _memset(_Dst,0xcc,(int)*(undefined1 **)(iVar9 + 0x40) - (int)_Dst);
            iVar9 = puVar10[4];
          }
        }
        else {
          FUN_1025b2d0(puVar10[3],puVar10[4] + 0x20,*(undefined1 *)(puVar10[4] + 0x36));
          iVar9 = puVar10[3];
        }
        *(int *)puVar10[2] = iVar9;
      }
      while (local_24 = puVar4, local_24 != (undefined4 *)0x0) {
        local_14 = 0xffffffff;
        local_2f4.ContextFlags = 0x10001;
        BVar6 = GetThreadContext((HANDLE)local_24[1],&local_2f4);
        puVar10 = DAT_1039d6c4;
        if (BVar6 != 0) {
          for (; puVar10 != (undefined4 *)0x0; puVar10 = (undefined4 *)*puVar10) {
            if (puVar10[1] == 0) {
              if (((uint)puVar10[3] <= local_2f4.Eip) &&
                 (iVar9 = puVar10[4], local_2f4.Eip < (uint)*(byte *)(iVar9 + 0x36) + puVar10[3])) {
                iVar8 = FUN_100f7d5e();
                local_2f4.Eip = iVar8 + iVar9;
                goto code_r0x100f7ba4;
              }
            }
            else if (local_2f4.Eip < puVar10[4] + 0x48 && (uint)puVar10[4] <= local_2f4.Eip) {
              iVar9 = puVar10[3];
              uVar7 = FUN_100f7d3e();
              local_2f4.Eip = (uVar7 & 0xff) + iVar9;
code_r0x100f7ba4:
              local_14 = 0xffffffff;
              SetThreadContext((HANDLE)local_24[1],&local_2f4);
            }
          }
        }
        puVar2 = local_24;
        puVar4 = (undefined4 *)*local_24;
      }
      local_14 = 0xffffffff;
      local_24 = puVar2;
      hProcess = GetCurrentProcess();
      if (DAT_1039d6c4 != (undefined4 *)0x0) {
        local_28 = 0;
        puVar10 = DAT_1039d6c4;
        do {
          VirtualProtect((LPVOID)puVar10[3],(uint)*(byte *)(puVar10[4] + 0x36),puVar10[5],
                         &local_2f4.ContextFlags);
          FlushInstructionCache(hProcess,(LPCVOID)puVar10[3],(uint)*(byte *)(puVar10[4] + 0x36));
          if ((puVar10[1] != 0) && (puVar10[4] != 0)) {
            FUN_100f7976();
            puVar10[4] = 0;
            local_28 = 1;
          }
          puVar2 = (undefined4 *)*puVar10;
          local_14 = 0xffffffff;
          local_24 = puVar10;
          FUN_102283a0(puVar10,0x18);
          puVar10 = puVar2;
        } while (puVar2 != (undefined4 *)0x0);
        DAT_1039d6c4 = (undefined4 *)0x0;
        if ((local_28 != 0) && (DAT_1039d6bc == 0)) {
          FUN_100f7d80();
        }
      }
      FUN_100f79a1();
      puVar10 = DAT_1039d6c8;
      while (puVar10 != (undefined4 *)0x0) {
        local_24 = puVar10;
        ResumeThread((HANDLE)puVar10[1]);
        puVar10 = (undefined4 *)*puVar10;
        local_14 = 0xffffffff;
        FUN_102283a0(local_24,8);
      }
      DAT_1039d6c8 = (undefined4 *)0x0;
      DAT_1039d6c0 = 0;
      iVar9 = DAT_1039d6d0;
      if (param_1 != (undefined4 *)0x0) {
        *param_1 = DAT_1039d6cc;
        iVar9 = DAT_1039d6d0;
      }
    }
    else {
      FUN_100f7832();
      iVar9 = DAT_1039d6d0;
    }
  }
  ExceptionList = local_1c;
  return iVar9;
}

