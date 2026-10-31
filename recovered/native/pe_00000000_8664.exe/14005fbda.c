/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 14005fbda */

void FUN_14005fbda(uint *param_1,uint param_2)

{
  uint uVar1;
  longlong lVar2;
  uint uVar3;
  ulonglong uVar4;
  uint uVar5;
  
  uVar1 = *param_1;
  uVar3 = uVar1 >> 1;
  if (uVar1 >> 1 < param_2) {
    uVar3 = param_2;
  }
  uVar5 = 0x10;
  if (0x10 < uVar3) {
    uVar5 = uVar3;
  }
  uVar4 = 0xffffffff;
  if (!CARRY4(uVar5,uVar1)) {
    uVar4 = (ulonglong)(uVar5 + uVar1);
  }
  if (param_2 == 0xffffffff) {
    uVar4 = 0xffffffff;
  }
  if (param_2 <= (uint)uVar4 - uVar1) {
    lVar2 = _realloc_base(*(undefined8 *)(param_1 + 2),uVar4 * 2);
    if (lVar2 != 0) {
      *(longlong *)(param_1 + 2) = lVar2;
      *param_1 = (uint)uVar4;
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_140189b60(9);
}

