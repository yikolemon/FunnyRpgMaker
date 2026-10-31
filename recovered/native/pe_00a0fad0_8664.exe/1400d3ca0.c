/* Ghidra pseudocode. Image: pe_00a0fad0_8664.exe Address: 1400d3ca0 */

void FUN_1400d3ca0(undefined8 param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)_malloc_base(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = DAT_1401cc4c8;
    puVar1[1] = param_1;
    DAT_1401cc4c8 = puVar1;
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1400d9cb0();
}

