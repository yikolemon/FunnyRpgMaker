/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 101dd457 */

undefined4 * __fastcall FUN_101dd457(undefined4 *param_1)

{
  undefined4 uVar1;
  
  uVar1 = FUN_101dd54f();
  *param_1 = uVar1;
  uVar1 = FUN_1005885c();
  param_1[1] = uVar1;
  uVar1 = FUN_101dd55a();
  param_1[2] = uVar1;
  param_1[3] = 1;
  return param_1;
}

