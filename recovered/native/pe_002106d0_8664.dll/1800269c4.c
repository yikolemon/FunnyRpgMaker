/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 1800269c4 */

undefined8 FUN_1800269c4(undefined8 *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  switch(*(undefined4 *)(param_1 + 2)) {
  case 1:
    uVar1 = FUN_180026aca(param_2,*(undefined4 *)param_1);
    return uVar1;
  case 2:
    uVar1 = FUN_180026c62(param_2,*(undefined4 *)param_1);
    return uVar1;
  case 3:
    uVar1 = FUN_180026dee(param_2,*param_1);
    return uVar1;
  case 4:
    uVar1 = FUN_180026f8a(param_2,*param_1);
    return uVar1;
  default:
    return 0;
  }
}

