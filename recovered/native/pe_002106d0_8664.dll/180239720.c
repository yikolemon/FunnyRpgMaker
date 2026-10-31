/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 180239720 */

int FUN_180239720(int param_1)

{
  undefined **ppuVar1;
  
  ppuVar1 = (undefined **)&DAT_1802bbe00;
  do {
    if (*(int *)ppuVar1 == param_1) {
      return *(int *)((longlong)ppuVar1 + 4);
    }
    ppuVar1 = ppuVar1 + 1;
  } while (ppuVar1 != &std::bad_function_call::vftable_meta_ptr);
  return 0;
}

