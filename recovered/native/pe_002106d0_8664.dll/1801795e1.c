/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 1801795e1 */

int FUN_1801795e1(uint param_1,int param_2,int param_3)

{
  uint uVar1;
  
  uVar1 = param_1 >> ((byte)param_2 & 0x1f);
  if (param_2 < 0) {
    uVar1 = param_1 << (-(byte)param_2 & 0x1f);
  }
  return (int)((uVar1 >> (8U - (char)param_3 & 0x1f)) *
              *(int *)(&DAT_1802e0ca0 + (longlong)param_3 * 4)) >>
         ((&DAT_1802e0cd0)[(longlong)param_3 * 4] & 0x1f);
}

