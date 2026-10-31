/* Ghidra pseudocode. Image: pe_00d3d4d0_014c.exe Address: 0048dd63 */

void __cdecl FUN_0048dd63(short *param_1,int param_2,int param_3)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  
  iVar2 = 0;
  if (0 < param_3) {
    piVar3 = &param_3;
    do {
      piVar3 = piVar3 + 1;
      iVar1 = FUN_0049a750(param_1,param_2,*piVar3);
      if (iVar1 != 0) {
                    /* WARNING: Subroutine does not return */
        __invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
      }
      iVar2 = iVar2 + 1;
    } while (iVar2 < param_3);
  }
  return;
}

