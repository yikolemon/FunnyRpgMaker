/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 14015b372 */

undefined8 FUN_14015b372(longlong param_1,char *param_2)

{
  char cVar1;
  int iVar2;
  longlong lVar3;
  char *_Str2;
  int iVar4;
  undefined8 uVar5;
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
          uVar5 = FUN_1401a9174(*(undefined8 *)(*(longlong *)(param_1 + 0x250) + lVar6 * 8),0,10);
          return uVar5;
        }
      }
      lVar6 = lVar6 + 1;
    } while (iVar2 != lVar6);
  }
  return 0;
}

