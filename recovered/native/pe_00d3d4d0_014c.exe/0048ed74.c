/* Ghidra pseudocode. Image: pe_00d3d4d0_014c.exe Address: 0048ed74 */

undefined4 * __thiscall FUN_0048ed74(void *this,short *param_1,int param_2,int param_3)

{
  int iVar1;
  
  *(int *)((int)this + 8) = param_3;
  *(short **)this = param_1;
  *(int *)((int)this + 4) = param_2;
  *(undefined1 *)((int)this + 0xc) = 0;
  iVar1 = FUN_0049a930(param_1,param_2,param_3 + 0x250,0x55);
  if (iVar1 == 0) {
    return this;
  }
                    /* WARNING: Subroutine does not return */
  __invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
}

