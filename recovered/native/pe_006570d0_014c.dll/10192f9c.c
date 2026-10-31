/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 10192f9c */

void __fastcall FUN_10192f9c(int param_1,undefined2 *param_2)

{
  undefined2 uVar1;
  
  if (*(int *)(param_1 + 0x2c) != 0) {
    uVar1 = FUN_100fb06c(*param_2,*param_2);
    *param_2 = uVar1;
  }
  return;
}

