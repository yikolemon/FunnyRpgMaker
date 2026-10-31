/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 1028354b */

int FUN_1028354b(int param_1,int param_2,int param_3)

{
  undefined *puVar1;
  int iVar2;
  int iVar3;
  
  if ((((param_1 == 0) || (param_1 == 0x400)) || (param_1 == 0x800)) ||
     (((param_2 == 0 && (0 < param_3)) ||
      ((param_3 < 0 || (iVar2 = FUN_1028361d(param_1), iVar2 < 0)))))) {
    return 0;
  }
  puVar1 = (&PTR_DAT_1032621c)[iVar2 * 2];
  iVar2 = FUN_10271eb0(puVar1,0x55);
  if (0 < param_3) {
    if (param_3 <= iVar2) {
      return 0;
    }
    iVar3 = FUN_102749e0(param_2,param_3,puVar1);
    if (iVar3 != 0) {
                    /* WARNING: Subroutine does not return */
      __invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
    }
  }
  return iVar2 + 1;
}

