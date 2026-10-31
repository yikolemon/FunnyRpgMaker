/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 18016a9c8 */

void FUN_18016a9c8(longlong param_1,int param_2)

{
  longlong lVar1;
  char cVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined2 uVar9;
  float fVar10;
  float fVar11;
  
  lVar5 = DAT_180419160;
  lVar6 = (longlong)param_2 * 0x74;
  lVar3 = *(longlong *)(param_1 + 0x18);
  lVar4 = *(longlong *)(param_1 + 0x188);
  lVar1 = lVar3 + lVar6;
  *(int *)(param_1 + 0x74) = param_2;
  fVar10 = *(float *)(lVar3 + 0x38 + lVar6);
  if ((*(byte *)(lVar3 + 2 + lVar6) & 1) != 0) {
    fVar10 = fVar10 + *(float *)(param_1 + 0x90);
  }
  *(float *)(lVar4 + 0x158) = fVar10;
  fVar11 = *(float *)(param_1 + 0x7c) + *(float *)(param_1 + 0x88);
  *(float *)(lVar4 + 0x15c) = fVar11;
  *(float *)(lVar4 + 0x170) = fVar10;
  *(float *)(lVar4 + 0x1a0) = (fVar10 - *(float *)(lVar4 + 0x60)) - *(float *)(lVar4 + 0x19c);
  *(float *)(lVar4 + 0x160) = fVar10;
  *(undefined4 *)(lVar4 + 400) = *(undefined4 *)(param_1 + 0x8c);
  *(int *)(lVar4 + 0x1b0) = (int)*(char *)(lVar1 + 0x6e);
  *(float *)(lVar4 + 0x29c) = fVar11;
  *(undefined4 *)(lVar4 + 0x298) = *(undefined4 *)(lVar1 + 0x38);
  *(undefined4 *)(lVar4 + 0x2a0) = *(undefined4 *)(lVar1 + 0x3c);
  *(undefined4 *)(lVar4 + 0x23c) = *(undefined4 *)(lVar1 + 0x40);
  cVar2 = *(char *)(lVar1 + 0x6c);
  *(char *)(lVar4 + 0x10e) = cVar2;
  if (cVar2 == '\x01') {
    *(undefined4 *)(lVar5 + 0x1fe0) = 0;
    *(undefined4 *)(lVar5 + 0x1fe8) = 0;
  }
  if ((*(byte *)(param_1 + 6) & 0x10) == 0) {
    FUN_18016a90f(lVar4,lVar1 + 0x24);
    uVar7 = *(undefined8 *)(param_1 + 0x1a0);
    uVar9 = *(undefined2 *)(lVar1 + 0x60);
    uVar8 = *(undefined8 *)(lVar4 + 800);
  }
  else {
    uVar7 = *(undefined8 *)(param_1 + 0x1a0);
    uVar8 = *(undefined8 *)(lVar4 + 800);
    uVar9 = 2;
  }
  FUN_180195542(uVar7,uVar8,uVar9);
  if ((*(char *)(lVar5 + 0x2a40) == '\x01') && (*(char *)(lVar1 + 0x6c) == '\0')) {
    FUN_180101ebe(lVar4 + 0x158,&DAT_180360448,0);
    *(undefined4 *)(lVar5 + 0x2a78) = 0x7f7fffff;
  }
  return;
}

