/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 140147f78 */

undefined8 FUN_140147f78(longlong *param_1)

{
  ushort uVar1;
  ushort uVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  longlong lVar5;
  longlong lVar6;
  
  lVar5 = *param_1;
  *(undefined2 *)((longlong)param_1 + 0x74) = 0;
  uVar4 = 0x97;
  if (((short)param_1[3] != 0) && (*(short *)((longlong)param_1 + 0x1a) != 0)) {
    *(undefined4 *)((longlong)param_1 + 0x54) = *(undefined4 *)((longlong)param_1 + 0x24);
    *(int *)(param_1 + 0xb) = (int)param_1[5];
    *(undefined4 *)((longlong)param_1 + 0x5c) = *(undefined4 *)((longlong)param_1 + 0x2c);
    *(int *)(param_1 + 0xc) = (int)param_1[6];
    *(int *)(param_1 + 9) = (int)param_1[3];
    *(undefined4 *)((longlong)param_1 + 0x4c) = *(undefined4 *)((longlong)param_1 + 0x1c);
    *(int *)(param_1 + 10) = (int)param_1[4];
    *(undefined4 *)((longlong)param_1 + 0x54) = *(undefined4 *)((longlong)param_1 + 0x24);
    FUN_140143a4b(param_1);
    if ((*(byte *)(lVar5 + 0x110) & 8) != 0) {
      uVar3 = FUN_14012b378((ulonglong)*(ushort *)(param_1 + 9) << 6,*(undefined2 *)(lVar5 + 0x68));
      *(undefined4 *)((longlong)param_1 + 0x4c) = uVar3;
      uVar3 = FUN_14012b378((ulonglong)*(ushort *)((longlong)param_1 + 0x4a) << 6,
                            *(undefined2 *)(lVar5 + 0x68));
      *(undefined4 *)(param_1 + 10) = uVar3;
      lVar6 = (longlong)*(short *)(lVar5 + 0x70) * (longlong)*(int *)((longlong)param_1 + 0x4c);
      *(uint *)(param_1 + 0xc) =
           (int)((ulonglong)((lVar6 >> 0x3f) + lVar6 + 0x8000) >> 0x10) + 0x20U & 0xffffffc0;
    }
    uVar1 = *(ushort *)(param_1 + 9);
    uVar2 = *(ushort *)((longlong)param_1 + 0x4a);
    if (uVar1 < uVar2) {
      *(int *)(param_1 + 0xe) = (int)param_1[10];
      *(ushort *)((longlong)param_1 + 0x74) = uVar2;
      uVar3 = FUN_14012b378(uVar1);
      *(undefined4 *)((longlong)param_1 + 100) = uVar3;
      uVar3 = 0x10000;
    }
    else {
      *(undefined4 *)(param_1 + 0xe) = *(undefined4 *)((longlong)param_1 + 0x4c);
      *(ushort *)((longlong)param_1 + 0x74) = uVar1;
      *(undefined4 *)((longlong)param_1 + 100) = 0x10000;
      uVar3 = FUN_14012b378(uVar2,uVar1);
    }
    *(undefined4 *)(param_1 + 0xd) = uVar3;
    lVar5 = FUN_140148090(lVar5,(short)param_1[9]);
    param_1[0xf] = lVar5;
    param_1[8] = (longlong)(param_1 + 9);
    *(undefined4 *)((longlong)param_1 + 0x11c) = 0xffffffff;
    uVar4 = 0;
  }
  return uVar4;
}

