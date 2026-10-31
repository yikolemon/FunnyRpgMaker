/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 1403ab17f */

void FUN_1403ab17f(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = *(longlong *)(param_1 + 0x2b0);
  FUN_1403aa220(param_1,2);
  if ((float)*(int *)(lVar1 + 0xa0) < (float)*(int *)(lVar1 + 0x98) * DAT_1404efc60) {
    FUN_1403aac21(param_1,0xffffffff,0xffffffff);
    return;
  }
  FUN_1403aa64b(param_1,*(undefined4 *)(*(longlong *)(param_1 + 0x38) + 0x1c),
                *(undefined4 *)(*(longlong *)(param_1 + 0x38) + 0x20));
  return;
}

