/* Ghidra pseudocode. Image: pe_00d3d4d0_014c.exe Address: 00481140 */

uint __cdecl FUN_00481140(undefined4 param_1,uint *param_2)

{
  code *pcVar1;
  int iVar2;
  uint uVar3;
  int extraout_ECX;
  
  *param_2 = *param_2 + 1;
  uVar3 = *param_2;
  if (*param_2 == 0) {
    *param_2 = *param_2 - 1;
    return 0;
  }
  if (0xfff < uVar3) {
    if (uVar3 < uVar3 + 0x23) {
      iVar2 = FUN_0047f230(uVar3 + 0x23);
      if (iVar2 == 0) {
        pcVar1 = (code *)swi(0x29);
        (*pcVar1)();
        iVar2 = extraout_ECX;
      }
      uVar3 = iVar2 + 0x23U & 0xffffffe0;
      *(int *)(uVar3 - 4) = iVar2;
      *param_2 = *param_2 - 1;
      return uVar3;
    }
                    /* WARNING: Subroutine does not return */
    FUN_00402834();
  }
  uVar3 = FUN_0047f230(uVar3);
  *param_2 = *param_2 - 1;
  return uVar3;
}

