/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 1002b688 */

undefined4 __thiscall FUN_1002b688(int param_1,undefined4 param_2,uint param_3)

{
  int iVar1;
  int iVar2;
  char *_Str;
  size_t sVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  
  if ((*(uint *)(param_1 + 4) >> 0x1e & 1) != 0) {
    uVar5 = (uint)(-1 < (int)*(uint *)(param_1 + 4)) << 3 | 0xfffffff0;
    iVar1 = *(int *)(*(int *)(param_1 + 8) + 4 + uVar5);
    if (iVar1 != 0) {
      iVar2 = *(int *)(*(int *)(param_1 + 8) + uVar5);
      iVar6 = 0;
      do {
        _Str = *(char **)(iVar2 + iVar6 * 8);
        sVar3 = _strlen(_Str);
        uVar5 = param_3;
        if (sVar3 < param_3) {
          uVar5 = sVar3;
        }
        iVar4 = FUN_102595e0(_Str,param_2,uVar5);
        if ((sVar3 == param_3) && (iVar4 == 0)) {
          return *(undefined4 *)(iVar2 + 4 + iVar6 * 8);
        }
        iVar6 = iVar6 + 1;
      } while (iVar1 != iVar6);
    }
  }
  return 0xffffffff;
}

