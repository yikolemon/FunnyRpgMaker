/* Ghidra pseudocode. Image: pe_00bf40d0_8664.exe Address: 140048918 */

ulonglong FUN_140048918(longlong param_1,char *param_2)

{
  int iVar1;
  longlong lVar2;
  int iVar3;
  ulonglong uVar4;
  
  iVar1 = *(int *)(param_1 + 0x240);
  if (0 < (longlong)iVar1) {
    lVar2 = *(longlong *)(param_1 + 0x248);
    uVar4 = 0;
    do {
      iVar3 = strcmp(param_2,*(char **)(lVar2 + uVar4 * 8));
      if (iVar3 == 0) goto LAB_140048953;
      uVar4 = uVar4 + 1;
    } while ((longlong)iVar1 != uVar4);
  }
  uVar4 = 0;
LAB_140048953:
  return uVar4 & 0xffffffff;
}

