/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 10170e07 */

void __fastcall FUN_10170e07(undefined4 param_1)

{
  *(undefined4 *)(*(int *)((int)ThreadLocalStoragePointer + _tls_index * 4) + 0xb8) = param_1;
  return;
}

