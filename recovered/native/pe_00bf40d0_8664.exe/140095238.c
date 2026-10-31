/* Ghidra pseudocode. Image: pe_00bf40d0_8664.exe Address: 140095238 */

uint FUN_140095238(longlong param_1,longlong *param_2)

{
  uint in_EAX;
  uint uVar1;
  int iVar2;
  
  if ((int)param_2[2] == 2) {
    iVar2 = FUN_1400a6f60((short *)(param_1 + 0x100),0x10,*param_2,param_2[1]);
    if (iVar2 != 0) {
                    /* WARNING: Subroutine does not return */
      _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
    }
    uVar1 = 1;
  }
  else {
    uVar1 = in_EAX & 0xffffff00;
  }
  return uVar1;
}

