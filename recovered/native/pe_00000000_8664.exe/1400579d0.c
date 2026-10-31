/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 1400579d0 */

void FUN_1400579d0(longlong param_1)

{
  undefined8 *puVar1;
  
  FUN_140060aba(param_1);
  if (*(longlong **)(param_1 + 0x20) != (longlong *)0x0) {
    puVar1 = (undefined8 *)(**(code **)(**(longlong **)(param_1 + 0x20) + 0x10))();
    if (puVar1 != (undefined8 *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000140057a1f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)*puVar1)(puVar1,1,*(code **)*puVar1);
      return;
    }
  }
  return;
}

