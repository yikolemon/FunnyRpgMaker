/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 10026508 */

undefined4 __fastcall FUN_10026508(undefined4 *param_1)

{
  undefined4 uVar1;
  
  switch(param_1[2]) {
  case 1:
    uVar1 = FUN_1002661e(*param_1);
    return uVar1;
  case 2:
    uVar1 = FUN_100267a0(*param_1);
    return uVar1;
  case 3:
    uVar1 = FUN_10026908(*param_1,param_1[1]);
    return uVar1;
  case 4:
    uVar1 = FUN_10026a98(*param_1,param_1[1]);
    return uVar1;
  default:
    return 0;
  }
}

