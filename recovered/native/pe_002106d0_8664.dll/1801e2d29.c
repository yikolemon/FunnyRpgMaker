/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 1801e2d29 */

void FUN_1801e2d29(longlong param_1,undefined8 param_2)

{
  char cVar1;
  
  cVar1 = FUN_1801e2736();
  if (cVar1 != '\0') {
                    /* WARNING: Could not recover jumptable at 0x0001801e2d64. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*(longlong *)(*(longlong *)(param_1 + 0x318) + 0x48) + 0x28))(param_2);
    return;
  }
  return;
}

