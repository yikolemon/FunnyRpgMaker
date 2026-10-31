/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 10001426 */

undefined4 FUN_10001426(uint param_1)

{
  undefined4 uVar1;
  
  if (param_1 == 0) {
    return 0;
  }
  if (0xfff < param_1) {
    uVar1 = FUN_10001447(param_1);
    return uVar1;
  }
  uVar1 = FUN_10228350();
  return uVar1;
}

