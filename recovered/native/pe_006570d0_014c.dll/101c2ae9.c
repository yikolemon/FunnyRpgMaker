/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 101c2ae9 */

void __fastcall FUN_101c2ae9(int *param_1)

{
  undefined4 uVar1;
  
  uVar1 = *(undefined4 *)(*param_1 + 100);
  if (*(code **)(param_1[3] + 8) != (code *)0x0) {
    (**(code **)(param_1[3] + 8))(param_1);
  }
  FUN_101c0017(uVar1,param_1);
  return;
}

