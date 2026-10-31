/* Ghidra pseudocode. Image: pe_00bf40d0_8664.exe Address: 140086590 */

void FUN_140086590(undefined8 param_1)

{
  undefined8 *puVar1;
  
  puVar1 = _malloc_base(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = DAT_14013cb58;
    puVar1[1] = param_1;
    DAT_14013cb58 = puVar1;
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_140086a90();
}

