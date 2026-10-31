/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 1800185bc */

void FUN_1800185bc(longlong param_1)

{
  undefined8 *puVar1;
  
  FUN_180020b16(param_1);
  if (*(longlong **)(param_1 + 0x20) != (longlong *)0x0) {
    puVar1 = (undefined8 *)(**(code **)(**(longlong **)(param_1 + 0x20) + 0x10))();
    if (puVar1 != (undefined8 *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00018001860b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)*puVar1)(puVar1,1,*(code **)*puVar1);
      return;
    }
  }
  return;
}

