/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 140287aa0 */

void FUN_140287aa0(undefined8 *param_1)

{
  undefined8 *puVar1;
  
  *param_1 = &DAT_1404c9f58;
  FUN_1402125bc(param_1 + 8);
  FUN_1402133c2(param_1 + 4);
  if ((longlong *)param_1[3] != (longlong *)0x0) {
    puVar1 = (undefined8 *)(**(code **)(*(longlong *)param_1[3] + 0x10))();
    if (puVar1 != (undefined8 *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000140287b10. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)*puVar1)(puVar1,1,*(code **)*puVar1);
      return;
    }
  }
  return;
}

