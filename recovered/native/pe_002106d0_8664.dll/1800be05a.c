/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 1800be05a */

void FUN_1800be05a(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = *(longlong *)(param_1 + 8);
  if (lVar1 != param_1 + 0x10) {
    FUN_1800bd90c(lVar1,*(longlong *)(param_1 + 0x10),
                  *(longlong *)(param_1 + 0x18) - *(longlong *)(param_1 + 0x10) >> 2);
    lVar1 = *(longlong *)(param_1 + 8);
  }
  if (lVar1 != param_1 + 8) {
    FUN_1800be34e(lVar1 + 0x20,*(longlong *)(param_1 + 0x28),
                  *(longlong *)(param_1 + 0x30) - *(longlong *)(param_1 + 0x28) >> 5);
    return;
  }
  return;
}

