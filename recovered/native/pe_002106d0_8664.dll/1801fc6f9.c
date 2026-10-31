/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 1801fc6f9 */

ulonglong FUN_1801fc6f9(char *param_1,ulonglong param_2,longlong param_3)

{
  int iVar1;
  longlong lVar2;
  char *_Str;
  int iVar3;
  size_t sVar4;
  ulonglong uVar5;
  
  uVar5 = 0;
  if ((param_2 < 0x10000) && (iVar1 = *(int *)(param_3 + 0x168), 0 < (longlong)iVar1)) {
    lVar2 = *(longlong *)(param_3 + 0x170);
    uVar5 = 0;
    do {
      _Str = *(char **)(lVar2 + uVar5 * 8);
      if ((_Str != (char *)0x0) && (*_Str == *param_1)) {
        sVar4 = strlen(_Str);
        if (sVar4 == param_2) {
          iVar3 = strncmp(_Str,param_1,param_2);
          if (iVar3 == 0) goto LAB_1801fc765;
        }
      }
      uVar5 = uVar5 + 1;
    } while ((longlong)iVar1 != uVar5);
    uVar5 = 0;
  }
LAB_1801fc765:
  return uVar5 & 0xffffffff;
}

