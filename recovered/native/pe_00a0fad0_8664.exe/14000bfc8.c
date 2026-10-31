/* Ghidra pseudocode. Image: pe_00a0fad0_8664.exe Address: 14000bfc8 */

ulonglong FUN_14000bfc8(longlong *param_1)

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

