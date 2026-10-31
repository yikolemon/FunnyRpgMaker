/* Ghidra pseudocode. Image: pe_00d3d4d0_014c.exe Address: 00464269 */

int __fastcall FUN_00464269(int param_1,int param_2,int param_3,int param_4)

{
  return (param_4 - param_2 >> 0x10) * (param_1 >> 0x10) -
         (param_3 - param_1 >> 0x10) * (param_2 >> 0x10);
}

