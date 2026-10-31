/* Ghidra pseudocode. Image: pe_00d3d4d0_014c.exe Address: 00467439 */

short __fastcall FUN_00467439(uint param_1,int param_2,short param_3)

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

