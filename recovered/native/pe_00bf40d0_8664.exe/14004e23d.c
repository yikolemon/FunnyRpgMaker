/* Ghidra pseudocode. Image: pe_00bf40d0_8664.exe Address: 14004e23d */

undefined8 FUN_14004e23d(longlong param_1,uint param_2)

{
  undefined8 uVar1;
  
  if (param_2 != 0xffff) {
    if (0x186 < param_2) {
      uVar1 = FUN_14004e26d(param_1,param_2 - 0x187);
      return uVar1;
    }
    if (*(longlong *)(param_1 + 0x10d8) != 0) {
                    /* WARNING: Could not recover jumptable at 0x00014004e269. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      uVar1 = (**(code **)(*(longlong *)(param_1 + 0x10d8) + 0x28))(param_2);
      return uVar1;
    }
  }
  return 0;
}

