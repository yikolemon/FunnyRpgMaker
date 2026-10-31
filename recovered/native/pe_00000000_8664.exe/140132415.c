/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 140132415 */

void FUN_140132415(longlong param_1,undefined8 param_2)

{
  char cVar1;
  
  cVar1 = FUN_140131e22();
  if (cVar1 != '\0') {
                    /* WARNING: Could not recover jumptable at 0x000140132450. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*(longlong *)(*(longlong *)(param_1 + 0x318) + 0x48) + 0x28))(param_2);
    return;
  }
  return;
}

