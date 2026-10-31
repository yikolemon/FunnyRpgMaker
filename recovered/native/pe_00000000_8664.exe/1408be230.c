/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 1408be230 */

undefined1 FUN_1408be230(longlong param_1)

{
  undefined4 *puVar1;
  
  if (*(int *)(param_1 + 8) == 0) {
    puVar1 = (undefined4 *)FUN_1408c0ecd();
    *puVar1 = 0x16;
    FUN_1408cbd78();
    return 0;
  }
  return 1;
}

