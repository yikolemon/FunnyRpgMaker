/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 140311e0f */

void FUN_140311e0f(longlong param_1,float param_2,float param_3)

{
  float fVar1;
  longlong lVar2;
  longlong lVar3;
  int iVar4;
  undefined4 uVar5;
  
  lVar3 = DAT_14062a630;
  lVar2 = *(longlong *)(DAT_14062a630 + 0x1608);
  fVar1 = *(float *)(lVar2 + 0x15c);
  *(float *)(lVar2 + 0x15c) = param_2;
  uVar5 = FUN_140313933(*(undefined4 *)(lVar2 + 0x174),param_2 - *(float *)(lVar3 + 0xe08));
  *(undefined4 *)(lVar2 + 0x174) = uVar5;
  *(float *)(lVar2 + 0x164) = *(float *)(lVar2 + 0x15c) - param_3;
  *(float *)(lVar2 + 0x18c) = param_3 - *(float *)(lVar3 + 0xe08);
  if (*(longlong *)(lVar2 + 0x208) != 0) {
    *(float *)(*(longlong *)(lVar2 + 0x208) + 0x1c) = *(float *)(lVar2 + 0x15c);
  }
  lVar3 = *(longlong *)(lVar3 + 0x24f8);
  if (lVar3 != 0) {
    if (*(char *)(lVar3 + 0x23a) == '\x01') {
      FUN_14037a238(lVar3);
    }
    iVar4 = (int)((param_2 - fVar1) / param_3 + DAT_1404ecffc);
    if ((0 < iVar4) && ((*(byte *)(param_1 + 0x14) & 1) == 0)) {
      *(int *)(lVar3 + 0x70) = *(int *)(lVar3 + 0x70) + iVar4;
      *(int *)(lVar3 + 0x98) = *(int *)(lVar3 + 0x98) + iVar4;
    }
    *(undefined4 *)(lVar3 + 0x80) = *(undefined4 *)(lVar2 + 0x15c);
  }
  return;
}

