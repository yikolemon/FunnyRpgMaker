/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 14007f972 */

void FUN_14007f972(undefined8 *param_1)

{
  longlong lVar1;
  ulonglong uVar2;
  
  uVar2 = 0;
  while( true ) {
    if (*(int *)(param_1 + 2) <= (int)uVar2) break;
    lVar1 = (longlong)*(int *)(param_1[3] + 8 + uVar2 * 0x10);
    if (lVar1 != -1) {
      lVar1 = lVar1 * 0xb0 + param_1[1];
      if (*(longlong *)(lVar1 + 0xa8) != 0) {
        FUN_140077b90();
      }
      if (*(longlong *)(lVar1 + 0x10) != 0) {
        FUN_140077b90();
      }
    }
    uVar2 = (ulonglong)((int)uVar2 + 1);
  }
  if (param_1[3] != 0) {
    param_1[2] = 0;
    FUN_140077b90();
    param_1[3] = 0;
  }
  if (param_1[1] != 0) {
    *param_1 = 0;
    FUN_140077b90();
    param_1[1] = 0;
  }
  param_1[4] = 0;
  return;
}

