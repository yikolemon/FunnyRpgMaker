/* Ghidra pseudocode. Image: pe_00d3d4d0_014c.exe Address: 00467e0f */

uint __fastcall FUN_00467e0f(uint *param_1,uint param_2)

{
  uint uVar1;
  
  uVar1 = 0;
  if (param_2 < *param_1) {
    uVar1 = 0x80U >> ((byte)param_2 & 7) & (uint)*(byte *)(param_1[2] + (param_2 >> 3));
  }
  return uVar1;
}

