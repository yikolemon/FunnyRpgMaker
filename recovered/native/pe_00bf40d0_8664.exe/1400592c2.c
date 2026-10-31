/* Ghidra pseudocode. Image: pe_00bf40d0_8664.exe Address: 1400592c2 */

uint FUN_1400592c2(longlong param_1,char *param_2,undefined8 param_3,undefined4 param_4)

{
  char cVar1;
  int iVar2;
  longlong lVar3;
  char *_Str2;
  int iVar4;
  uint uVar5;
  longlong lVar6;
  
  iVar2 = *(int *)(param_1 + 0x240);
  if (0 < (longlong)iVar2) {
    lVar3 = *(longlong *)(param_1 + 0x248);
    cVar1 = *param_2;
    lVar6 = 0;
    do {
      _Str2 = *(char **)(lVar3 + lVar6 * 8);
      if (cVar1 == *_Str2) {
        iVar4 = strcmp(param_2,_Str2);
        if (iVar4 == 0) {
          uVar5 = FUN_14009bf40(*(longlong *)(*(longlong *)(param_1 + 0x250) + lVar6 * 8),
                                (longlong *)0x0,10,param_4);
          return uVar5;
        }
      }
      lVar6 = lVar6 + 1;
    } while (iVar2 != lVar6);
  }
  return 0;
}

