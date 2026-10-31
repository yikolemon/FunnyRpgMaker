/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 140765bf8 */

void FUN_140765bf8(void)

{
  float fVar1;
  float fVar2;
  float *pfVar3;
  ulonglong uVar4;
  ulonglong unaff_RBX;
  float fVar5;
  float fVar6;
  uint unaff_retaddr;
  
  pfVar3 = (float *)(unaff_RBX >> 0x20);
  uVar4 = unaff_RBX & 0xffffffff;
  if ((unaff_retaddr != 0) && (((int)(char)(*(uint *)(uVar4 + 0x120) >> 0x10) & unaff_retaddr) == 0)
     ) {
    return;
  }
  *(uint *)(uVar4 + 0x120) = *(uint *)(uVar4 + 0x120) & 0xfff1ffff;
  if (((*(byte *)(uVar4 + 0xf) & 1) == 0) || (*(char *)(uVar4 + 0x100) != '\0')) {
    *(char *)(uVar4 + 0x118) = (*pfVar3 <= 0.0) * '\x02';
  }
  else {
    if ((*(byte *)(uVar4 + 0x14) & 0x40) != 0) {
      *(char *)(uVar4 + 0x118) = (*pfVar3 <= 0.0) * '\x02';
    }
    if ((*(byte *)(uVar4 + 0x14) & 0x40) == 0) goto LAB_140765c63;
  }
  *(char *)(uVar4 + 0x119) = (pfVar3[1] <= 0.0) * '\x02';
LAB_140765c63:
  fVar1 = *(float *)(uVar4 + 0x60);
  if (*pfVar3 <= 0.0) {
    *(undefined1 *)(uVar4 + 0x11a) = 0;
    fVar5 = fVar1;
  }
  else {
    fVar5 = (float)(int)*pfVar3;
    *(float *)(uVar4 + 0x60) = fVar5;
  }
  fVar2 = *(float *)(uVar4 + 100);
  if (pfVar3[1] <= 0.0) {
    *(undefined1 *)(uVar4 + 0x11a) = 0;
    fVar6 = fVar2;
  }
  else {
    fVar6 = (float)(int)pfVar3[1];
    *(float *)(uVar4 + 100) = fVar6;
  }
  if ((((fVar1 == fVar5) && (!NAN(fVar1) && !NAN(fVar5))) && (fVar2 == fVar6)) &&
     (!NAN(fVar2) && !NAN(fVar6))) {
    return;
  }
  FUN_1407663d8();
  return;
}

