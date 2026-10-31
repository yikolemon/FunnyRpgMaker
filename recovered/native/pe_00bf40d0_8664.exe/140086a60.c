/* Ghidra pseudocode. Image: pe_00bf40d0_8664.exe Address: 140086a60 */

int FUN_140086a60(int param_1)

{
  undefined **ppuVar1;
  
  ppuVar1 = (undefined **)&DAT_1400bbce0;
  do {
    if (*(int *)ppuVar1 == param_1) {
      return *(int *)((longlong)ppuVar1 + 4);
    }
    ppuVar1 = ppuVar1 + 1;
  } while (ppuVar1 != &std::bad_function_call::vftable_meta_ptr);
  return 0;
}

