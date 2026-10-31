/* Ghidra pseudocode. Image: pe_00bf40d0_8664.exe Address: 1400623ce */

ulonglong FUN_1400623ce(longlong param_1,uint param_2)

{
  uint uVar1;
  longlong lVar2;
  char *_Str1;
  int iVar3;
  char *_Str2;
  ulonglong uVar4;
  
  uVar4 = 0;
  if (param_2 < 0x100) {
    _Str2 = (char *)(**(code **)(param_1 + 0x20))
                              (*(undefined2 *)
                                (*(longlong *)(param_1 + 0x18) + (ulonglong)param_2 * 2));
    uVar1 = *(uint *)(param_1 + 0x28);
    if ((ulonglong)uVar1 != 0) {
      lVar2 = *(longlong *)(param_1 + 0x30);
      uVar4 = 0;
      do {
        _Str1 = *(char **)(lVar2 + uVar4 * 8);
        if ((_Str1 != (char *)0x0) && (*_Str1 == *_Str2)) {
          iVar3 = strcmp(_Str1,_Str2);
          if (iVar3 == 0) goto LAB_140062428;
        }
        uVar4 = uVar4 + 1;
      } while (uVar1 != uVar4);
      uVar4 = 0;
    }
  }
LAB_140062428:
  return uVar4 & 0xffffffff;
}

