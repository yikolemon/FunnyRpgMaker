/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 1801ef802 */

void FUN_1801ef802(longlong param_1,uint *param_2)

{
  uint uVar1;
  longlong lVar2;
  
  uVar1 = *param_2;
  if (uVar1 < *(uint *)(param_1 + 0x1f8)) {
    FUN_1801f6ac6(param_1);
    if (*(int *)(param_1 + 0x20) == 0) {
      lVar2 = (longlong)(int)param_2[1] * (longlong)*(int *)(param_1 + 0x184);
      *(int *)(*(longlong *)(param_1 + 0x200) + (ulonglong)uVar1 * 4) =
           (int)((ulonglong)((lVar2 >> 0x3f) + lVar2 + 0x8000) >> 0x10);
    }
  }
  else if (*(char *)(param_1 + 0x2c6) != '\0') {
    *(undefined4 *)(param_1 + 0x20) = 0x86;
  }
  return;
}

