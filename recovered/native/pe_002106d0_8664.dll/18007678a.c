/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 18007678a */

longlong FUN_18007678a(longlong param_1,longlong param_2,longlong param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = FUN_18023ce90(*(undefined8 *)(param_2 + 8));
  *(undefined8 *)(param_1 + 8) = uVar1;
  if (param_3 != 0) {
    uVar2 = FUN_18000cbd0(&DAT_180417ee0);
    FUN_18023f260(uVar1,param_3,uVar2);
    *(undefined4 *)(*(longlong *)(param_1 + 8) + 0x20) = 0;
    FUN_180076838(*(longlong *)(param_1 + 8) + 0x28,"*");
  }
  return param_1;
}

