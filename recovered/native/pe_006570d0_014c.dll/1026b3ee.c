/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 1026b3ee */

int FUN_1026b3ee(int param_1)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  
  if (((param_1 == 0) || (uVar1 = FUN_10271eb0(param_1,0x55), 0x54 < uVar1)) ||
     (iVar2 = FUN_10274170(uVar1 * 2 + 2), iVar2 == 0)) {
    iVar2 = 0;
  }
  else {
    iVar3 = FUN_1027bc60(iVar2,uVar1 + 1,param_1,uVar1 + 1);
    if (iVar3 != 0) {
                    /* WARNING: Subroutine does not return */
      __invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
    }
  }
  return iVar2;
}

