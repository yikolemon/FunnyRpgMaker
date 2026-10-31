/* Ghidra pseudocode. Image: pe_00a0fad0_8664.exe Address: 14008ec4a */

void FUN_14008ec4a(longlong param_1)

{
  undefined8 *puVar1;
  
  FUN_1400972ce(param_1);
  if (*(longlong **)(param_1 + 0x20) != (longlong *)0x0) {
    puVar1 = (undefined8 *)(**(code **)(**(longlong **)(param_1 + 0x20) + 0x10))();
    if (puVar1 != (undefined8 *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00014008ec99. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)*puVar1)(puVar1,1,*(code **)*puVar1);
      return;
    }
  }
  return;
}

