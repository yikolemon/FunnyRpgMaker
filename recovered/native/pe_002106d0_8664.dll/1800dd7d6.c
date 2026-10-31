/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 1800dd7d6 */

longlong * FUN_1800dd7d6(longlong *param_1,longlong *param_2,undefined8 *param_3)

{
  longlong lVar1;
  void *_Buf1;
  ulonglong uVar2;
  ulonglong uVar3;
  bool bVar4;
  int iVar5;
  longlong *_Buf2;
  longlong *plVar6;
  ulonglong _Size;
  
  lVar1 = *param_1;
  plVar6 = *(longlong **)(lVar1 + 8);
  *param_2 = (longlong)plVar6;
  *(undefined4 *)(param_2 + 1) = 0;
  param_2[2] = lVar1;
  if (*(char *)((longlong)plVar6 + 0x19) == '\0') {
    _Buf1 = (void *)*param_3;
    uVar2 = param_3[1];
    do {
      *param_2 = (longlong)plVar6;
      if ((ulonglong)plVar6[7] < 0x10) {
        _Buf2 = plVar6 + 4;
      }
      else {
        _Buf2 = (longlong *)plVar6[4];
      }
      uVar3 = plVar6[6];
      _Size = uVar2;
      if (uVar3 < uVar2) {
        _Size = uVar3;
      }
      iVar5 = memcmp(_Buf1,_Buf2,_Size);
      bVar4 = uVar3 < uVar2;
      if (iVar5 != 0) {
        bVar4 = 0 < iVar5;
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

