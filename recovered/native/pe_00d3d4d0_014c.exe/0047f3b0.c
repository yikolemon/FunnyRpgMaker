/* Ghidra pseudocode. Image: pe_00d3d4d0_014c.exe Address: 0047f3b0 */

void __cdecl FUN_0047f3b0(undefined4 param_1)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)FUN_004924d0(8);
  if (puVar1 != (undefined4 *)0x0) {
    *puVar1 = DAT_0051bb4c;
    puVar1[1] = param_1;
    DAT_0051bb4c = puVar1;
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_0047f870();
}

