/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 14012a529 */

void FUN_14012a529(longlong param_1,longlong param_2)

{
  ulonglong uVar1;
  ulonglong uVar2;
  
  if (((param_2 != 0 && param_1 != 0) && (uVar2 = *(ulonglong *)(param_1 + 8), uVar2 != 0)) &&
     (*(ushort *)(param_1 + 2) != 0)) {
    uVar1 = uVar2 + (ulonglong)*(ushort *)(param_1 + 2) * 8;
    do {
      FUN_14012a59b(uVar2,param_2);
      uVar2 = uVar2 + 8;
    } while (uVar2 < uVar1);
  }
  return;
}

