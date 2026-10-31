/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 101d8c68 */

undefined4 __fastcall FUN_101d8c68(int param_1,undefined4 *param_2,int param_3,undefined4 *param_4)

{
  undefined4 uVar1;
  
  uVar1 = *param_2;
  if (param_3 != 0) {
    FUN_101bfd2c(**(undefined4 **)(param_1 + 0x24),uVar1,0x803,param_3);
  }
  if (param_4 != (undefined4 *)0x0) {
    *param_4 = 0;
  }
  return uVar1;
}

