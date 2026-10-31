/* Ghidra pseudocode. Image: pe_00d3d4d0_014c.exe Address: 00477ef6 */

undefined4 __fastcall FUN_00477ef6(uint param_1,uint param_2)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  
  uVar1 = FUN_0041eaa0(param_1,param_2);
  uVar2 = -uVar1;
  if ((int)-uVar1 < 0) {
    uVar2 = uVar1;
  }
  uVar3 = 0x7f;
  if (uVar2 < 0x10000) {
    uVar3 = uVar2 >> 9;
  }
  if ((int)uVar1 < 1) {
    uVar3 = uVar2 >> 9;
  }
  uVar2 = 0x80;
  if (uVar3 < 0x80) {
    uVar2 = uVar3;
  }
  uVar2 = (uint)(byte)-(char)uVar2;
  if (-1 < (int)uVar1) {
    uVar2 = uVar3;
  }
  return CONCAT31((int3)(uVar2 >> 8),(char)uVar2 + -0x80);
}

