/* Ghidra pseudocode. Image: pe_00d3d4d0_014c.exe Address: 0048eb2c */

uint __cdecl FUN_0048eb2c(int param_1,int *param_2)

{
  int iVar1;
  
  if (param_2[2] != 2) {
    return (uint)param_2 & 0xffffff00;
  }
  iVar1 = FUN_0049a930((short *)(param_1 + 0x100),0x10,*param_2,param_2[1]);
  if (iVar1 == 0) {
    return 1;
  }
                    /* WARNING: Subroutine does not return */
  __invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
}

