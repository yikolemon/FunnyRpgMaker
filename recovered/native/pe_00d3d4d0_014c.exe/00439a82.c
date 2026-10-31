/* Ghidra pseudocode. Image: pe_00d3d4d0_014c.exe Address: 00439a82 */

void __fastcall FUN_00439a82(int param_1,ushort *param_2)

{
  undefined4 uVar1;
  
  uVar1 = FUN_004440e4(param_1,(uint)param_2[2],*param_2,(undefined4 *)(param_1 + 0xfc));
  if ((char)uVar1 != '\0') {
    return;
  }
  FUN_00442192(param_1);
  return;
}

