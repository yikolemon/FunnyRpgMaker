/* Ghidra pseudocode. Image: pe_00d3d4d0_014c.exe Address: 0042ff7b */

undefined4 __cdecl FUN_0042ff7b(int param_1)

{
  undefined4 uVar1;
  
  uVar1 = FUN_0042fab9(param_1);
  if ((char)uVar1 != '\0') {
                    /* WARNING: Could not recover jumptable at 0x0042ffa0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar1 = (**(code **)(*(int *)(*(int *)(param_1 + 0x198) + 0x38) + 0x10))();
    return uVar1;
  }
  return 0;
}

