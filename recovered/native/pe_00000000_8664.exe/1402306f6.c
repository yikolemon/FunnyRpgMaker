/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 1402306f6 */

void FUN_1402306f6(uint *param_1,uint param_2)

{
  uint uVar1;
  longlong lVar2;
  uint uVar3;
  uint uVar4;
  
  uVar1 = *param_1;
  uVar3 = uVar1 >> 1;
  if (uVar1 >> 1 < param_2) {
    uVar3 = param_2;
  }
  uVar4 = 0x10;
  if (0x10 < uVar3) {
    uVar4 = uVar3;
  }
  uVar3 = 0xffffffff;
  if (!CARRY4(uVar4,uVar1)) {
    uVar3 = uVar4 + uVar1;
  }
  if (param_2 == 0xffffffff) {
    uVar3 = 0xffffffff;
  }
  if (param_2 <= uVar3 - uVar1) {
    lVar2 = _realloc_base(*(undefined8 *)(param_1 + 2),uVar3);
    if (lVar2 != 0) {
      *(longlong *)(param_1 + 2) = lVar2;
      *param_1 = uVar3;
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_14044af80(9);
}

