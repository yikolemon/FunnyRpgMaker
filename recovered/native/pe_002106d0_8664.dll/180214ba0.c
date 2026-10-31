/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 180214ba0 */

undefined8 FUN_180214ba0(longlong param_1,undefined4 param_2,undefined4 param_3)

{
  undefined8 uVar1;
  
  uVar1 = 0;
  if (*(char *)(param_1 + 0x58) == '\0') {
    *(undefined1 *)(param_1 + 0x58) = 1;
    uVar1 = FUN_180214b40();
    if ((int)uVar1 == 0) {
      uVar1 = FUN_180214b03(param_1,param_2,param_3);
      return uVar1;
    }
  }
  return uVar1;
}

