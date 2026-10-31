/* Ghidra pseudocode. Image: pe_00d3d4d0_014c.exe Address: 004662e0 */

int __fastcall FUN_004662e0(uint param_1,uint param_2)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  
  uVar1 = -param_1;
  if ((int)-param_1 < 0) {
    uVar1 = param_1;
  }
  uVar3 = -param_2;
  if ((int)-param_2 < 0) {
    uVar3 = param_2;
  }
  if (uVar3 * 0xc < uVar1) {
    iVar2 = ((int)~param_1 >> 0x1f) * -4 + 4;
  }
  else {
    iVar2 = 0;
    if (uVar1 * 0xc < uVar3) {
      iVar2 = 1 - ((int)param_2 >> 0x1f);
    }
  }
  return iVar2;
}

