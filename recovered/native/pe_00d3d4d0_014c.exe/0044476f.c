/* Ghidra pseudocode. Image: pe_00d3d4d0_014c.exe Address: 0044476f */

undefined4 __fastcall FUN_0044476f(int param_1)

{
  undefined4 uVar1;
  
  if (param_1 == 0) {
    return 0;
  }
  if (*(char **)(param_1 + 0x14) != (char *)0x0) {
    uVar1 = FUN_00444cdb(*(char **)(param_1 + 0x14));
    if ((char)uVar1 != '\0') {
      return CONCAT31((int3)((uint)uVar1 >> 8),1);
    }
  }
  uVar1 = FUN_00444d0e(param_1);
  return uVar1;
}

