/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 10074c1c */

int __fastcall FUN_10074c1c(int *param_1)

{
  int iVar1;
  int iVar2;
  
  iVar2 = 0;
  if (param_1[0x13] != 0) {
    iVar1 = (**(code **)(*param_1 + 0xc))(0xffffffff);
    if (iVar1 != -1) {
      iVar2 = FUN_1026d698(param_1[0x13]);
      iVar2 = iVar2 >> 0x1f;
    }
  }
  return iVar2;
}

