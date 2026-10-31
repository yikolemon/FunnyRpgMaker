/* Ghidra pseudocode. Image: pe_00d3d4d0_014c.exe Address: 0048d83d */

short * __cdecl FUN_0048d83d(short *param_1)

{
  uint uVar1;
  short *psVar2;
  int iVar3;
  
  if (((param_1 == (short *)0x0) || (uVar1 = FUN_004941c0(param_1,0x55), 0x54 < uVar1)) ||
     (psVar2 = FUN_00495f50(uVar1 * 2 + 2), psVar2 == (short *)0x0)) {
    psVar2 = (short *)0x0;
  }
  else {
    iVar3 = FUN_0049a930(psVar2,uVar1 + 1,(int)param_1,uVar1 + 1);
    if (iVar3 != 0) {
                    /* WARNING: Subroutine does not return */
      __invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
    }
  }
  return psVar2;
}

