/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 1800bfc58 */

void FUN_1800bfc58(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = *(longlong *)(param_1 + 8);
  if (lVar1 != param_1 + 0x10) {
    FUN_1800bf4ae(lVar1,*(longlong *)(param_1 + 0x18),
                  *(longlong *)(param_1 + 0x20) - *(longlong *)(param_1 + 0x18) >> 2);
    lVar1 = *(longlong *)(param_1 + 8);
  }
  if (lVar1 != param_1 + 8) {
    FUN_1800bff7a(lVar1 + 0x28,*(longlong *)(param_1 + 0x38),
                  (*(longlong *)(param_1 + 0x40) - *(longlong *)(param_1 + 0x38) >> 3) *
                  -0x3333333333333333);
    return;
  }
  return;
}

