/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 1801cb657 */

undefined8 FUN_1801cb657(longlong param_1,undefined4 param_2)

{
  undefined8 uVar1;
  
  if (param_1 != 0) {
    if (*(longlong *)(param_1 + 8) != 0) {
      uVar1 = FUN_1801ccd1c(*(undefined8 *)(*(longlong *)(*(longlong *)(param_1 + 8) + 0x90) + 8),
                            param_1,param_2);
      return uVar1;
    }
  }
  return 6;
}

