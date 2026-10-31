/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 100fac20 */

uint FUN_100fac20(uint param_1,uint param_2)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  float fVar4;
  
  fVar4 = (float)(param_2 >> 0x18) / DAT_102b7090;
  uVar1 = FUN_100faccc(param_1 & 0xff,param_2 & 0xff,fVar4,fVar4);
  iVar2 = FUN_100faccc(param_1 >> 8 & 0xff,param_2 >> 8 & 0xff,fVar4);
  iVar3 = FUN_100faccc(param_1 >> 0x10 & 0xff,param_2 >> 0x10 & 0xff,fVar4);
  return iVar3 << 0x10 | iVar2 << 8 | uVar1 | 0xff000000;
}

