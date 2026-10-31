/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 1800ffd62 */

undefined4 FUN_1800ffd62(undefined8 param_1,undefined8 param_2,float param_3)

{
  undefined4 uVar1;
  
  if ((param_3 != 0.0) || (NAN(param_3))) {
    FUN_1800ffdb5(param_3);
  }
  uVar1 = FUN_180145e1f(param_2,param_1,0x100,0,0,0);
  if ((char)uVar1 != '\0') {
    FUN_1800ffc10(param_1);
  }
  return uVar1;
}

