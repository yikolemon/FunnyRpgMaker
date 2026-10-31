/* Ghidra pseudocode. Image: pe_00bf40d0_8664.exe Address: 1400b0188 */

int FUN_1400b0188(uint param_1,short *param_2,int param_3)

{
  undefined1 (*pauVar1) [32];
  int iVar2;
  int iVar3;
  ulonglong uVar4;
  undefined8 uVar5;
  int iVar6;
  int iVar7;
  
  if (((((param_1 & 0xfffff3ff) != 0) || (param_1 == 0xc00)) &&
      ((param_2 != (short *)0x0 || (param_3 < 1)))) && (-1 < param_3)) {
    iVar6 = 0;
    iVar7 = 0xe3;
    do {
      iVar3 = (iVar7 + iVar6) / 2;
      if (param_1 == *(uint *)(&DAT_140116170 + (longlong)iVar3 * 0x10)) {
        if (iVar3 < 0) {
          return 0;
        }
        pauVar1 = (undefined1 (*) [32])(&PTR_DAT_140116178)[(longlong)iVar3 * 2];
        uVar4 = FUN_14009d080(pauVar1,0x55);
        if (0 < param_3) {
          if (param_3 <= (int)uVar4) {
            return 0;
          }
          uVar5 = FUN_1400a1b80(param_2,(longlong)param_3,(longlong)pauVar1);
          if ((int)uVar5 != 0) {
                    /* WARNING: Subroutine does not return */
            _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
          }
        }
        return (int)uVar4 + 1;
      }
      iVar2 = iVar3 + -1;
      if (-1 < (int)(param_1 - *(uint *)(&DAT_140116170 + (longlong)iVar3 * 0x10))) {
        iVar6 = iVar3 + 1;
        iVar2 = iVar7;
      }
      iVar7 = iVar2;
    } while (iVar6 <= iVar7);
  }
  return 0;
}

