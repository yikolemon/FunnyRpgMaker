/* Ghidra pseudocode. Image: pe_00bf40d0_8664.exe Address: 140045ec0 */

undefined8 FUN_140045ec0(longlong *param_1)

{
  ushort uVar1;
  ushort uVar2;
  longlong lVar3;
  int iVar4;
  undefined8 uVar5;
  byte *pbVar6;
  longlong lVar7;
  
  lVar3 = *param_1;
  *(undefined2 *)((longlong)param_1 + 0x74) = 0;
  uVar5 = 0x97;
  if (((short)param_1[3] != 0) && (*(short *)((longlong)param_1 + 0x1a) != 0)) {
    *(undefined8 *)((longlong)param_1 + 0x54) = *(undefined8 *)((longlong)param_1 + 0x24);
    *(undefined8 *)((longlong)param_1 + 0x5c) = *(undefined8 *)((longlong)param_1 + 0x2c);
    param_1[9] = param_1[3];
    param_1[10] = param_1[4];
    FUN_140041993(param_1);
    if ((*(byte *)(lVar3 + 0x110) & 8) != 0) {
      iVar4 = FUN_14001ecff((uint)*(ushort *)(param_1 + 9) << 6,(uint)*(ushort *)(lVar3 + 0x68));
      *(int *)((longlong)param_1 + 0x4c) = iVar4;
      iVar4 = FUN_14001ecff((uint)*(ushort *)((longlong)param_1 + 0x4a) << 6,
                            (uint)*(ushort *)(lVar3 + 0x68));
      *(int *)(param_1 + 10) = iVar4;
      lVar7 = (longlong)*(short *)(lVar3 + 0x70) * (longlong)*(int *)((longlong)param_1 + 0x4c);
      *(uint *)(param_1 + 0xc) =
           (int)((ulonglong)((lVar7 >> 0x3f) + lVar7 + 0x8000) >> 0x10) + 0x20U & 0xffffffc0;
    }
    uVar1 = *(ushort *)(param_1 + 9);
    uVar2 = *(ushort *)((longlong)param_1 + 0x4a);
    if (uVar1 < uVar2) {
      *(int *)(param_1 + 0xe) = (int)param_1[10];
      *(ushort *)((longlong)param_1 + 0x74) = uVar2;
      iVar4 = FUN_14001ecff((uint)uVar1,(uint)uVar2);
      *(int *)((longlong)param_1 + 100) = iVar4;
      iVar4 = 0x10000;
    }
    else {
      *(undefined4 *)(param_1 + 0xe) = *(undefined4 *)((longlong)param_1 + 0x4c);
      *(ushort *)((longlong)param_1 + 0x74) = uVar1;
      *(undefined4 *)((longlong)param_1 + 100) = 0x10000;
      iVar4 = FUN_14001ecff((uint)uVar2,(uint)uVar1);
    }
    *(int *)(param_1 + 0xd) = iVar4;
    pbVar6 = FUN_140045fd8(lVar3,(uint)*(ushort *)(param_1 + 9));
    param_1[0xf] = (longlong)pbVar6;
    param_1[8] = (longlong)(param_1 + 9);
    *(undefined4 *)((longlong)param_1 + 0x11c) = 0xffffffff;
    uVar5 = 0;
  }
  return uVar5;
}

