/* Ghidra pseudocode. Image: pe_00a0fad0_8664.exe Address: 1400aafa8 */

void FUN_1400aafa8(longlong param_1,longlong param_2)

{
  longlong lVar1;
  longlong lVar2;
  
  lVar2 = *(longlong *)(param_1 + 0x20);
  lVar1 = *(longlong *)(param_1 + 0x28);
  if (lVar2 != lVar1) {
    do {
      FUN_14009e652(param_2 + 0x58,lVar2);
      lVar2 = lVar2 + 4;
    } while (lVar2 != lVar1);
  }
  lVar1 = *(longlong *)(param_1 + 0x40);
  for (lVar2 = *(longlong *)(param_1 + 0x38); lVar2 != lVar1; lVar2 = lVar2 + 0x20) {
    FUN_1400a0a20(param_2,lVar2);
  }
  return;
}

