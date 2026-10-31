/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 140114e42 */

undefined4 * FUN_140114e42(longlong param_1)

{
  undefined4 *puVar1;
  longlong lVar2;
  
  lVar2 = (longlong)*(int *)(param_1 + 100);
  if (lVar2 != -1) {
    puVar1 = (undefined4 *)(*(longlong *)(DAT_140f2a910 + 0x29b0) + lVar2);
    if (*(int *)(param_1 + 0x6c) <=
        (int)*(short *)(*(longlong *)(DAT_140f2a910 + 0x29b0) + 0xe + lVar2)) {
      return puVar1;
    }
    *puVar1 = 0;
  }
  return (undefined4 *)0x0;
}

