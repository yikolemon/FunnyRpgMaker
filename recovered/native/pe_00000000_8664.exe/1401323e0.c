/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 1401323e0 */

undefined8 FUN_1401323e0(longlong param_1)

{
  char cVar1;
  undefined8 uVar2;
  
  cVar1 = FUN_140131e22();
  if (cVar1 != '\0') {
                    /* WARNING: Could not recover jumptable at 0x000140132411. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar2 = (**(code **)(*(longlong *)(*(longlong *)(param_1 + 0x318) + 0x48) + 0x20))();
    return uVar2;
  }
  return 0;
}

