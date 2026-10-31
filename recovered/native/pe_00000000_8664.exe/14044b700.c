/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 14044b700 */

void FUN_14044b700(longlong param_1)

{
  int iVar1;
  
  if (param_1 != -1) {
    iVar1 = (*(code *)s_GetExitCodeThread_14059de14._4_8_)();
    if (iVar1 == 0) {
                    /* WARNING: Subroutine does not return */
      abort();
    }
  }
  return;
}

