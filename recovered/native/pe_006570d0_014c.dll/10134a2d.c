/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 10134a2d */

undefined4 __fastcall FUN_10134a2d(uint *param_1,uint *param_2,uint *param_3)

{
  uint uVar1;
  
  if (((param_2 == (uint *)0x0) || (uVar1 = *param_2, uVar1 <= *param_1)) &&
     ((param_3 == (uint *)0x0 || (uVar1 = *param_3, *param_1 <= uVar1)))) {
    return 0;
  }
  *param_1 = uVar1;
  return CONCAT31((int3)(uVar1 >> 8),1);
}

