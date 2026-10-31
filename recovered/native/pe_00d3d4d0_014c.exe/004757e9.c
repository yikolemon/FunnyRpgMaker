/* Ghidra pseudocode. Image: pe_00d3d4d0_014c.exe Address: 004757e9 */

void __fastcall FUN_004757e9(undefined4 *param_1,int param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  uint uVar3;
  
  if ((param_2 == 0) || (0xff < (int)(param_1[0x1b] + param_1[0x1a]))) {
    uVar2 = 0x20;
    uVar1 = 6;
  }
  else {
    uVar2 = 0x100;
    uVar1 = 0xc;
  }
  uVar3 = 1 << (sbyte)uVar1;
  *param_1 = uVar1;
  param_1[4] = uVar2;
  param_1[1] = uVar3;
  param_1[2] = uVar3 >> 1;
  param_1[3] = uVar3 >> 6;
  return;
}

