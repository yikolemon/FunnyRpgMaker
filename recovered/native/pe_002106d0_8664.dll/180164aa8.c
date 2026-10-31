/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 180164aa8 */

undefined8 FUN_180164aa8(longlong param_1)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  longlong *plVar3;
  
  puVar1 = *(undefined8 **)(param_1 + 0x10);
  if (*(int *)(param_1 + 8) == 0x400000) {
    plVar3 = (longlong *)*puVar1;
    FUN_1800037ec(plVar3,(longlong)*(int *)(param_1 + 0x30),0);
    if (0xf < (ulonglong)plVar3[3]) {
      plVar3 = (longlong *)*plVar3;
    }
    *(longlong **)(param_1 + 0x28) = plVar3;
  }
  else if (puVar1[1] != 0) {
    *(undefined8 *)(param_1 + 0x10) = puVar1[2];
                    /* WARNING: Could not recover jumptable at 0x000180164af8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar2 = (*(code *)puVar1[1])(param_1);
    return uVar2;
  }
  return 0;
}

