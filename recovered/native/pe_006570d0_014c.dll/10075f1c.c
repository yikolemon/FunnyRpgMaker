/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 10075f1c */

int __thiscall FUN_10075f1c(int param_1,int param_2,int param_3)

{
  undefined4 uVar1;
  undefined4 uVar2;
  
  uVar1 = FUN_1022bae0(*(undefined4 *)(param_2 + 4));
  *(undefined4 *)(param_1 + 4) = uVar1;
  if (param_3 != 0) {
    uVar2 = FUN_1000d88a();
    FUN_1022dd70(uVar1,param_3,uVar2);
    *(undefined4 *)(*(int *)(param_1 + 4) + 0x10) = 0;
    FUN_10075fa8("*");
  }
  return param_1;
}

