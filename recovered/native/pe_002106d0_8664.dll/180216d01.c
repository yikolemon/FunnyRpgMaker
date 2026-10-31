/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 180216d01 */

undefined8 FUN_180216d01(longlong param_1,undefined4 param_2,undefined4 param_3)

{
  undefined8 uVar1;
  
  uVar1 = 0;
  if (*(char *)(param_1 + 0x58) == '\0') {
    *(undefined1 *)(param_1 + 0x58) = 1;
    uVar1 = FUN_180216d7e();
    if ((int)uVar1 == 0) {
      uVar1 = FUN_180216d41(param_1,param_2,param_3);
      return uVar1;
    }
  }
  return uVar1;
}

