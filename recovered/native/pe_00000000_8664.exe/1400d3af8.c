/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 1400d3af8 */

void FUN_1400d3af8(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_1400d30d4();
  (**(code **)(*(longlong *)*puVar1 + 0x228))((longlong *)*puVar1,0,6,2);
                    /* WARNING: Could not recover jumptable at 0x0001400d3b3f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(longlong *)*puVar1 + 0x228))((longlong *)*puVar1,0,5,2);
  return;
}

