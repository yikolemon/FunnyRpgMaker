/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 1026b130 */

int FUN_1026b130(short *param_1)

{
  short sVar1;
  short *psVar2;
  int iVar3;
  int iVar4;
  
  if (param_1 != (short *)0x0) {
    psVar2 = param_1;
    do {
      sVar1 = *psVar2;
      psVar2 = psVar2 + 1;
    } while (sVar1 != 0);
    iVar4 = ((int)psVar2 - (int)(param_1 + 1) >> 1) + 1;
    iVar3 = FUN_1026faa0(iVar4 * 2);
    if (iVar3 != 0) {
      iVar4 = FUN_102749e0(iVar3,iVar4,param_1);
      if (iVar4 == 0) {
        return iVar3;
      }
                    /* WARNING: Subroutine does not return */
      __invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
    }
  }
  return 0;
}

