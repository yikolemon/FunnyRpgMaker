/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 101349c3 */

undefined4 __fastcall FUN_101349c3(short *param_1,short *param_2,short *param_3)

{
  short sVar1;
  
  if (((param_2 == (short *)0x0) || (sVar1 = *param_2, sVar1 <= *param_1)) &&
     ((param_3 == (short *)0x0 || (sVar1 = *param_3, *param_1 <= sVar1)))) {
    return 0;
  }
  *param_1 = sVar1;
  return CONCAT31((uint3)(byte)((ushort)sVar1 >> 8),1);
}

