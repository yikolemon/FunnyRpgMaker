/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 101f8963 */

void __fastcall FUN_101f8963(undefined4 *param_1,int param_2)

{
  undefined4 uVar1;
  
  uVar1 = *(undefined4 *)(param_2 + 0x1c);
  FUN_101f89ad();
  FUN_101c0017(uVar1,param_1[2]);
  param_1[2] = 0;
  *param_1 = 0;
  param_1[1] = 0;
  return;
}

