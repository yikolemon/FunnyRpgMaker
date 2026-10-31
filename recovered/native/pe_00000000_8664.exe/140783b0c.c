/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 140783b0c */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_140783b0c(float param_1,longlong param_2,float param_3)

{
  ulonglong uVar1;
  char *pcVar2;
  ulonglong uVar3;
  longlong in_RCX;
  ulonglong unaff_RBX;
  ulonglong uVar4;
  ulonglong unaff_RBP;
  ulonglong uVar5;
  bool bVar6;
  float fVar7;
  float in_XMM1_Da;
  float fVar8;
  uint uVar9;
  
  uVar9 = (uint)(unaff_RBP >> 0x20);
  uVar1 = unaff_RBX >> 0x20;
  uVar5 = unaff_RBP & 0xffffffff;
  pcVar2 = (char *)((ulonglong)_DAT_90100ff31039d74c & 0xffffffffffffff0d);
  *pcVar2 = *pcVar2 + (char)pcVar2;
  bVar6 = 1 < uVar9;
  uVar4 = (ulonglong)bVar6;
  if (!bVar6) {
    in_XMM1_Da = param_1;
  }
  uVar3 = (ulonglong)(bVar6 ^ 1);
  *(undefined4 *)(uVar1 + uVar3 * 4) = *(undefined4 *)(in_RCX + uVar3 * 4);
  *(undefined4 *)(uVar5 + uVar3 * 4) = *(undefined4 *)(param_2 + uVar3 * 4);
  fVar7 = *(float *)(param_2 + uVar4 * 4) - param_3;
  fVar8 = _DAT_150a3ac40 * fVar7;
  if (fVar8 < in_XMM1_Da || in_XMM1_Da <= 0.0) {
    in_XMM1_Da = (float)(int)fVar8;
  }
  *(float *)(uVar5 + uVar4 * 4) = in_XMM1_Da;
  fVar7 = (float)(int)(fVar7 - in_XMM1_Da);
  *(float *)(param_2 + uVar4 * 4) = fVar7;
  if ((unaff_RBP & 0xfffffffd00000000) == 0) {
    fVar7 = *(float *)(in_RCX + uVar4 * 4);
    *(float *)(uVar1 + uVar4 * 4) = fVar7;
    *(float *)(in_RCX + uVar4 * 4) = param_3 + fVar7 + *(float *)(uVar5 + uVar4 * 4);
  }
  else if ((uVar9 & 0xfffffffd) == 1) {
    *(float *)(uVar1 + uVar4 * 4) = param_3 + fVar7 + *(float *)(in_RCX + uVar4 * 4);
  }
  return;
}

