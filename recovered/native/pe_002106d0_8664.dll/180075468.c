/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 180075468 */

int FUN_180075468(longlong *param_1)

{
  int iVar1;
  int iVar2;
  
  iVar2 = 0;
  if (param_1[0x10] != 0) {
    iVar1 = (**(code **)(*param_1 + 0x18))(param_1,0xffffffff);
    iVar2 = 0;
    if (iVar1 != -1) {
      iVar2 = fflush((FILE *)param_1[0x10]);
      iVar2 = iVar2 >> 0x1f;
    }
  }
  return iVar2;
}

