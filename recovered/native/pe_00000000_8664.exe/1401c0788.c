/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 1401c0788 */

int FUN_1401c0788(uint param_1,longlong param_2,int param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  
  if (((((param_1 & 0xfffff3ff) != 0) || (param_1 == 0xc00)) && ((param_2 != 0 || (param_3 < 1))))
     && (-1 < param_3)) {
    iVar4 = 0;
    iVar3 = 0xe3;
    do {
      iVar2 = (iVar3 + iVar4) / 2;
      if (param_1 == *(uint *)(&DAT_140ebe510 + (longlong)iVar2 * 0x10)) {
        if (iVar2 < 0) {
          return 0;
        }
        iVar3 = FUN_1401aa820((&PTR_DAT_140ebe518)[(longlong)iVar2 * 2],0x55);
        if (0 < param_3) {
          if (param_3 <= iVar3) {
            return 0;
          }
          iVar4 = FUN_1401af320();
          if (iVar4 != 0) {
                    /* WARNING: Subroutine does not return */
            _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
          }
        }
        return iVar3 + 1;
      }
      iVar1 = iVar2 + -1;
      if (-1 < (int)(param_1 - *(uint *)(&DAT_140ebe510 + (longlong)iVar2 * 0x10))) {
        iVar1 = iVar3;
        iVar4 = iVar2 + 1;
      }
      iVar3 = iVar1;
    } while (iVar4 <= iVar3);
  }
  return 0;
}

