/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 100fa534 */

void FUN_100fa534(int param_1,int param_2,undefined4 param_3,undefined4 param_4)

{
  uint *puVar1;
  int iVar2;
  int iVar3;
  
  puVar1 = (uint *)FUN_1004303e();
  iVar2 = FUN_1025ea38(*puVar1 | 1,puVar1[1],param_1,param_2,param_3,0,param_4);
  iVar3 = -1;
  if (-1 < iVar2) {
    iVar3 = iVar2;
  }
  if (param_1 != 0) {
    if (param_2 <= iVar3) {
      iVar3 = param_2 + -1;
    }
    if (iVar2 < 0) {
      iVar3 = param_2 + -1;
    }
    *(undefined1 *)(param_1 + iVar3) = 0;
  }
  return;
}

