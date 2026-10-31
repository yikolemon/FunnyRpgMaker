/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 10165661 */

void FUN_10165661(int param_1,int param_2)

{
  int iVar1;
  char cVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  float fVar7;
  float fVar8;
  undefined2 uVar9;
  
  iVar5 = DAT_1039d74c;
  iVar6 = param_2 * 0x74;
  iVar3 = *(int *)(param_1 + 0x10);
  iVar4 = *(int *)(param_1 + 0x158);
  iVar1 = iVar3 + iVar6;
  *(int *)(param_1 + 0x48) = param_2;
  fVar7 = *(float *)(iVar3 + 0x38 + iVar6);
  if ((*(byte *)(iVar3 + 2 + iVar6) & 1) != 0) {
    fVar7 = fVar7 + *(float *)(param_1 + 100);
  }
  *(float *)(iVar4 + 0x144) = fVar7;
  fVar8 = *(float *)(param_1 + 0x50) + *(float *)(param_1 + 0x5c);
  *(float *)(iVar4 + 0x148) = fVar8;
  *(float *)(iVar4 + 0x15c) = fVar7;
  *(float *)(iVar4 + 0x18c) = (fVar7 - *(float *)(iVar4 + 0x50)) - *(float *)(iVar4 + 0x188);
  *(float *)(iVar4 + 0x14c) = fVar7;
  *(undefined4 *)(iVar4 + 0x17c) = *(undefined4 *)(param_1 + 0x60);
  *(int *)(iVar4 + 0x19c) = (int)*(char *)(iVar1 + 0x6e);
  *(float *)(iVar4 + 0x270) = fVar8;
  *(undefined4 *)(iVar4 + 0x26c) = *(undefined4 *)(iVar1 + 0x38);
  *(undefined4 *)(iVar4 + 0x274) = *(undefined4 *)(iVar1 + 0x3c);
  *(undefined4 *)(iVar4 + 0x218) = *(undefined4 *)(iVar1 + 0x40);
  cVar2 = *(char *)(iVar1 + 0x6c);
  *(char *)(iVar4 + 0xfe) = cVar2;
  if (cVar2 == '\x01') {
    *(undefined4 *)(iVar5 + 0x1e80) = 0;
    *(undefined4 *)(iVar5 + 0x1e88) = 0;
  }
  if ((*(byte *)(param_1 + 6) & 0x10) == 0) {
    FUN_101655b6(iVar4,iVar1 + 0x24);
    uVar9 = *(undefined2 *)(iVar1 + 0x60);
  }
  else {
    uVar9 = 2;
  }
  FUN_1018de6c(*(undefined4 *)(iVar4 + 0x2e8),uVar9);
  if ((*(char *)(iVar5 + 0x2748) == '\x01') && (*(char *)(iVar1 + 0x6c) == '\0')) {
    FUN_100fd6a8(iVar4 + 0x144,&DAT_1033032c,0);
    *(undefined4 *)(iVar5 + 0x276c) = 0x7f7fffff;
  }
  return;
}

