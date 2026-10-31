/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 1020c4f5 */

void __fastcall FUN_1020c4f5(undefined4 *param_1)

{
  undefined4 uVar1;
  
  if (param_1 != (undefined4 *)0x0) {
    uVar1 = *param_1;
    FUN_101c0017(uVar1,param_1[2]);
    param_1[2] = 0;
    FUN_101c0017(uVar1,param_1);
  }
  return;
}

