/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 18001fd26 */

void FUN_18001fd26(longlong param_1)

{
  LPVOID lpMem;
  code *pcVar1;
  BOOL BVar2;
  DWORD DVar3;
  undefined4 uVar4;
  undefined4 *puVar5;
  ulonglong uVar6;
  
  lpMem = *(LPVOID *)(param_1 + 8);
  if (lpMem == (LPVOID)0x0) {
    return;
  }
  uVar6 = *(longlong *)(param_1 + 0x10) * 4;
  if (uVar6 < 0x1000) {
    if ((lpMem != (LPVOID)0x0) && (BVar2 = HeapFree(DAT_1804213f8,0,lpMem), BVar2 == 0)) {
      DVar3 = GetLastError();
      uVar4 = FUN_18027e6dc(DVar3);
      puVar5 = (undefined4 *)FUN_18027e66c();
      *puVar5 = uVar4;
    }
    return;
  }
  if (0x1f < (ulonglong)((longlong)lpMem + (-8 - *(longlong *)((longlong)lpMem + -8)))) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)invalidInstructionException();
    (*pcVar1)();
  }
  thunk_FUN_1802464a0(*(longlong *)((longlong)lpMem + -8),uVar6 + 0x27);
  return;
}

