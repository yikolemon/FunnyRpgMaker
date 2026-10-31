/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 1801cf85f */

void FUN_1801cf85f(int *param_1,undefined4 *param_2,int param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  
  if (param_2 != (undefined4 *)0x0 && param_1 != (int *)0x0) {
    param_3 = param_3 << 0x10;
    iVar3 = *param_1;
    iVar1 = FUN_1801cb4a4(iVar3,*param_2,param_3);
    iVar4 = param_1[1];
    iVar2 = FUN_1801cb4a4(iVar4,param_2[1],param_3);
    iVar3 = FUN_1801cb4a4(iVar3,param_2[2],param_3);
    iVar4 = FUN_1801cb4a4(iVar4,param_2[3],param_3);
    *param_1 = iVar2 + iVar1;
    param_1[1] = iVar4 + iVar3;
  }
  return;
}

