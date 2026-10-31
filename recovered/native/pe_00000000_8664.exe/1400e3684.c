/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 1400e3684 */

void FUN_1400e3684(longlong param_1)

{
  ushort *puVar1;
  longlong *plVar2;
  longlong *plVar3;
  longlong lVar4;
  undefined4 uVar5;
  ushort uVar6;
  uint uVar7;
  undefined8 uVar8;
  longlong *plVar9;
  ushort *puVar10;
  longlong *plVar11;
  bool bVar12;
  
  *(undefined1 *)(*(longlong *)(param_1 + 0x2b0) + 0xb9) = 1;
  uVar5 = DAT_1401c86a4;
  if ((longlong)*(int *)(param_1 + 0x68) != 0) {
    plVar9 = *(longlong **)(param_1 + 0x70);
    plVar2 = plVar9 + *(int *)(param_1 + 0x68);
    do {
      lVar4 = *plVar9;
      uVar8 = FUN_1400e30e8(lVar4,*(undefined4 *)(lVar4 + 0x1c),uVar5);
      if (*(short *)(lVar4 + 0x32) != 0) {
        FUN_1400e3188(uVar8);
      }
      if (*(short *)(lVar4 + 0x30) != 0) {
        FUN_1400e3188(uVar8);
      }
      if ((longlong)*(int *)(lVar4 + 0x20) != 0) {
        plVar11 = *(longlong **)(lVar4 + 0x28);
        plVar3 = plVar11 + *(int *)(lVar4 + 0x20);
        do {
          puVar10 = *(ushort **)(*plVar11 + 0x40);
          if (puVar10 == (ushort *)0x0) {
            puVar10 = &DAT_140e827f8;
          }
          uVar6 = *puVar10;
          while (uVar6 != 0) {
            if (uVar6 <= puVar10[1]) {
              uVar7 = (uint)uVar6;
              do {
                FUN_1400e3188(uVar8,uVar7);
                if (puVar10[1] <= uVar7) break;
                bVar12 = uVar7 < 0xffff;
                uVar7 = uVar7 + 1;
              } while (bVar12);
            }
            puVar1 = puVar10 + 2;
            puVar10 = puVar10 + 2;
            uVar6 = *puVar1;
          }
          plVar11 = plVar11 + 1;
        } while (plVar11 != plVar3);
      }
      plVar9 = plVar9 + 1;
    } while (plVar9 != plVar2);
  }
  return;
}

