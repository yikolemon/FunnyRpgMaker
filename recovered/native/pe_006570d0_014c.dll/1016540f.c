/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 1016540f */

void FUN_1016540f(int param_1)

{
  int *piVar1;
  float fVar2;
  int iVar3;
  undefined4 uVar4;
  
  iVar3 = *(int *)(param_1 + 0x158);
  piVar1 = (int *)(param_1 + 0x44);
  *piVar1 = *piVar1 + 1;
  *(undefined4 *)(param_1 + 0x48) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x74) = 0x1000000;
  *(undefined4 *)(param_1 + 0x70) = 0x1000000;
  *(undefined2 *)(param_1 + 0x1e4) = 0xffff;
  *(undefined1 *)(param_1 + 0x1ee) = 1;
  uVar4 = *(undefined4 *)(param_1 + 0x54);
  if ((*piVar1 == 0) && (0 < *(short *)(param_1 + 0x1de))) {
    uVar4 = *(undefined4 *)(param_1 + 200);
    *(undefined4 *)(iVar3 + 0x148) = uVar4;
  }
  *(undefined4 *)(param_1 + 0x54) = uVar4;
  *(undefined4 *)(param_1 + 0x50) = uVar4;
  *(undefined4 *)(param_1 + 0x60) = 0;
  *(float *)(param_1 + 100) = *(float *)(iVar3 + 0x188) - *(float *)(param_1 + 0x88);
  *(undefined4 *)(iVar3 + 0x180) = 0;
  fVar2 = *(float *)(param_1 + 0x5c);
  *(undefined4 *)(iVar3 + 0x14c) = *(undefined4 *)(iVar3 + 0x144);
  *(float *)(iVar3 + 0x150) = *(float *)(iVar3 + 0x148) + fVar2;
  *(undefined2 *)(iVar3 + 0x184) = 0;
  *(undefined4 *)(iVar3 + 0x16c) = 0;
  *(undefined4 *)(iVar3 + 0x170) = 0;
  *(undefined4 *)(iVar3 + 0x174) = 0;
  *(undefined4 *)(iVar3 + 0x178) = 0;
  *(undefined4 *)(iVar3 + 0x160) = uVar4;
  if ((*(byte *)(param_1 + 0x68) & 1) != 0) {
    uVar4 = FUN_100fcb39(0x30,0x3f800000);
    FUN_10165294(1,uVar4,0xffffffff);
    if (*(int *)(param_1 + 0x44) == 0) {
      *(undefined1 *)(param_1 + 0x1f1) = 1;
    }
  }
  return;
}

