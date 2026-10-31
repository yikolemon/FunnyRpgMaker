/* Ghidra pseudocode. Image: pe_00d3d4d0_014c.exe Address: 00483fc0 */

uint __cdecl FUN_00483fc0(int param_1)

{
  uint uVar1;
  undefined4 uVar2;
  
  if (param_1 == 0) {
    DAT_0051bef4 = 1;
  }
  FUN_004846c0();
  uVar1 = FUN_00485830();
  if ((char)uVar1 != '\0') {
    uVar2 = ___acrt_initialize();
    if ((char)uVar2 != '\0') {
      return CONCAT31((int3)((uint)uVar2 >> 8),1);
    }
    uVar1 = FUN_00485850('\0');
  }
  return uVar1 & 0xffffff00;
}

