/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 18011f8e2 */

void FUN_18011f8e2(longlong param_1,undefined4 *param_2)

{
  longlong *plVar1;
  longlong lVar2;
  longlong lVar3;
  longlong *plVar4;
  undefined4 *puVar5;
  longlong lVar6;
  longlong *plVar7;
  uint uVar8;
  longlong *plVar9;
  bool bVar10;
  undefined1 auStack_68 [40];
  undefined8 local_40;
  ulonglong local_38;
  
  local_38 = DAT_180402640 ^ (ulonglong)auStack_68;
  if ((*(byte *)(param_1 + 0x2acd) & 4) != 0) {
    FUN_1800fdfea("[docking] DockContextProcessUndockNode node %08X\n",*param_2);
  }
  lVar2 = *(longlong *)(param_2 + 6);
  if ((lVar2 == 0) || ((*(byte *)((longlong)param_2 + 0x11) & 8) != 0)) {
    puVar5 = (undefined4 *)FUN_180120d7d(param_1,0);
    *(undefined8 *)(puVar5 + 0x12) = *(undefined8 *)(param_2 + 0x12);
    *(undefined8 *)(puVar5 + 0x14) = *(undefined8 *)(param_2 + 0x14);
    *(undefined8 *)(puVar5 + 0x16) = *(undefined8 *)(param_2 + 0x16);
    FUN_180120de6(puVar5,param_2);
    FUN_180120ec1(*param_2,*puVar5);
  }
  else {
    bVar10 = *(undefined4 **)(lVar2 + 0x20) == param_2;
    *(undefined8 *)(lVar2 + 0x20 + (ulonglong)!bVar10 * 8) = 0;
    FUN_180120f6e(param_1,*(longlong *)(param_2 + 6),
                  *(undefined8 *)(*(longlong *)(param_2 + 6) + 0x20 + (ulonglong)bVar10 * 8));
    *(uint *)(*(longlong *)(param_2 + 6) + 0xd0) =
         *(uint *)(*(longlong *)(param_2 + 6) + 0xd0) & 0xfffffe3f | 0x80;
    *(undefined8 *)(param_2 + 6) = 0;
    puVar5 = param_2;
  }
  plVar9 = *(longlong **)(puVar5 + 0xe);
  if ((longlong)(int)puVar5[0xc] != 0) {
    plVar1 = plVar9 + (int)puVar5[0xc];
    do {
      lVar2 = *plVar9;
      uVar8 = *(uint *)(lVar2 + 0x14) & 0xfeffffff;
      *(uint *)(lVar2 + 0x14) = uVar8;
      lVar3 = *(longlong *)(lVar2 + 0x408);
      if (lVar3 != 0) {
        plVar4 = *(longlong **)(lVar3 + 0x1f8);
        lVar6 = (longlong)*(int *)(lVar3 + 0x1f0);
        plVar7 = plVar4;
        if (0 < lVar6) {
          do {
            if (*plVar7 == lVar2) break;
            plVar7 = plVar7 + 1;
          } while (plVar7 < plVar4 + lVar6);
        }
        if (plVar7 < plVar4 + lVar6) {
          FUN_1802a82f0(plVar7,plVar7 + 1,
                        (((ulonglong)~((longlong)plVar7 - (longlong)plVar4) >> 3) + lVar6) * 8);
          *(int *)(lVar3 + 0x1f0) = *(int *)(lVar3 + 0x1f0) + -1;
          uVar8 = *(uint *)(lVar2 + 0x14);
        }
      }
      FUN_180112092(lVar2,uVar8,0);
      plVar9 = plVar9 + 1;
    } while (plVar9 != plVar1);
    plVar9 = *(longlong **)(puVar5 + 0xe);
  }
  puVar5[0x34] = puVar5[0x34] & 0xffffffc0 | 9;
  FUN_180120d0b(&local_40,puVar5 + 0x14,*(undefined8 *)(*plVar9 + 0x48));
  *(undefined8 *)(puVar5 + 0x14) = local_40;
  *(byte *)((longlong)puVar5 + 0xd5) = *(byte *)((longlong)puVar5 + 0xd5) | 1;
  if (DAT_180402640 != (local_38 ^ (ulonglong)auStack_68)) {
                    /* WARNING: Subroutine does not return */
    FUN_1802396d0(local_38 ^ (ulonglong)auStack_68);
  }
  FUN_18011d4cf();
  return;
}

