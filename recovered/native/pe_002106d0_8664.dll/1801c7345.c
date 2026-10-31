/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 1801c7345 */

void FUN_1801c7345(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_1801c68b0();
  (**(code **)(*(longlong *)*puVar1 + 0x228))((longlong *)*puVar1,0,6,2);
                    /* WARNING: Could not recover jumptable at 0x0001801c738c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(longlong *)*puVar1 + 0x228))((longlong *)*puVar1,0,5,2);
  return;
}

