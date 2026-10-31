/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 140037696 */

void FUN_140037696(longlong param_1,longlong *param_2)

{
  undefined8 uVar1;
  longlong lVar2;
  undefined8 *puVar3;
  
  uVar1 = *(undefined8 *)(param_1 + 0x18);
  FUN_1400378a0();
  lVar2 = *param_2;
  *param_2 = 0;
  puVar3 = *(undefined8 **)(param_1 + 0x28);
  *(longlong *)(param_1 + 0x28) = lVar2;
  if (puVar3 != (undefined8 *)0x0) {
    (**(code **)*puVar3)(puVar3,1);
  }
  FUN_14018a340(uVar1);
  puVar3 = (undefined8 *)*param_2;
  if (puVar3 != (undefined8 *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000140037711. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)*puVar3)(puVar3,1);
    return;
  }
  return;
}

