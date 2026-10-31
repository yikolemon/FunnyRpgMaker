/* Ghidra pseudocode. Image: pe_00d3d4d0_014c.exe Address: 00466925 */

uint __fastcall FUN_00466925(int param_1,uint param_2)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  
  uVar2 = *(uint *)(param_1 + 8);
  uVar3 = uVar2 - param_2;
  if ((int)uVar2 < (int)param_2) {
    uVar3 = param_2 - uVar2;
  }
  uVar1 = 0x30;
  if (0x30 < (int)uVar2) {
    uVar1 = uVar2;
  }
  if (0x27 < uVar3) {
    uVar1 = param_2;
  }
  if (uVar1 < 0xc0) {
    uVar2 = uVar1 & 0x3f;
    if (9 < uVar2) {
      if (uVar2 < 0x20) {
        uVar1 = uVar1 & 0xc0 | 10;
      }
      else if (uVar2 < 0x36) {
        uVar1 = uVar1 & 0xc0 | 0x36;
      }
    }
  }
  else {
    uVar1 = uVar1 + 0x20 & 0x7fffffc0;
  }
  return uVar1;
}

