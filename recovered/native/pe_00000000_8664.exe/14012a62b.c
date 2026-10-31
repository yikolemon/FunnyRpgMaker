/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 14012a62b */

undefined8 FUN_14012a62b(longlong param_1,undefined4 param_2)

{
  undefined8 uVar1;
  
  if (param_1 != 0) {
    if (*(longlong *)(param_1 + 8) != 0) {
      uVar1 = FUN_14012bcf0(*(undefined8 *)(*(longlong *)(*(longlong *)(param_1 + 8) + 0x90) + 8),
                            param_1,param_2);
      return uVar1;
    }
  }
  return 6;
}

