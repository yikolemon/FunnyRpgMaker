/* Ghidra pseudocode. Image: pe_00a0fad0_8664.exe Address: 140017cb5 */

void FUN_140017cb5(undefined4 param_1,undefined8 param_2)

{
  longlong *plVar1;
  
  plVar1 = (longlong *)FUN_14000b3ff(param_2);
                    /* WARNING: Could not recover jumptable at 0x000140017cd5. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar1 + 0x20))(plVar1,param_1,*(code **)(*plVar1 + 0x20));
  return;
}

