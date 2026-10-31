/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 1400785a2 */

uint FUN_1400785a2(uint param_1,uint param_2)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  float fVar4;
  
  fVar4 = (float)(param_2 >> 0x18) / DAT_1401c8658;
  uVar1 = FUN_140078630(param_1 & 0xff,param_2 & 0xff,fVar4);
  iVar2 = FUN_140078630(param_1 >> 8 & 0xff,param_2 >> 8 & 0xff,fVar4);
  iVar3 = FUN_140078630(param_1 >> 0x10 & 0xff,param_2 >> 0x10 & 0xff,fVar4);
  return iVar3 << 0x10 | iVar2 << 8 | uVar1 | 0xff000000;
}

