/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 1010b8d5 */

void __fastcall FUN_1010b8d5(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  int *piVar4;
  undefined4 *puVar5;
  undefined8 uVar6;
  
  iVar1 = FUN_1010330d();
  *(int *)(param_1 + 0x3c) = param_1 + 0x98;
  *(undefined4 **)(param_1 + 0xd4) = (undefined4 *)(param_1 + 0xa8);
  piVar4 = (int *)(param_1 + 0xdc);
  *(int **)(param_1 + 0xd8) = piVar4;
  if (*(int *)(param_1 + 0xac) < 0) {
    uVar2 = FUN_100fa1fa(0);
    if (*(int *)(param_1 + 0xb0) != 0) {
      FUN_1025b2d0(uVar2,*(int *)(param_1 + 0xb0),*(int *)(param_1 + 0xa8) << 2);
      FUN_100fa2cb(*(undefined4 *)(param_1 + 0xb0));
    }
    *(undefined4 *)(param_1 + 0xb0) = uVar2;
    *(undefined4 *)(param_1 + 0xac) = 0;
    piVar4 = *(int **)(param_1 + 0xd8);
  }
  *(undefined4 *)(param_1 + 0xa8) = 0;
  if (piVar4[1] < 0) {
    iVar3 = FUN_100fa1fa(0);
    if (piVar4[2] != 0) {
      FUN_1025b2d0(iVar3,piVar4[2],*piVar4 << 2);
      FUN_100fa2cb(piVar4[2]);
    }
    piVar4[2] = iVar3;
    piVar4[1] = 0;
  }
  *piVar4 = 0;
  *(undefined1 *)(param_1 + 0x98) = 1;
  *(undefined4 *)(param_1 + 0x9c) = 0;
  *(undefined4 *)(param_1 + 0xa0) = 0;
  *(undefined4 *)(param_1 + 0xa4) = 0;
  *(undefined4 *)(param_1 + 0xb8) = *(undefined4 *)(param_1 + 0xc);
  *(undefined4 *)(param_1 + 0xb4) = *(undefined4 *)(param_1 + 8);
  uVar6 = 0;
  if ((*(uint *)(param_1 + 4) >> 0xc & 1) == 0) {
    uVar6 = *(undefined8 *)(param_1 + 0x10);
  }
  *(undefined8 *)(param_1 + 0xbc) = uVar6;
  puVar5 = (undefined4 *)(iVar1 + 0x10);
  if (*(float *)(param_1 + 0x18) != 0.0) {
    puVar5 = (undefined4 *)(param_1 + 0x18);
  }
  if (NAN(*(float *)(param_1 + 0x18))) {
    puVar5 = (undefined4 *)(param_1 + 0x18);
  }
  uVar2 = *puVar5;
  *(undefined4 *)(param_1 + 200) = puVar5[1];
  *(undefined4 *)(param_1 + 0xc4) = uVar2;
  *(int *)(param_1 + 0xcc) = param_1;
  iVar1 = FUN_1010331e();
  *(int *)(param_1 + 0xd0) = iVar1 + 0xa8;
  return;
}

