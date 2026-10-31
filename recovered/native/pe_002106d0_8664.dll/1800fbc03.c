/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 1800fbc03 */

undefined8 FUN_1800fbc03(void)

{
  longlong *plVar1;
  undefined8 *puVar2;
  DWORD DVar3;
  DWORD DVar4;
  undefined8 uVar5;
  longlong *plVar6;
  DWORD local_2c;
  longlong *local_28;
  undefined8 local_20;
  
  DVar3 = DAT_180418ff0;
  local_20 = 0xfffffffffffffffe;
  DVar4 = GetCurrentThreadId();
  uVar5 = 0x10dd;
  if (DVar3 == DVar4) {
    if (DAT_180418ff8 != (longlong *)0x0) {
      plVar6 = DAT_180418ff8;
      do {
        VirtualProtect((LPVOID)plVar6[3],(ulonglong)*(byte *)(plVar6[4] + 0x3e),
                       *(DWORD *)(plVar6 + 5),&local_2c);
        if (((int)plVar6[1] == 0) && (plVar6[4] != 0)) {
          FUN_1800fbd46();
          plVar6[4] = 0;
        }
        plVar1 = (longlong *)*plVar6;
        local_28 = plVar6;
        thunk_FUN_1802464a0(plVar6,0x30);
        plVar6 = plVar1;
      } while (plVar1 != (longlong *)0x0);
    }
    DAT_180418ff8 = (longlong *)0x0;
    FUN_1800fbd76();
    local_28 = DAT_180419000;
    while (local_28 != (undefined8 *)0x0) {
      ResumeThread((HANDLE)local_28[1]);
      puVar2 = (undefined8 *)*local_28;
      thunk_FUN_1802464a0(local_28,0x10);
      local_28 = puVar2;
    }
    DAT_180419000 = (undefined8 *)0x0;
    DAT_180418ff0 = 0;
    uVar5 = 0;
  }
  return uVar5;
}

