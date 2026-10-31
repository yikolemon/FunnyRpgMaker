/* Ghidra pseudocode. Image: pe_00d3d4d0_014c.exe Address: 0040280e */

uint __cdecl FUN_0040280e(uint param_1)

{
  int iVar1;
  uint uVar2;
  
  if (param_1 < 0xffffffdd) {
    iVar1 = FUN_0047f230(param_1 + 0x23);
    uVar2 = iVar1 + 0x23U & 0xffffffe0;
    *(int *)(uVar2 - 4) = iVar1;
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_00402834();
}

