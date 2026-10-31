/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 18002bc90 */

undefined4 FUN_18002bc90(ulonglong *param_1,undefined8 *param_2)

{
  void *_Buf2;
  ulonglong uVar1;
  char *_Str;
  int iVar2;
  size_t sVar3;
  ulonglong uVar4;
  undefined4 *puVar5;
  longlong lVar6;
  
  if ((*param_1 >> 0x3e & 1) != 0) {
    uVar4 = (ulonglong)(-1 < (longlong)*param_1);
    lVar6 = *(longlong *)((param_1[1] - 0x10) + uVar4 * 8);
    if (lVar6 != 0) {
      _Buf2 = (void *)*param_2;
      uVar1 = param_2[1];
      puVar5 = (undefined4 *)(*(longlong *)(param_1[1] + uVar4 * 8 + -0x18) + 8);
      do {
        _Str = *(char **)(puVar5 + -2);
        sVar3 = strlen(_Str);
        uVar4 = uVar1;
        if (sVar3 < uVar1) {
          uVar4 = sVar3;
        }
        iVar2 = memcmp(_Str,_Buf2,uVar4);
        if ((sVar3 == uVar1) && (iVar2 == 0)) {
          return *puVar5;
        }
        puVar5 = puVar5 + 4;
        lVar6 = lVar6 + -1;
      } while (lVar6 != 0);
    }
  }
  return 0xffffffff;
}

