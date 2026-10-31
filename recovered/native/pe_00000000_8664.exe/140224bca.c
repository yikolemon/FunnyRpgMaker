/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 140224bca */

byte * FUN_140224bca(byte *param_1,byte *param_2)

{
  byte bVar1;
  uint uVar2;
  byte *pbVar3;
  
  param_1[0] = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  param_1[8] = 0;
  param_1[9] = 0;
  param_1[10] = 0;
  param_1[0xb] = 0;
  param_1[0xc] = 0;
  param_1[0xd] = 0;
  param_1[0xe] = 0;
  param_1[0xf] = 0;
  bVar1 = *param_2;
  *param_1 = bVar1;
  uVar2 = bVar1 - 1;
  if (uVar2 < 8) {
    pbVar3 = (byte *)(*(code *)((longlong)&switchD_140224c0d::switchdataD_1404c7570 +
                               (longlong)(int)(&switchD_140224c0d::switchdataD_1404c7570)[uVar2]))()
    ;
    return pbVar3;
  }
  return param_1;
}

