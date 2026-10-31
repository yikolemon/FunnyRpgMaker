/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 1022b910 */

void __thiscall FUN_1022b910(undefined4 param_1,undefined4 param_2)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)FUN_1026faa0(8,param_1);
  if (puVar1 != (undefined4 *)0x0) {
    *puVar1 = DAT_1039cd14;
    puVar1[1] = param_2;
    DAT_1039cd14 = puVar1;
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_10228470();
}

