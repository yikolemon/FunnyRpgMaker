/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 10118a58 */

int __thiscall FUN_10118a58(int *param_1,int param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  
  uVar4 = param_2 + 7U & 0xfffffffc;
  iVar2 = *param_1;
  iVar5 = param_1[1];
  iVar1 = iVar2 + uVar4;
  if (iVar5 < iVar1) {
    if (iVar5 == 0) {
      iVar5 = 8;
    }
    else {
      iVar5 = iVar5 / 2 + iVar5;
    }
    if (iVar5 <= iVar1) {
      iVar5 = iVar1;
    }
    iVar3 = FUN_100fa1fa(iVar5);
    if (param_1[2] != 0) {
      FUN_1025b2d0(iVar3,param_1[2],*param_1);
      FUN_100fa2cb(param_1[2]);
    }
    param_1[2] = iVar3;
    param_1[1] = iVar5;
  }
  else {
    iVar3 = param_1[2];
  }
  *param_1 = iVar1;
  *(uint *)(iVar3 + iVar2) = uVar4;
  return param_1[2] + iVar2 + 4;
}

