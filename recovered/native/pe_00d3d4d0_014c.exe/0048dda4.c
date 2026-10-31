/* Ghidra pseudocode. Image: pe_00d3d4d0_014c.exe Address: 0048dda4 */

void __cdecl FUN_0048dda4(short *param_1,int param_2,int param_3)

{
  int iVar1;
  
  iVar1 = FUN_00496780(param_1,param_2,param_3);
  if (iVar1 == 0) {
    if (*(short *)(param_3 + 0x80) != 0) {
      FUN_0048dd63(param_1,param_2,2);
    }
    if (*(short *)(param_3 + 0x100) != 0) {
      FUN_0048dd63(param_1,param_2,2);
    }
    return;
  }
                    /* WARNING: Subroutine does not return */
  __invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
}

