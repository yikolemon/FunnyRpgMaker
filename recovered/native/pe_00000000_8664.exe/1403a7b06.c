/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 1403a7b06 */

void FUN_1403a7b06(longlong param_1,uint param_2,uint param_3,uint param_4,uint param_5)

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
  sVar1 = FUN_1403118b9(iVar6);
  iVar6 = (param_3 & 0xffff) + (param_5 & 0xffff);
  if (*(ushort *)(param_1 + 0x3e) != 0) {
    iVar8 = (uint)*(ushort *)(param_1 + 0x3a) + (uint)*(ushort *)(param_1 + 0x3e);
  }
  sVar2 = FUN_1403118b9(iVar8,iVar6);
  uVar3 = FUN_1403a7ccd(*(undefined2 *)(param_1 + 0x38),param_2);
  *(undefined2 *)(param_1 + 0x38) = uVar3;
  sVar4 = FUN_1403a7ccd(*(undefined2 *)(param_1 + 0x3a),param_3);
  *(short *)(param_1 + 0x3a) = sVar4;
  *(short *)(param_1 + 0x3c) = sVar1 - *(short *)(param_1 + 0x38);
  *(short *)(param_1 + 0x3e) = sVar2 - sVar4;
  uVar3 = FUN_1403a7ccd(*(undefined2 *)(param_1 + 0x30),param_2);
  *(undefined2 *)(param_1 + 0x30) = uVar3;
  uVar3 = FUN_1403a7ccd(*(undefined2 *)(param_1 + 0x32),param_3);
  *(undefined2 *)(param_1 + 0x32) = uVar3;
  sVar1 = FUN_1403118b9((uint)*(ushort *)(param_1 + 0x34) + (uint)*(ushort *)(param_1 + 0x30),
                        (param_4 & 0xffff) + (param_2 & 0xffff));
  *(short *)(param_1 + 0x34) = sVar1 - *(short *)(param_1 + 0x30);
  sVar1 = FUN_1403118b9((uint)*(ushort *)(param_1 + 0x36) + (uint)*(ushort *)(param_1 + 0x32),iVar6)
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
      lVar5 = FUN_14030fcc8((longlong)iVar7 << 3);
      if (*(longlong *)(param_1 + 0x48) != 0) {
        FUN_1404b97c0(lVar5,*(longlong *)(param_1 + 0x48),(longlong)*(int *)(param_1 + 0x40) << 3);
        FUN_14030fda4(*(undefined8 *)(param_1 + 0x48));
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

