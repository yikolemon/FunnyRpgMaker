/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 1020bd31 */

int __fastcall FUN_1020bd31(int param_1,uint param_2)

{
  int iVar1;
  int iVar2;
  char *_Str1;
  char *_Str2;
  int iVar3;
  int iVar4;
  
  if (param_2 < 0x100) {
    _Str2 = (char *)(**(code **)(*(int *)(param_1 + 0x25c) + 0x14))
                              (*(undefined2 *)
                                (*(int *)(*(int *)(param_1 + 0x25c) + 0x18) + param_2 * 2));
    iVar1 = *(int *)(param_1 + 0x248);
    if (iVar1 != 0) {
      iVar2 = *(int *)(param_1 + 0x244);
      iVar4 = 0;
      do {
        _Str1 = *(char **)(iVar2 + iVar4 * 4);
        if (((_Str1 != (char *)0x0) && (*_Str1 == *_Str2)) &&
           (iVar3 = _strcmp(_Str1,_Str2), iVar3 == 0)) {
          return iVar4;
        }
        iVar4 = iVar4 + 1;
      } while (iVar1 != iVar4);
    }
  }
  return -1;
}

