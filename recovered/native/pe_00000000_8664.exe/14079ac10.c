/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 14079ac10 */

undefined4 FUN_14079ac10(longlong param_1,longlong param_2)

{
  return CONCAT31((int3)(*(uint *)(param_1 + 0x14) >> 8),
                  *(undefined1 *)((ulonglong)*(uint *)(param_1 + 0x14) + param_2));
}

