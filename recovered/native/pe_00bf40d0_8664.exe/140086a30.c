/* Ghidra pseudocode. Image: pe_00bf40d0_8664.exe Address: 140086a30 */

char * FUN_140086a30(int param_1)

{
  undefined **ppuVar1;
  
  ppuVar1 = &PTR_1400bb7f0;
  do {
    if (*(int *)ppuVar1 == param_1) {
      return ppuVar1[1];
    }
    ppuVar1 = ppuVar1 + 2;
  } while (ppuVar1 != (undefined **)&DAT_1400bbce0);
  return "unknown error";
}

