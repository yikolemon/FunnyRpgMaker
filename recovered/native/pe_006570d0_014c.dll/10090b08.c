/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 10090b08 */

undefined4 FUN_10090b08(ushort param_1)

{
  undefined4 uVar1;
  uint uVar2;
  
  uVar2 = (uint)param_1;
  uVar1 = 1;
  if (((1 < uVar2 - 0x2028) && (uVar2 != 10)) && (uVar2 != 0xd)) {
    uVar1 = 0;
  }
  return uVar1;
}

