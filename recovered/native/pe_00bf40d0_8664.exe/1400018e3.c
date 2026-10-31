/* Ghidra pseudocode. Image: pe_00bf40d0_8664.exe Address: 1400018e3 */

longlong * FUN_1400018e3(longlong *param_1,char *param_2)

{
  longlong *plVar1;
  bool bVar2;
  uint uVar3;
  size_t sVar4;
  longlong *plVar5;
  undefined8 *puVar6;
  ulonglong uVar7;
  longlong lVar8;
  longlong lVar9;
  longlong lVar10;
  longlong local_68;
  char local_60;
  undefined1 local_58 [8];
  longlong *local_50;
  longlong local_48;
  longlong *local_40;
  undefined8 local_38;
  
  local_38 = 0xfffffffffffffffe;
  sVar4 = strlen(param_2);
  lVar9 = *(longlong *)((longlong)param_1 + (longlong)*(int *)(*param_1 + 4) + 0x28);
  lVar8 = lVar9 - sVar4;
  lVar10 = 0;
  if (lVar8 != 0 && (longlong)sVar4 <= lVar9) {
    lVar10 = lVar8;
  }
  if (lVar9 < 1) {
    lVar10 = 0;
  }
  local_40 = param_1;
  FUN_140004d42(&local_68,param_1);
  local_48 = 4;
  if (local_60 == '\x01') {
    local_50 = *(longlong **)
                (*(longlong *)((longlong)local_40 + (longlong)*(int *)(*local_40 + 4) + 0x40) + 8);
    (**(code **)(*local_50 + 8))();
    plVar5 = FUN_140004e03((longlong)local_58);
    if (local_50 != (longlong *)0x0) {
      puVar6 = (undefined8 *)(**(code **)(*local_50 + 0x10))();
      if (puVar6 != (undefined8 *)0x0) {
        (**(code **)*puVar6)(puVar6,1);
      }
    }
    lVar9 = 0;
    if (((*(uint *)((longlong)local_40 + (longlong)*(int *)(*local_40 + 4) + 0x18) & 0x1c0) != 0x40)
       && (0 < lVar10)) {
      do {
        uVar7 = FUN_140004f14(*(longlong **)
                               ((longlong)local_40 + (longlong)*(int *)(*local_40 + 4) + 0x48),
                              (uint)*(ushort *)
                                     ((longlong)local_40 + (longlong)*(int *)(*local_40 + 4) + 0x58)
                             );
        if ((short)uVar7 == -1) {
          lVar9 = 4;
          lVar10 = lVar8;
          goto LAB_140001a40;
        }
        lVar9 = lVar8 + -1;
        bVar2 = 0 < lVar8;
        lVar8 = lVar9;
      } while (lVar9 != 0 && bVar2);
      lVar9 = 0;
      lVar10 = 0;
    }
LAB_140001a40:
    for (; ((int)lVar9 == 0 && (0 < (longlong)sVar4)); sVar4 = sVar4 - 1) {
      plVar1 = *(longlong **)((longlong)local_40 + (longlong)*(int *)(*local_40 + 4) + 0x48);
      uVar3 = (**(code **)(*plVar5 + 0x60))(plVar5,*param_2);
      uVar7 = FUN_140004f14(plVar1,uVar3);
      lVar9 = (ulonglong)((short)uVar7 == -1) << 2;
      param_2 = param_2 + 1;
    }
    if (((int)lVar9 == 0) && (0 < lVar10)) {
      do {
        uVar7 = FUN_140004f14(*(longlong **)
                               ((longlong)local_40 + (longlong)*(int *)(*local_40 + 4) + 0x48),
                              (uint)*(ushort *)
                                     ((longlong)local_40 + (longlong)*(int *)(*local_40 + 4) + 0x58)
                             );
        if ((short)uVar7 == -1) {
          lVar9 = 4;
          goto code_r0x000140001a7e;
        }
        lVar9 = lVar10 + -1;
        bVar2 = 0 < lVar10;
        lVar10 = lVar9;
      } while (lVar9 != 0 && bVar2);
      lVar9 = 0;
    }
code_r0x000140001a7e:
    *(undefined8 *)((longlong)local_40 + (longlong)*(int *)(*local_40 + 4) + 0x28) = 0;
    local_48 = lVar9;
  }
  lVar9 = (longlong)*(int *)(*local_40 + 4);
  FUN_140005d34((longlong)local_40 + lVar9,
                (uint)(*(longlong *)((longlong)local_40 + lVar9 + 0x48) == 0) << 2 |
                (uint)local_48 | *(uint *)((longlong)local_40 + lVar9 + 0x10),'\0');
  FUN_140004f4e(&local_68);
  return local_40;
}

