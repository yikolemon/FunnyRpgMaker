/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 140006896 */

void FUN_140006896(longlong param_1)

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
  uVar6 = *(longlong *)(param_1 + 0x10) * 0x10;
  if (uVar6 < 0x1000) {
    if ((lpMem != (LPVOID)0x0) && (BVar2 = HeapFree(DAT_140f32da8,0,lpMem), BVar2 == 0)) {
      DVar3 = GetLastError();
      uVar4 = FUN_14019e93c(DVar3);
      puVar5 = (undefined4 *)FUN_14019e8cc();
      *puVar5 = uVar4;
    }
    return;
  }
  if (0x1f < (ulonglong)((longlong)lpMem + (-8 - *(longlong *)((longlong)lpMem + -8)))) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)invalidInstructionException();
    (*pcVar1)();
  }
  thunk_FUN_14018e090(*(longlong *)((longlong)lpMem + -8),uVar6 + 0x27);
  return;
}

