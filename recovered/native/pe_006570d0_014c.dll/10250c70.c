/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 10250c70 */

void FUN_10250c70(undefined4 param_1,uint *param_2)

{
  code *pcVar1;
  uint uVar2;
  int iVar3;
  int extraout_ECX;
  
  *param_2 = *param_2 + 1;
  if (*param_2 < 0x80000000) {
    uVar2 = *param_2 * 2;
    if (uVar2 == 0) {
      *param_2 = *param_2 - 1;
      return;
    }
    if (uVar2 < 0x1000) {
      FUN_10228350(uVar2);
      *param_2 = *param_2 - 1;
      return;
    }
    if (uVar2 < uVar2 + 0x23) {
      iVar3 = FUN_10228350(uVar2 + 0x23);
      if (iVar3 == 0) {
        pcVar1 = (code *)swi(0x29);
        (*pcVar1)();
        iVar3 = extraout_ECX;
      }
      *(int *)((iVar3 + 0x23U & 0xffffffe0) - 4) = iVar3;
      *param_2 = *param_2 - 1;
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_1000146d();
}

