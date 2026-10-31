/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 1800fbe06 */

int FUN_1800fbe06(undefined8 *param_1)

{
  undefined1 *puVar1;
  undefined1 *puVar2;
  ulonglong uVar3;
  undefined8 *puVar4;
  bool bVar5;
  DWORD DVar6;
  byte bVar7;
  DWORD DVar8;
  BOOL BVar9;
  uint uVar10;
  int iVar11;
  longlong lVar12;
  HANDLE hProcess;
  longlong *plVar13;
  undefined8 *puVar14;
  _CONTEXT local_518;
  longlong *local_40;
  undefined8 local_38;
  
  local_38 = 0xfffffffffffffffe;
  if (param_1 != (undefined8 *)0x0) {
    *param_1 = DAT_180419008;
  }
  DVar6 = DAT_180418ff0;
  DVar8 = GetCurrentThreadId();
  iVar11 = 0x10dd;
  if (DVar6 == DVar8) {
    puVar14 = DAT_180418ff8;
    plVar13 = DAT_180419000;
    if (DAT_180419010 == 0) {
      for (; DAT_180419000 = plVar13, puVar14 != (undefined8 *)0x0; puVar14 = (undefined8 *)*puVar14
          ) {
        if (*(int *)(puVar14 + 1) == 0) {
          lVar12 = puVar14[4];
          *(undefined2 *)(lVar12 + 0x58) = 0x25ff;
          *(undefined4 *)(lVar12 + 0x5a) = 0xfffffff2;
          iVar11 = *(int *)(puVar14 + 4);
          puVar2 = (undefined1 *)puVar14[3];
          puVar1 = puVar2 + 5;
          *puVar2 = 0xe9;
          *(int *)(puVar2 + 1) = (iVar11 - (int)puVar1) + 0x58;
          lVar12 = puVar14[4];
          if (puVar1 < *(undefined1 **)(lVar12 + 0x48)) {
            FUN_1802a89a0(puVar1,CONCAT71((int7)((ulonglong)puVar2 >> 8),0xcc),
                          (longlong)*(undefined1 **)(lVar12 + 0x48) - (longlong)puVar1);
            lVar12 = puVar14[4];
          }
        }
        else {
          FUN_1802a82f0(puVar14[3],puVar14[4] + 0x20,*(undefined1 *)(puVar14[4] + 0x3e));
          lVar12 = puVar14[3];
        }
        *(longlong *)puVar14[2] = lVar12;
        plVar13 = DAT_180419000;
      }
      if (plVar13 != (longlong *)0x0) {
        do {
          local_518.ContextFlags = 0x100003;
          BVar9 = GetThreadContext((HANDLE)plVar13[1],&local_518);
          puVar14 = DAT_180418ff8;
          if (BVar9 != 0) {
            for (; puVar14 != (undefined8 *)0x0; puVar14 = (undefined8 *)*puVar14) {
              if (*(int *)(puVar14 + 1) == 0) {
                uVar3 = puVar14[3];
                if ((uVar3 <= local_518.Rip) &&
                   (lVar12 = puVar14[4], local_518.Rip < *(byte *)(lVar12 + 0x3e) + uVar3)) {
                  uVar10 = FUN_1800fc18d(lVar12,(int)local_518.Rip - (int)uVar3 & 0xff);
                  local_518.Rip = (ulonglong)uVar10 + lVar12;
                  goto code_r0x0001800fbfa2;
                }
              }
              else {
                uVar3 = puVar14[4];
                if (local_518.Rip < uVar3 + 0x60 && uVar3 <= local_518.Rip) {
                  lVar12 = puVar14[3];
                  bVar7 = FUN_1800fc16a(uVar3,(int)local_518.Rip - (int)uVar3);
                  local_518.Rip = (ulonglong)bVar7 + lVar12;
code_r0x0001800fbfa2:
                  SetThreadContext((HANDLE)plVar13[1],&local_518);
                }
              }
            }
          }
          plVar13 = (longlong *)*plVar13;
        } while (plVar13 != (longlong *)0x0);
      }
      hProcess = GetCurrentProcess();
      if (DAT_180418ff8 != (undefined8 *)0x0) {
        bVar5 = false;
        puVar14 = DAT_180418ff8;
        do {
          VirtualProtect((LPVOID)puVar14[3],(ulonglong)*(byte *)(puVar14[4] + 0x3e),
                         *(DWORD *)(puVar14 + 5),(PDWORD)&local_518);
          FlushInstructionCache
                    (hProcess,(LPCVOID)puVar14[3],(ulonglong)*(byte *)(puVar14[4] + 0x3e));
          if ((*(int *)(puVar14 + 1) != 0) && (puVar14[4] != 0)) {
            FUN_1800fbd46();
            puVar14[4] = 0;
            bVar5 = true;
          }
          puVar4 = (undefined8 *)*puVar14;
          local_40 = puVar14;
          thunk_FUN_1802464a0(puVar14,0x30);
          puVar14 = puVar4;
        } while (puVar4 != (undefined8 *)0x0);
        DAT_180418ff8 = (undefined8 *)0x0;
        if ((bVar5) && (DAT_180418fec == 0)) {
          FUN_1800fc1b2();
        }
      }
      FUN_1800fbd76();
      local_40 = DAT_180419000;
      while (local_40 != (longlong *)0x0) {
        ResumeThread((HANDLE)local_40[1]);
        plVar13 = (longlong *)*local_40;
        thunk_FUN_1802464a0(local_40,0x10);
        local_40 = plVar13;
      }
      DAT_180419000 = (longlong *)0x0;
      DAT_180418ff0 = 0;
      iVar11 = DAT_180419010;
      if (param_1 != (undefined8 *)0x0) {
        *param_1 = DAT_180419008;
        iVar11 = DAT_180419010;
      }
    }
    else {
      FUN_1800fbc03();
      iVar11 = DAT_180419010;
    }
  }
  return iVar11;
}

