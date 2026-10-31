/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 1400718bc */

void FUN_1400718bc(longlong param_1)

{
  LPVOID lpMem;
  code *pcVar1;
  ulonglong uVar2;
  BOOL BVar3;
  DWORD DVar4;
  undefined4 uVar5;
  undefined4 *puVar6;
  
  lpMem = *(LPVOID *)(param_1 + 8);
  if (lpMem == (LPVOID)0x0) {
    return;
  }
  uVar2 = *(longlong *)(param_1 + 0x10) * 0x28;
  if (uVar2 < 0x1000) {
    if ((lpMem != (LPVOID)0x0) && (BVar3 = HeapFree(DAT_140f32da8,0,lpMem), BVar3 == 0)) {
      DVar4 = GetLastError();
      uVar5 = FUN_14019e93c(DVar4);
      puVar6 = (undefined4 *)FUN_14019e8cc();
      *puVar6 = uVar5;
    }
    return;
  }
  if (0x1f < (ulonglong)((longlong)lpMem + (-8 - *(longlong *)((longlong)lpMem + -8)))) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)invalidInstructionException();
    (*pcVar1)();
  }
  thunk_FUN_14018e090(*(longlong *)((longlong)lpMem + -8),uVar2 + 0x27);
  return;
}

