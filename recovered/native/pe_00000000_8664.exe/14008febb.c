/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 14008febb */

void FUN_14008febb(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  longlong lVar4;
  
  lVar4 = DAT_140f2a910;
  *(uint *)(DAT_140f2a910 + 0x2030) = *(uint *)(DAT_140f2a910 + 0x2030) | 0x2000;
  uVar1 = param_1[1];
  uVar2 = param_1[2];
  uVar3 = param_1[3];
  *(undefined8 *)(lVar4 + 0x20a8) = *param_1;
  *(undefined8 *)(lVar4 + 0x20b0) = uVar1;
  *(undefined8 *)(lVar4 + 0x20b8) = uVar2;
  *(undefined8 *)(lVar4 + 0x20c0) = uVar3;
  *(undefined8 *)(lVar4 + 0x20c8) = param_1[4];
  return;
}

