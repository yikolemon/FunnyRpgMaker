/* Ghidra pseudocode. Image: pe_00bf40d0_8664.exe Address: 14003bd9b */

void FUN_14003bd9b(longlong param_1,uint *param_2)

{
  uint uVar1;
  int iVar2;
  longlong lVar3;
  int iVar4;
  int iVar5;
  longlong lVar6;
  bool bVar7;
  
  iVar4 = *(int *)(param_1 + 0x1a4);
  bVar7 = true;
  if ((*(short *)(param_1 + 0x192) != 0) && (*(short *)(param_1 + 0x194) != 0)) {
    bVar7 = *(short *)(param_1 + 0x196) == 0;
  }
  if (*(int *)(param_1 + 0x3c) < iVar4) {
    if (*(char *)(param_1 + 0x2c6) != '\0') {
      *(undefined4 *)(param_1 + 0x20) = 0x81;
    }
  }
  else {
    *(int *)(param_1 + 0x3c) = *(int *)(param_1 + 0x3c) - iVar4;
    if (iVar4 != 0) {
      lVar6 = (longlong)*(short *)(param_1 + 0x1a0) * (longlong)(int)*param_2;
      lVar3 = (longlong)*(short *)(param_1 + 0x1a2) * (longlong)(int)*param_2;
      do {
        param_2 = param_2 + -1;
        uVar1 = *param_2;
        if (uVar1 < *(ushort *)(param_1 + 0xb0)) {
          iVar2 = *(int *)(param_1 + 0x324);
          iVar5 = 0;
          if (iVar2 == 0) {
            iVar5 = (int)((ulonglong)(lVar6 + 0x2000 + (lVar6 >> 0x3f)) >> 0xe);
          }
          if (!(bool)(iVar2 == 0 | bVar7)) {
            if ((iVar2 == 7) ||
               (((*(char *)(param_1 + 0x2c5) == '\0' || (*(short *)(param_1 + 0x1a2) == 0)) &&
                ((*(byte *)(*(longlong *)(param_1 + 0xd0) + (ulonglong)uVar1) & 0x10) == 0))))
            goto LAB_14003beaf;
            iVar5 = 0;
          }
          FUN_1400464dc(param_1,uVar1,iVar5,
                        (int)((ulonglong)(lVar3 + 0x2000 + (lVar3 >> 0x3f)) >> 0xe));
        }
        else if (*(char *)(param_1 + 0x2c6) != '\0') {
          *(undefined4 *)(param_1 + 0x20) = 0x86;
          return;
        }
LAB_14003beaf:
        iVar4 = iVar4 + -1;
      } while (iVar4 != 0);
    }
  }
  *(undefined4 *)(param_1 + 0x1a4) = 1;
  return;
}

