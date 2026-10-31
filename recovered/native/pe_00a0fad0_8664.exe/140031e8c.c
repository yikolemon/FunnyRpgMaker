/* Ghidra pseudocode. Image: pe_00a0fad0_8664.exe Address: 140031e8c */

void FUN_140031e8c(longlong param_1)

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
  uVar6 = *(longlong *)(param_1 + 0x10) * 0x20;
  if (uVar6 < 0x1000) {
    if ((lpMem != (LPVOID)0x0) && (BVar2 = HeapFree(DAT_1403551d8,0,lpMem), BVar2 == 0)) {
      DVar3 = GetLastError();
      uVar4 = FUN_140113e44(DVar3);
      puVar5 = (undefined4 *)FUN_140113dd4();
      *puVar5 = uVar4;
    }
    return;
  }
  if (0x1f < (ulonglong)((longlong)lpMem + (-8 - *(longlong *)((longlong)lpMem + -8)))) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)invalidInstructionException();
    (*pcVar1)();
  }
  thunk_FUN_1400ddcd0(*(longlong *)((longlong)lpMem + -8),uVar6 + 0x27);
  return;
}

