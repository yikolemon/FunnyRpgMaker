/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 14005cb48 */

void FUN_14005cb48(longlong param_1)

{
  undefined8 *puVar1;
  
  if (*(longlong **)(param_1 + 0x18) != (longlong *)0x0) {
    puVar1 = (undefined8 *)(**(code **)(**(longlong **)(param_1 + 0x18) + 0x10))();
    if (puVar1 != (undefined8 *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00014005cb8c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)*puVar1)(puVar1,1,*(code **)*puVar1);
      return;
    }
  }
  return;
}

