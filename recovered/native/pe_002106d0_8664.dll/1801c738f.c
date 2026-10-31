/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 1801c738f */

void FUN_1801c738f(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_1801c68b0();
  (**(code **)(*(longlong *)*puVar1 + 0x228))((longlong *)*puVar1,0,6,1);
                    /* WARNING: Could not recover jumptable at 0x0001801c73d6. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(longlong *)*puVar1 + 0x228))((longlong *)*puVar1,0,5,1);
  return;
}

