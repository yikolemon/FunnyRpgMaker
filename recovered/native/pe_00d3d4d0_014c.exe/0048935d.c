/* Ghidra pseudocode. Image: pe_00d3d4d0_014c.exe Address: 0048935d */

bool __thiscall FUN_0048935d(void *this,int *param_1)

{
  int iVar1;
  
  iVar1 = *(int *)this;
  if (iVar1 == 0) {
    *(undefined1 *)(param_1 + 7) = 1;
    param_1[6] = 0x16;
    FUN_00495e14((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0,param_1);
  }
  return iVar1 != 0;
}

