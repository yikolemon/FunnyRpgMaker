/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 101dd9d6 */

undefined4 __fastcall FUN_101dd9d6(uint param_1)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  
  uVar2 = 0x3a6;
  uVar1 = 0;
  do {
    uVar3 = uVar1 + uVar2 >> 1;
    if ((uint)(&DAT_1030c1f0)[uVar3 * 2] < param_1) {
      uVar1 = uVar3 + 1;
    }
    else {
      if ((uint)(&DAT_1030c1f0)[uVar3 * 2] <= param_1) {
        return *(undefined4 *)(&UNK_1030c1f4 + uVar3 * 8);
      }
      uVar2 = uVar3 - 1;
    }
  } while (uVar1 <= uVar2);
  return 0;
}

