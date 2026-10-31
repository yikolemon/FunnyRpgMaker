/* Ghidra pseudocode. Image: pe_00d3d4d0_014c.exe Address: 004a36c8 */

int __cdecl FUN_004a36c8(int param_1,short *param_2,int param_3)

{
  short *psVar1;
  int iVar2;
  uint uVar3;
  
  if ((((param_1 == 0) || (param_1 == 0x400)) || (param_1 == 0x800)) ||
     (((param_2 == (short *)0x0 && (0 < param_3)) ||
      ((param_3 < 0 || (iVar2 = FUN_004a379a(param_1), iVar2 < 0)))))) {
    return 0;
  }
  psVar1 = (short *)(&PTR_DAT_004fa5dc)[iVar2 * 2];
  uVar3 = FUN_004941c0(psVar1,0x55);
  if (0 < param_3) {
    if (param_3 <= (int)uVar3) {
      return 0;
    }
    iVar2 = FUN_00496780(param_2,param_3,(int)psVar1);
    if (iVar2 != 0) {
                    /* WARNING: Subroutine does not return */
      __invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
    }
  }
  return uVar3 + 1;
}

