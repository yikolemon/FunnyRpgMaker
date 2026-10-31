/* Ghidra pseudocode. Image: pe_00bf40d0_8664.exe Address: 140030328 */

undefined8 FUN_140030328(longlong param_1)

{
  undefined8 uVar1;
  
  uVar1 = FUN_14002fd6a(param_1);
  if ((char)uVar1 != '\0') {
                    /* WARNING: Could not recover jumptable at 0x000140030359. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar1 = (**(code **)(*(longlong *)(*(longlong *)(param_1 + 0x318) + 0x48) + 0x20))();
    return uVar1;
  }
  return 0;
}

