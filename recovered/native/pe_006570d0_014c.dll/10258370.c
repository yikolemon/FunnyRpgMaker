/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 10258370 */

uint FUN_10258370(undefined4 param_1,undefined4 param_2,int param_3)

{
  uint uVar1;
  
  switch(param_2) {
  case 0:
    uVar1 = FUN_10258270(param_3 != 0);
    return uVar1;
  case 1:
    uVar1 = FUN_10258120(param_1,param_3);
    return uVar1;
  case 2:
    uVar1 = FUN_1022c6d0();
    return uVar1 & 0xff;
  case 3:
    uVar1 = FUN_1022c6f0();
    return uVar1 & 0xff;
  default:
    return 1;
  }
}

