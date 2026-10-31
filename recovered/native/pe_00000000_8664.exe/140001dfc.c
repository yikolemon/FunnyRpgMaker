/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 140001dfc */

void FUN_140001dfc(undefined8 *param_1)

{
  DWORD DVar1;
  DWORD DVar2;
  int iVar3;
  undefined1 auStack_48 [32];
  undefined4 local_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  ulonglong local_18;
  
  local_18 = DAT_140f17b40 ^ (ulonglong)auStack_48;
  DVar1 = *(DWORD *)(param_1 + 1);
  if (DVar1 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1401896d0(1);
  }
  DVar2 = GetCurrentThreadId();
  if (DVar1 == DVar2) {
                    /* WARNING: Subroutine does not return */
    FUN_1401896d0(5);
  }
  local_28 = *(undefined4 *)param_1;
  uStack_24 = *(undefined4 *)((longlong)param_1 + 4);
  uStack_20 = *(undefined4 *)(param_1 + 1);
  uStack_1c = *(undefined4 *)((longlong)param_1 + 0xc);
  iVar3 = FUN_14018a370(&local_28,0);
  if (iVar3 != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1401896d0(2);
  }
  *param_1 = 0;
  *(undefined4 *)(param_1 + 1) = 0;
  if (DAT_140f17b40 == (local_18 ^ (ulonglong)auStack_48)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_140188a00(local_18 ^ (ulonglong)auStack_48);
}

