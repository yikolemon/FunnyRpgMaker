/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 10238df0 */

int __thiscall FUN_10238df0(int param_1,undefined4 param_2,int param_3,int param_4,int param_5)

{
  int iVar1;
  int iVar2;
  undefined1 local_8 [4];
  
  for (iVar2 = param_3; (param_5 != 0 && (iVar2 != param_4)); iVar2 = iVar2 + iVar1) {
    iVar1 = FUN_1022d8f0(local_8,iVar2,param_4 - iVar2,param_2,param_1 + 8);
    if (iVar1 < 0) break;
    if (iVar1 == 0) {
      iVar1 = 1;
    }
    param_5 = param_5 + -1;
  }
  return iVar2 - param_3;
}

