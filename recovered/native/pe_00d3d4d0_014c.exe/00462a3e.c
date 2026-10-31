/* Ghidra pseudocode. Image: pe_00d3d4d0_014c.exe Address: 00462a3e */

void __fastcall FUN_00462a3e(int *param_1)

{
  undefined4 uVar1;
  
  if (((uint)param_1[3] < 0x11) && (uVar1 = FUN_00463c9b(param_1,0x11), (char)uVar1 == '\0')) {
    return;
  }
  param_1[4] = 0x11;
  return;
}

