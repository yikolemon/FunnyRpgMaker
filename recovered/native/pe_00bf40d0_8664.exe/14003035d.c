/* Ghidra pseudocode. Image: pe_00bf40d0_8664.exe Address: 14003035d */

void FUN_14003035d(longlong param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = FUN_14002fd6a(param_1);
  if ((char)uVar1 != '\0') {
                    /* WARNING: Could not recover jumptable at 0x000140030398. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*(longlong *)(*(longlong *)(param_1 + 0x318) + 0x48) + 0x28))(param_2);
    return;
  }
  return;
}

