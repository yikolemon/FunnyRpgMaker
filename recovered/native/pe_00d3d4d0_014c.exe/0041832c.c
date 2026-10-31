/* Ghidra pseudocode. Image: pe_00d3d4d0_014c.exe Address: 0041832c */

ushort * __thiscall FUN_0041832c(void *this,UINT param_1)

{
  HKL dwhkl;
  UINT UVar1;
  
  *(undefined2 *)this = 0;
  *(undefined1 *)((int)this + 2) = 0;
  dwhkl = GetKeyboardLayout(0);
  UVar1 = MapVirtualKeyExW(param_1,4,dwhkl);
  *(ushort *)this = (ushort)UVar1 & 0xff;
  *(bool *)((int)this + 2) = (UVar1 & 0xff00) != 0;
  return this;
}

