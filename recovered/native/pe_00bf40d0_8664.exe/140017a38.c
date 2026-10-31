/* Ghidra pseudocode. Image: pe_00bf40d0_8664.exe Address: 140017a38 */

ushort * FUN_140017a38(ushort *param_1,UINT param_2)

{
  UINT UVar1;
  HKL dwhkl;
  
  *param_1 = 0;
  *(undefined1 *)(param_1 + 1) = 0;
  dwhkl = GetKeyboardLayout(0);
  UVar1 = MapVirtualKeyExW(param_2,4,dwhkl);
  *param_1 = (ushort)(byte)UVar1;
  *(bool *)(param_1 + 1) = (UVar1 & 0xff00) != 0;
  return param_1;
}

