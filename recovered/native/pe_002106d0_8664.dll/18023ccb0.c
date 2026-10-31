/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 18023ccb0 */

void FUN_18023ccb0(undefined8 param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)_malloc_base(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = DAT_180417ee8;
    puVar1[1] = param_1;
    DAT_180417ee8 = puVar1;
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_180239770();
}

