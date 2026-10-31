/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 180075522 */

ulonglong FUN_180075522(longlong *param_1)

{
  byte *pbVar1;
  int iVar2;
  ulonglong uVar3;
  
  iVar2 = (**(code **)(*param_1 + 0x30))();
  if (iVar2 == -1) {
    uVar3 = 0xffffffff;
  }
  else {
    *(int *)param_1[10] = *(int *)param_1[10] + -1;
    pbVar1 = *(byte **)param_1[7];
    *(byte **)param_1[7] = pbVar1 + 1;
    uVar3 = (ulonglong)*pbVar1;
  }
  return uVar3;
}

