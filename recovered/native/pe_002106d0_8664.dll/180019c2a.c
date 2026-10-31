/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 180019c2a */

void FUN_180019c2a(undefined8 *param_1)

{
  LPVOID lpMem;
  code *pcVar1;
  BOOL BVar2;
  DWORD DVar3;
  undefined4 uVar4;
  undefined4 *puVar5;
  
  if (*(char *)(param_1 + 2) != '\x01') {
    return;
  }
  lpMem = (LPVOID)*param_1;
  if ((ulonglong)(param_1[1] - (longlong)lpMem) < 0x1000) {
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
  thunk_FUN_1802464a0(*(longlong *)((longlong)lpMem + -8),(param_1[1] - (longlong)lpMem) + 0x27);
  return;
}

