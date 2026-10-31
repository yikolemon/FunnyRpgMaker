/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 18001beb4 */

void FUN_18001beb4(longlong param_1)

{
  undefined8 *puVar1;
  
  if (*(longlong **)(param_1 + 0x18) != (longlong *)0x0) {
    puVar1 = (undefined8 *)(**(code **)(**(longlong **)(param_1 + 0x18) + 0x10))();
    if (puVar1 != (undefined8 *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00018001bef8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)*puVar1)(puVar1,1,*(code **)*puVar1);
      return;
    }
  }
  return;
}

