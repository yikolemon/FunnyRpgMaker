/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 10063c30 */

undefined4 * FUN_10063c30(undefined4 *param_1,uint param_2,uint param_3,undefined4 param_4)

{
  uint uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  uint local_14;
  
  uVar2 = param_4;
  uVar1 = param_3;
  local_14 = DAT_10388d00 ^ (uint)&local_14;
  if (param_2 < param_3) {
    do {
      uVar3 = FUN_10063c95(&param_2,uVar1);
      FUN_1006465a(uVar3);
    } while (param_2 < uVar1);
  }
  *param_1 = uVar2;
  if (DAT_10388d00 == (local_14 ^ (uint)&local_14)) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_102283e0();
}

