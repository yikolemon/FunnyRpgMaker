/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 1020fcb9 */

short __fastcall FUN_1020fcb9(uint param_1,int param_2,short param_3)

{
  short sVar1;
  uint uVar2;
  
  if (param_1 != 0) {
    uVar2 = 0;
    do {
      sVar1 = *(short *)(param_2 + 2 + uVar2 * 2) - *(short *)(param_2 + uVar2 * 2);
      if (sVar1 <= param_3) {
        sVar1 = param_3;
      }
      param_3 = sVar1;
      uVar2 = uVar2 + 2;
    } while (uVar2 < param_1);
  }
  return param_3;
}

