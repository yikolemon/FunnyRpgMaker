/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 140189070 */

void FUN_140189070(undefined8 param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)_malloc_base(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = DAT_140f2abf8;
    puVar1[1] = param_1;
    DAT_140f2abf8 = puVar1;
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_140189870();
}

