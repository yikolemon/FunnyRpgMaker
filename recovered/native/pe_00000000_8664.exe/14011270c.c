/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 14011270c */

void FUN_14011270c(longlong param_1)

{
  int *piVar1;
  float fVar2;
  longlong lVar3;
  undefined4 uVar4;
  
  lVar3 = *(longlong *)(param_1 + 0x188);
  piVar1 = (int *)(param_1 + 0x70);
  *piVar1 = *piVar1 + 1;
  *(undefined4 *)(param_1 + 0x74) = 0xffffffff;
  *(undefined8 *)(param_1 + 0x9c) = 0x100000001000000;
  *(undefined2 *)(param_1 + 0x230) = 0xffff;
  *(undefined1 *)(param_1 + 0x23a) = 1;
  uVar4 = *(undefined4 *)(param_1 + 0x80);
  if ((*piVar1 == 0) && (0 < *(short *)(param_1 + 0x22a))) {
    uVar4 = *(undefined4 *)(param_1 + 0xf4);
    *(undefined4 *)(lVar3 + 0x15c) = uVar4;
  }
  *(undefined4 *)(param_1 + 0x80) = uVar4;
  *(undefined4 *)(param_1 + 0x7c) = uVar4;
  *(undefined4 *)(param_1 + 0x8c) = 0;
  *(float *)(param_1 + 0x90) = *(float *)(lVar3 + 0x19c) - *(float *)(param_1 + 0xb4);
  *(undefined4 *)(lVar3 + 0x194) = 0;
  fVar2 = *(float *)(param_1 + 0x88);
  *(undefined4 *)(lVar3 + 0x160) = *(undefined4 *)(lVar3 + 0x158);
  *(float *)(lVar3 + 0x164) = *(float *)(lVar3 + 0x15c) + fVar2;
  *(undefined2 *)(lVar3 + 0x198) = 0;
  *(undefined8 *)(lVar3 + 0x180) = 0;
  *(undefined8 *)(lVar3 + 0x188) = 0;
  *(undefined4 *)(lVar3 + 0x174) = uVar4;
  if ((*(byte *)(param_1 + 0x94) & 1) != 0) {
    uVar4 = FUN_14007a557(0x30,DAT_1401c86c8);
    FUN_140112577(1,uVar4,0xffffffff);
    if (*(int *)(param_1 + 0x70) == 0) {
      *(undefined1 *)(param_1 + 0x23d) = 1;
    }
  }
  return;
}

