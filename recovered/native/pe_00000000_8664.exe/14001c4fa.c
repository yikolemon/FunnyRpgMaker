/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 14001c4fa */

undefined8 FUN_14001c4fa(undefined8 *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  switch(*(undefined4 *)(param_1 + 2)) {
  case 1:
    uVar1 = FUN_14001c600(param_2,*(undefined4 *)param_1);
    return uVar1;
  case 2:
    uVar1 = FUN_14001c798(param_2,*(undefined4 *)param_1);
    return uVar1;
  case 3:
    uVar1 = FUN_14001c924(param_2,*param_1);
    return uVar1;
  case 4:
    uVar1 = FUN_14001cac0(param_2,*param_1);
    return uVar1;
  default:
    return 0;
  }
}

