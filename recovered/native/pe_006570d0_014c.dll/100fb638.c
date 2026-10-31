/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 100fb638 */

undefined4 __thiscall FUN_100fb638(undefined4 param_1,undefined4 param_2,float param_3)

{
  undefined4 uVar1;
  
  if ((param_3 != 0.0) || (NAN(param_3))) {
    FUN_100fb68f(param_3);
  }
  uVar1 = FUN_10141729(param_2,param_1,DAT_102b8a64,0,0,0);
  if ((char)uVar1 != '\0') {
    FUN_100fb51c();
  }
  return uVar1;
}

