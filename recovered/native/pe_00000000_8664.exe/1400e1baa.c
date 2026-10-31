/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 1400e1baa */

void FUN_1400e1baa(longlong param_1,uint param_2,uint param_3,uint param_4,uint param_5)

{
  short sVar1;
  short sVar2;
  undefined2 uVar3;
  short sVar4;
  longlong lVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  
  iVar8 = 0;
  iVar6 = 0;
  if (*(ushort *)(param_1 + 0x3c) != 0) {
    iVar6 = (uint)*(ushort *)(param_1 + 0x38) + (uint)*(ushort *)(param_1 + 0x3c);
  }
  sVar1 = FUN_1400796a5(iVar6);
  iVar6 = (param_3 & 0xffff) + (param_5 & 0xffff);
  if (*(ushort *)(param_1 + 0x3e) != 0) {
    iVar8 = (uint)*(ushort *)(param_1 + 0x3a) + (uint)*(ushort *)(param_1 + 0x3e);
  }
  sVar2 = FUN_1400796a5(iVar8,iVar6);
  uVar3 = FUN_1400e1d71(*(undefined2 *)(param_1 + 0x38),param_2);
  *(undefined2 *)(param_1 + 0x38) = uVar3;
  sVar4 = FUN_1400e1d71(*(undefined2 *)(param_1 + 0x3a),param_3);
  *(short *)(param_1 + 0x3a) = sVar4;
  *(short *)(param_1 + 0x3c) = sVar1 - *(short *)(param_1 + 0x38);
  *(short *)(param_1 + 0x3e) = sVar2 - sVar4;
  uVar3 = FUN_1400e1d71(*(undefined2 *)(param_1 + 0x30),param_2);
  *(undefined2 *)(param_1 + 0x30) = uVar3;
  uVar3 = FUN_1400e1d71(*(undefined2 *)(param_1 + 0x32),param_3);
  *(undefined2 *)(param_1 + 0x32) = uVar3;
  sVar1 = FUN_1400796a5((uint)*(ushort *)(param_1 + 0x34) + (uint)*(ushort *)(param_1 + 0x30),
                        (param_4 & 0xffff) + (param_2 & 0xffff));
  *(short *)(param_1 + 0x34) = sVar1 - *(short *)(param_1 + 0x30);
  sVar1 = FUN_1400796a5((uint)*(ushort *)(param_1 + 0x36) + (uint)*(ushort *)(param_1 + 0x32),iVar6)
  ;
  *(short *)(param_1 + 0x36) = sVar1 - *(short *)(param_1 + 0x32);
  if ((*(int *)(param_1 + 4) == 3) || (*(int *)(param_1 + 4) == 0)) {
    *(undefined4 *)(param_1 + 4) = 3;
    iVar6 = *(int *)(param_1 + 0x40);
    if (iVar6 == *(int *)(param_1 + 0x44)) {
      if (iVar6 == 0) {
        iVar8 = 8;
      }
      else {
        iVar8 = iVar6 / 2 + iVar6;
      }
      iVar7 = iVar6 + 1;
      if (iVar6 + 1 < iVar8) {
        iVar7 = iVar8;
      }
      lVar5 = FUN_140077ab4((longlong)iVar7 << 3);
      if (*(longlong *)(param_1 + 0x48) != 0) {
        FUN_1401c5180(lVar5,*(longlong *)(param_1 + 0x48),(longlong)*(int *)(param_1 + 0x40) << 3);
        FUN_140077b90(*(undefined8 *)(param_1 + 0x48));
      }
      *(longlong *)(param_1 + 0x48) = lVar5;
      *(int *)(param_1 + 0x44) = iVar7;
      iVar6 = *(int *)(param_1 + 0x40);
    }
    else {
      lVar5 = *(longlong *)(param_1 + 0x48);
    }
    *(ulonglong *)(lVar5 + (longlong)iVar6 * 8) =
         (ulonglong)(param_2 & 0xffff) |
         (ulonglong)(param_3 << 0x10) |
         (ulonglong)(param_4 & 0xffff) << 0x20 | (ulonglong)(param_5 & 0xffff) << 0x30;
    *(int *)(param_1 + 0x40) = *(int *)(param_1 + 0x40) + 1;
  }
  return;
}

