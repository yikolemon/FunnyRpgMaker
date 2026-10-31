/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 180264e30 */

void FUN_180264e30(longlong *param_1)

{
  longlong lVar1;
  
  lVar1 = *param_1;
  if (lVar1 != 0) {
    thunk_FUN_180290e40(*(undefined8 *)(lVar1 + 0x10));
    thunk_FUN_180290e40(*(undefined8 *)(lVar1 + 0x20));
    thunk_FUN_180290e40(*(undefined8 *)(lVar1 + 0x28));
    thunk_FUN_180290e40(*(undefined8 *)(lVar1 + 0x30));
    return;
  }
  return;
}

