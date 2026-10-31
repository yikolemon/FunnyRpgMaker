/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 1801e2cf4 */

undefined8 FUN_1801e2cf4(longlong param_1)

{
  char cVar1;
  undefined8 uVar2;
  
  cVar1 = FUN_1801e2736();
  if (cVar1 != '\0') {
                    /* WARNING: Could not recover jumptable at 0x0001801e2d25. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar2 = (**(code **)(*(longlong *)(*(longlong *)(param_1 + 0x318) + 0x48) + 0x20))();
    return uVar2;
  }
  return 0;
}

