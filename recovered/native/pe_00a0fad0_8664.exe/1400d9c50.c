/* Ghidra pseudocode. Image: pe_00a0fad0_8664.exe Address: 1400d9c50 */

int FUN_1400d9c50(int param_1)

{
  undefined **ppuVar1;
  
  ppuVar1 = (undefined **)&DAT_1401446d0;
  do {
    if (*(int *)ppuVar1 == param_1) {
      return *(int *)((longlong)ppuVar1 + 4);
    }
    ppuVar1 = ppuVar1 + 1;
  } while (ppuVar1 != &std::bad_function_call::vftable_meta_ptr);
  return 0;
}

