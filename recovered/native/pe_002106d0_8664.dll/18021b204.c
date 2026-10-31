/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 18021b204 */

ulonglong FUN_18021b204(longlong param_1,uint param_2)

{
  uint uVar1;
  longlong lVar2;
  char *_Str1;
  int iVar3;
  char *_Str2;
  ulonglong uVar4;
  
  if (param_2 < 0x100) {
    _Str2 = (char *)(**(code **)(*(longlong *)(param_1 + 0x390) + 0x28))
                              (*(undefined2 *)
                                (*(longlong *)(*(longlong *)(param_1 + 0x390) + 0x30) +
                                (ulonglong)param_2 * 2));
    uVar1 = *(uint *)(param_1 + 0x370);
    if ((ulonglong)uVar1 != 0) {
      lVar2 = *(longlong *)(param_1 + 0x368);
      uVar4 = 0;
      do {
        _Str1 = *(char **)(lVar2 + uVar4 * 8);
        if (((_Str1 != (char *)0x0) && (*_Str1 == *_Str2)) &&
           (iVar3 = strcmp(_Str1,_Str2), iVar3 == 0)) {
          return uVar4 & 0xffffffff;
        }
        uVar4 = uVar4 + 1;
      } while (uVar1 != uVar4);
    }
  }
  return 0xffffffff;
}

