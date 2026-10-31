/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 101349e8 */

undefined4 __fastcall FUN_101349e8(ushort *param_1,ushort *param_2,ushort *param_3)

{
  ushort uVar1;
  
  if (((param_2 == (ushort *)0x0) || (uVar1 = *param_2, uVar1 <= *param_1)) &&
     ((param_3 == (ushort *)0x0 || (uVar1 = *param_3, *param_1 <= uVar1)))) {
    return 0;
  }
  *param_1 = uVar1;
  return CONCAT31((uint3)(byte)(uVar1 >> 8),1);
}

