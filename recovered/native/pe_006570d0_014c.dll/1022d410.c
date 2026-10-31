/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 1022d410 */

uint FUN_1022d410(undefined4 param_1,uint *param_2)

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
      iVar2 = FUN_10228350(uVar3 + 0x23);
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
    FUN_1000146d();
  }
  uVar3 = FUN_10228350(uVar3);
  *param_2 = *param_2 - 1;
  return uVar3;
}

