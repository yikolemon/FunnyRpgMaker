/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 1800fc211 */

DWORD FUN_1800fc211(HANDLE param_1)

{
  DWORD DVar1;
  HANDLE pvVar2;
  undefined8 *puVar3;
  DWORD DVar4;
  
  DVar4 = DAT_180419010;
  if (DAT_180419010 == 0) {
    pvVar2 = GetCurrentThread();
    DVar4 = 0;
    if (param_1 != pvVar2) {
      puVar3 = (undefined8 *)FUN_180239630(0x10);
      DVar1 = SuspendThread(param_1);
      if (DVar1 == 0xffffffff) {
        DVar4 = GetLastError();
        thunk_FUN_1802464a0(puVar3,0x10);
        DAT_180419008 = 0;
        DAT_180419010 = DVar4;
      }
      else {
        puVar3[1] = param_1;
        *puVar3 = DAT_180419000;
        DAT_180419000 = puVar3;
      }
    }
  }
  return DVar4;
}

