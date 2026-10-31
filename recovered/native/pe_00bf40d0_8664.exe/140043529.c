/* Ghidra pseudocode. Image: pe_00bf40d0_8664.exe Address: 140043529 */

ulonglong FUN_140043529(longlong *param_1,undefined1 param_2)

{
  ushort uVar1;
  ushort uVar2;
  int iVar3;
  longlong lVar4;
  undefined1 (*pauVar5) [32];
  longlong lVar6;
  ulonglong uVar7;
  longlong lVar8;
  uint uVar9;
  undefined4 *puVar10;
  longlong *plVar11;
  undefined1 auStackY_78 [32];
  uint local_44;
  ulonglong local_40;
  
  local_40 = DAT_14012ea80 ^ (ulonglong)auStackY_78;
  lVar8 = *param_1;
  lVar4 = *(longlong *)(lVar8 + 0x98);
  pauVar5 = FUN_14003a35e(*(longlong *)(lVar8 + 0x90));
  if (pauVar5 == (undefined1 (*) [32])0x0) {
    uVar7 = 0x99;
  }
  else {
    param_1[0x22] = (longlong)pauVar5;
    pauVar5[0x16][6] = param_2;
    uVar1 = *(ushort *)(lVar8 + 0x184);
    *(uint *)(pauVar5[0x11] + 0xc) = (uint)uVar1;
    uVar2 = *(ushort *)(lVar8 + 0x186);
    *(uint *)(pauVar5[0x11] + 0x1c) = (uint)uVar2;
    lVar6 = FUN_14001c617(lVar4,0x14,0,(uint)uVar2 + (uint)uVar1,0,(int *)&local_44);
    *(longlong *)(pauVar5[0x11] + 0x10) = lVar6;
    if (local_44 == 0) {
      *(ulonglong *)pauVar5[0x12] = lVar6 + (ulonglong)*(uint *)(pauVar5[0x11] + 0xc) * 0x14;
      *(undefined4 *)(pauVar5[0x11] + 8) = 0;
      *(undefined4 *)(pauVar5[0x11] + 0x18) = 0;
      *(undefined8 *)(pauVar5[0x12] + 8) = 0;
      uVar1 = *(ushort *)(lVar8 + 0x188);
      uVar9 = 0x80;
      if (0x101 < uVar1) {
        uVar9 = (uint)(uVar1 >> 1);
      }
      *(uint *)(pauVar5[1] + 8) = uVar9 + uVar1;
      uVar2 = *(ushort *)(lVar8 + 0x182);
      *(ushort *)(pauVar5[0x14] + 0x18) = uVar2;
      iVar3 = *(int *)(lVar8 + 0x3d0);
      *(int *)(pauVar5[0xf] + 0x18) = iVar3;
      lVar6 = FUN_14001c617(lVar4,4,0,iVar3 + (uint)uVar2 + uVar9 + uVar1,0,(int *)&local_44);
      *(longlong *)(pauVar5[1] + 0x10) = lVar6;
      if (local_44 == 0) {
        local_44 = FUN_140043924(lVar4,(short)*(undefined4 *)(lVar8 + 0x180) + 4,
                                 (ushort *)(param_1 + 0x1b));
        if (local_44 == 0) {
          puVar10 = &DAT_1400f4478;
          plVar11 = param_1 + 0x11;
          for (lVar8 = 0x13; lVar8 != 0; lVar8 = lVar8 + -1) {
            *(undefined4 *)plVar11 = *puVar10;
            puVar10 = puVar10 + 1;
            plVar11 = (longlong *)((longlong)plVar11 + 4);
          }
          *(undefined4 *)((longlong)param_1 + 0x11c) = 0xffffffff;
          *(undefined2 *)((longlong)param_1 + 0x76) = 0;
          uVar7 = FUN_1400439b3(param_1);
          goto LAB_140043697;
        }
      }
    }
    FUN_140043a4f(param_1);
    uVar7 = (ulonglong)local_44;
  }
LAB_140043697:
  if (DAT_14012ea80 == (local_40 ^ (ulonglong)auStackY_78)) {
    return uVar7;
  }
                    /* WARNING: Subroutine does not return */
  FUN_140086440(local_40 ^ (ulonglong)auStackY_78);
}

