/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 14044e180 */

void FUN_14044e180(undefined8 param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)_malloc_base(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = DAT_1406293b8;
    puVar1[1] = param_1;
    DAT_1406293b8 = puVar1;
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_14044ac40();
}

