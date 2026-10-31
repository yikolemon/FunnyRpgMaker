/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 1401602b8 */

undefined8 FUN_1401602b8(longlong param_1,longlong *param_2,uint param_3)

{
  ushort uVar1;
  ushort uVar2;
  undefined4 uVar3;
  longlong lVar4;
  longlong lVar5;
  int iVar6;
  undefined8 uVar7;
  longlong lVar8;
  int iVar9;
  int iVar10;
  
  lVar4 = *param_2;
  if (lVar4 == 0) {
    uVar7 = 0x23;
  }
  else {
    uVar7 = 6;
    if (param_3 < *(uint *)(lVar4 + 0x10)) {
      if (param_3 == 0) {
        param_3 = *(uint *)(lVar4 + 0xf8);
      }
      else {
        param_3 = param_3 - 1;
      }
      lVar5 = *(longlong *)(*(longlong *)(lVar4 + 0xe8) + 0x38);
      lVar8 = (ulonglong)param_3 * 0x30;
      uVar1 = *(ushort *)(lVar5 + 0xe + lVar8);
      uVar2 = *(ushort *)(lVar5 + 0x10 + lVar8);
      iVar10 = (int)*(short *)(lVar5 + 0x14 + lVar8);
      iVar9 = (int)*(short *)(lVar5 + 0x18 + lVar8);
      uVar7 = *(undefined8 *)(lVar5 + 0x20 + lVar8);
      uVar3 = *(undefined4 *)(lVar5 + 0x28 + lVar8);
      *(uint *)(param_1 + 0x68) = (uint)*(ushort *)(lVar5 + 0x12 + lVar8);
      *(uint *)(param_1 + 0x6c) = (uint)uVar2;
      *(undefined4 *)(param_1 + 0x70) = uVar3;
      FUN_140129ae0(param_1,uVar7);
      uVar2 = *(ushort *)(*(longlong *)(lVar4 + 0xe8) + 0x78);
      if (uVar2 - 1 < ((uint)uVar2 ^ uVar2 - 1)) {
        iVar6 = 0;
        if (uVar2 != 0) {
          for (; (uVar2 >> iVar6 & 1) == 0; iVar6 = iVar6 + 1) {
          }
        }
        switch(iVar6) {
        case 0:
          *(undefined1 *)(param_1 + 0x82) = 1;
          break;
        case 1:
          *(undefined1 *)(param_1 + 0x82) = 3;
          break;
        case 2:
          *(undefined1 *)(param_1 + 0x82) = 4;
          break;
        case 3:
          *(undefined1 *)(param_1 + 0x82) = 2;
          *(undefined2 *)(param_1 + 0x80) = 0x100;
        }
      }
      *(undefined4 *)(param_1 + 0x60) = 0x62697473;
      *(int *)(param_1 + 0x90) = iVar10;
      *(int *)(param_1 + 0x94) = iVar9;
      *(uint *)(param_1 + 0x40) = (uint)uVar1 << 6;
      *(int *)(param_1 + 0x38) = iVar10 << 6;
      *(int *)(param_1 + 0x3c) = iVar9 << 6;
      *(ulonglong *)(param_1 + 0x30) =
           CONCAT44((int)*(undefined8 *)(param_1 + 0x68) << 6,
                    (int)((ulonglong)*(undefined8 *)(param_1 + 0x68) >> 0x20) << 6);
      FUN_14012b254(param_1 + 0x30,(ulonglong)*(ushort *)(*(longlong *)(lVar4 + 0xe8) + 10) << 6);
      uVar7 = 0;
    }
  }
  return uVar7;
}

