/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 1801f5ef5 */

ulonglong FUN_1801f5ef5(longlong *param_1,undefined1 param_2)

{
  ushort uVar1;
  ushort uVar2;
  int iVar3;
  undefined8 uVar4;
  longlong lVar5;
  longlong lVar6;
  undefined8 uVar7;
  ulonglong uVar8;
  longlong lVar9;
  uint uVar10;
  undefined4 *puVar11;
  longlong *plVar12;
  undefined1 auStack_78 [32];
  undefined8 local_58;
  uint *local_50;
  uint local_44;
  ulonglong local_40;
  
  local_40 = DAT_180402640 ^ (ulonglong)auStack_78;
  lVar9 = *param_1;
  uVar4 = *(undefined8 *)(lVar9 + 0x98);
  lVar5 = FUN_1801ecd2a(*(undefined8 *)(lVar9 + 0x90));
  if (lVar5 == 0) {
    uVar8 = 0x99;
  }
  else {
    param_1[0x22] = lVar5;
    *(undefined1 *)(lVar5 + 0x2c6) = param_2;
    uVar1 = *(ushort *)(lVar9 + 0x184);
    *(uint *)(lVar5 + 0x22c) = (uint)uVar1;
    uVar2 = *(ushort *)(lVar9 + 0x186);
    *(uint *)(lVar5 + 0x23c) = (uint)uVar2;
    local_58 = 0;
    local_50 = &local_44;
    lVar6 = FUN_1801c9c3f(uVar4,0x14,0,(uint)uVar2 + (uint)uVar1);
    *(longlong *)(lVar5 + 0x230) = lVar6;
    if (local_44 == 0) {
      *(ulonglong *)(lVar5 + 0x240) = lVar6 + (ulonglong)*(uint *)(lVar5 + 0x22c) * 0x14;
      *(undefined4 *)(lVar5 + 0x228) = 0;
      *(undefined4 *)(lVar5 + 0x238) = 0;
      *(undefined8 *)(lVar5 + 0x248) = 0;
      uVar1 = *(ushort *)(lVar9 + 0x188);
      uVar10 = 0x80;
      if (0x101 < uVar1) {
        uVar10 = (uint)(uVar1 >> 1);
      }
      *(uint *)(lVar5 + 0x28) = uVar10 + uVar1;
      uVar2 = *(ushort *)(lVar9 + 0x182);
      *(ushort *)(lVar5 + 0x298) = uVar2;
      iVar3 = *(int *)(lVar9 + 0x3d0);
      *(int *)(lVar5 + 0x1f8) = iVar3;
      local_58 = 0;
      local_50 = &local_44;
      uVar7 = FUN_1801c9c3f(uVar4,4,0,iVar3 + (uint)uVar2 + uVar10 + uVar1);
      *(undefined8 *)(lVar5 + 0x30) = uVar7;
      if (local_44 == 0) {
        local_44 = FUN_1801f62f0(uVar4,*(int *)(lVar9 + 0x180) + 4,param_1 + 0x1b);
        if (local_44 == 0) {
          puVar11 = &DAT_180337358;
          plVar12 = param_1 + 0x11;
          for (lVar9 = 0x13; lVar9 != 0; lVar9 = lVar9 + -1) {
            *(undefined4 *)plVar12 = *puVar11;
            puVar11 = puVar11 + 1;
            plVar12 = (longlong *)((longlong)plVar12 + 4);
          }
          *(undefined4 *)((longlong)param_1 + 0x11c) = 0xffffffff;
          *(undefined2 *)((longlong)param_1 + 0x76) = 0;
          uVar8 = FUN_1801f637f(param_1);
          goto LAB_1801f6063;
        }
      }
    }
    FUN_1801f641b(param_1);
    uVar8 = (ulonglong)local_44;
  }
LAB_1801f6063:
  if (DAT_180402640 == (local_40 ^ (ulonglong)auStack_78)) {
    return uVar8;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1802396d0(local_40 ^ (ulonglong)auStack_78);
}

