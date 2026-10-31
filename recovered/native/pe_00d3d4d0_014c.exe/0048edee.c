/* Ghidra pseudocode. Image: pe_00d3d4d0_014c.exe Address: 0048edee */

void __thiscall FUN_0048edee(void *this,int param_1,int param_2)

{
  int iVar1;
  
  iVar1 = FUN_0049a930((short *)(*(int *)((int)this + 8) + 0x250),0x55,param_1,param_2);
  if (iVar1 == 0) {
    FUN_0048ee32(this,param_1,param_2);
    return;
  }
                    /* WARNING: Subroutine does not return */
  __invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
}

