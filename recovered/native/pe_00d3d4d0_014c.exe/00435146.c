/* Ghidra pseudocode. Image: pe_00d3d4d0_014c.exe Address: 00435146 */

undefined4 __fastcall FUN_00435146(uint param_1)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  
  uVar2 = 0x3a6;
  uVar1 = 0;
  do {
    uVar3 = uVar1 + uVar2 >> 1;
    if ((uint)(&DAT_004e0794)[uVar3 * 2] < param_1) {
      uVar1 = uVar3 + 1;
    }
    else {
      if ((uint)(&DAT_004e0794)[uVar3 * 2] <= param_1) {
        return *(undefined4 *)(&UNK_004e0798 + uVar3 * 8);
      }
      uVar2 = uVar3 - 1;
    }
  } while (uVar1 <= uVar2);
  return 0;
}

