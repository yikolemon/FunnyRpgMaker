/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 1402bf54c */

longlong * FUN_1402bf54c(longlong *param_1,longlong *param_2,undefined8 *param_3)

{
  longlong lVar1;
  void *_Buf2;
  ulonglong uVar2;
  ulonglong uVar3;
  bool bVar4;
  int iVar5;
  longlong *plVar6;
  ulonglong _Size;
  
  lVar1 = *param_1;
  plVar6 = *(longlong **)(lVar1 + 8);
  *param_2 = (longlong)plVar6;
  *(undefined4 *)(param_2 + 1) = 0;
  param_2[2] = lVar1;
  if (*(char *)((longlong)plVar6 + 0x19) == '\0') {
    _Buf2 = (void *)*param_3;
    uVar2 = param_3[1];
    do {
      *param_2 = (longlong)plVar6;
      uVar3 = plVar6[5];
      _Size = uVar3;
      if (uVar2 < uVar3) {
        _Size = uVar2;
      }
      iVar5 = memcmp((void *)plVar6[4],_Buf2,_Size);
      bVar4 = iVar5 < 0;
      if (iVar5 == 0) {
        bVar4 = uVar3 < uVar2;
      }
      if (!bVar4) {
        param_2[2] = (longlong)plVar6;
      }
      else {
        plVar6 = plVar6 + 2;
      }
      *(uint *)(param_2 + 1) = (uint)!bVar4;
      plVar6 = (longlong *)*plVar6;
    } while (*(char *)((longlong)plVar6 + 0x19) == '\0');
  }
  return param_2;
}

