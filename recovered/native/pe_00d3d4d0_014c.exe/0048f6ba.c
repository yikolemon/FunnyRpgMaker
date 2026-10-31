/* Ghidra pseudocode. Image: pe_00d3d4d0_014c.exe Address: 0048f6ba */

undefined * __cdecl FUN_0048f6ba(uint param_1)

{
  uint *puVar1;
  undefined *puVar2;
  
  if (param_1 != 0) {
    if (param_1 < 0xe) {
      return (&PTR_LAB_004f9124)[param_1 * 2];
    }
    if ((param_1 < 0x719) && (puVar1 = FUN_0048f73d(param_1,0x4f9128,0x2d), puVar1 != (uint *)0x0))
    {
      return (undefined *)puVar1[1];
    }
  }
  if (param_1 - 0x13 < 0x12) {
    puVar2 = (undefined *)0xd;
  }
  else {
    puVar2 = (undefined *)((-(uint)(0xe < param_1 - 0xbc) & 0xe) + 8);
  }
  return puVar2;
}

