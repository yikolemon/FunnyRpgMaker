/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 1017373d */

int __fastcall FUN_1017373d(uint param_1,int param_2,int param_3)

{
  uint uVar1;
  
  uVar1 = param_1 >> ((byte)param_2 & 0x1f);
  if (param_2 < 0) {
    uVar1 = param_1 << (-(byte)param_2 & 0x1f);
  }
  return (int)((uVar1 >> (8U - (char)param_3 & 0x1f)) * *(int *)(&DAT_102bafac + param_3 * 4)) >>
         ((&DAT_102bafd0)[param_3 * 4] & 0x1f);
}

