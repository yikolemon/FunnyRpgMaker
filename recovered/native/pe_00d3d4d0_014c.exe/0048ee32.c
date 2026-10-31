/* Ghidra pseudocode. Image: pe_00d3d4d0_014c.exe Address: 0048ee32 */

void __thiscall FUN_0048ee32(void *this,int param_1,int param_2)

{
  int iVar1;
  
  iVar1 = FUN_0049a930(*(short **)this,*(int *)((int)this + 4),param_1,param_2);
  if (iVar1 == 0) {
    *(undefined1 *)((int)this + 0xc) = 1;
    return;
  }
                    /* WARNING: Subroutine does not return */
  __invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
}

