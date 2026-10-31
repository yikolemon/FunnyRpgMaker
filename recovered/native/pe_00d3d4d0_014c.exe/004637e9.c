/* Ghidra pseudocode. Image: pe_00d3d4d0_014c.exe Address: 004637e9 */

void __fastcall FUN_004637e9(undefined4 *param_1,undefined4 *param_2,uint param_3)

{
  undefined1 uVar1;
  uint uVar2;
  
  uVar2 = FUN_00464734(param_1,param_3);
  if ((uVar2 != 0) && (param_1[3] != 0)) {
    uVar2 = 0;
    do {
      uVar1 = FUN_00462a6e(param_2);
      *(undefined1 *)((int)param_1 + uVar2 + 0x10) = uVar1;
      uVar2 = uVar2 + 1;
    } while (uVar2 < (uint)param_1[3]);
  }
  return;
}

