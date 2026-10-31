/* Ghidra pseudocode. Image: pe_00d3d4d0_014c.exe Address: 00439a4b */

void __fastcall FUN_00439a4b(int param_1,ushort *param_2)

{
  undefined4 uVar1;
  
  uVar1 = FUN_004440e4(param_1,(uint)param_2[2],*param_2,(undefined4 *)(param_1 + 0xf8));
  if ((char)uVar1 != '\0') {
    return;
  }
  *(undefined4 *)(param_1 + 0xf4) = *(undefined4 *)(param_1 + 0xf8);
  FUN_00442192(param_1);
  return;
}

