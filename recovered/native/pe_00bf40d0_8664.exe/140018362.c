/* Ghidra pseudocode. Image: pe_00bf40d0_8664.exe Address: 140018362 */

void FUN_140018362(undefined8 *param_1)

{
  DWORD DVar1;
  DWORD DVar2;
  int iVar3;
  undefined1 auStack_48 [32];
  undefined8 local_28;
  undefined8 uStack_20;
  ulonglong local_18;
  
  local_18 = DAT_14012ea80 ^ (ulonglong)auStack_48;
  DVar1 = *(DWORD *)(param_1 + 1);
  if (DVar1 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_14008b2a0(1);
  }
  DVar2 = GetCurrentThreadId();
  if (DVar1 == DVar2) {
                    /* WARNING: Subroutine does not return */
    FUN_14008b2a0(5);
  }
  local_28 = *param_1;
  uStack_20 = param_1[1];
  iVar3 = FUN_14008b460(&local_28,(DWORD *)0x0);
  if (iVar3 != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_14008b2a0(2);
  }
  *param_1 = 0;
  *(undefined4 *)(param_1 + 1) = 0;
  if (DAT_14012ea80 == (local_18 ^ (ulonglong)auStack_48)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_140086440(local_18 ^ (ulonglong)auStack_48);
}

