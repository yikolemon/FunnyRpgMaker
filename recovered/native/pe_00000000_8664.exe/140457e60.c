/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 140457e60 */

void FUN_140457e60(void)

{
  undefined8 uVar1;
  
  if (DAT_140614ec8 != 0) {
    uVar1 = (*(code *)s_GetEnvironmentVariableW_14059dde4._4_8_)();
    DAT_140614ec8 = DAT_140614ec8 + -1;
    *(undefined8 *)(&DAT_14062a710 + DAT_140614ec8 * 8) = uVar1;
    return;
  }
                    /* WARNING: Subroutine does not return */
  abort();
}

