/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 101d880b */

undefined4 FUN_101d880b(int param_1)

{
  char cVar1;
  undefined4 uVar2;
  
  cVar1 = FUN_101d8349();
  if (cVar1 != '\0') {
                    /* WARNING: Could not recover jumptable at 0x101d8830. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar2 = (**(code **)(*(int *)(*(int *)(param_1 + 0x198) + 0x38) + 0x10))();
    return uVar2;
  }
  return 0;
}

