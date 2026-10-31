/* Ghidra pseudocode. Image: pe_00a0fad0_8664.exe Address: 1400ac2d3 */

longlong * FUN_1400ac2d3(longlong *param_1,char *param_2)

{
  undefined8 uVar1;
  bool bVar2;
  short sVar3;
  undefined4 uVar4;
  size_t sVar5;
  longlong *plVar6;
  undefined8 *puVar7;
  longlong lVar8;
  longlong lVar9;
  longlong lVar10;
  undefined1 local_68 [8];
  char local_60;
  undefined1 local_58 [8];
  longlong *local_50;
  longlong local_48;
  longlong *local_40;
  undefined8 local_38;
  
  local_38 = 0xfffffffffffffffe;
  sVar5 = strlen(param_2);
  lVar9 = *(longlong *)((longlong)param_1 + (longlong)*(int *)(*param_1 + 4) + 0x28);
  lVar8 = lVar9 - sVar5;
  lVar10 = 0;
  if (lVar8 != 0 && (longlong)sVar5 <= lVar9) {
    lVar10 = lVar8;
  }
  if (lVar9 < 1) {
    lVar10 = 0;
  }
  local_40 = param_1;
  FUN_14000cd6c(local_68,param_1);
  local_48 = 4;
  if (local_60 == '\x01') {
    local_50 = *(longlong **)
                (*(longlong *)((longlong)local_40 + (longlong)*(int *)(*local_40 + 4) + 0x40) + 8);
    (**(code **)(*local_50 + 8))();
    plVar6 = (longlong *)FUN_1400629e2(local_58);
    if (local_50 != (longlong *)0x0) {
      puVar7 = (undefined8 *)(**(code **)(*local_50 + 0x10))();
      if (puVar7 != (undefined8 *)0x0) {
        (**(code **)*puVar7)(puVar7,1);
      }
    }
    lVar9 = 0;
    if (((*(uint *)((longlong)local_40 + (longlong)*(int *)(*local_40 + 4) + 0x18) & 0x1c0) != 0x40)
       && (0 < lVar10)) {
      do {
        sVar3 = FUN_140058e2a(*(undefined8 *)
                               ((longlong)local_40 + (longlong)*(int *)(*local_40 + 4) + 0x48));
        if (sVar3 == -1) {
          lVar9 = 4;
          lVar10 = lVar8;
          goto LAB_1400ac430;
        }
        lVar9 = lVar8 + -1;
        bVar2 = 0 < lVar8;
        lVar8 = lVar9;
      } while (lVar9 != 0 && bVar2);
      lVar9 = 0;
      lVar10 = 0;
    }
LAB_1400ac430:
    for (; ((int)lVar9 == 0 && (0 < (longlong)sVar5)); sVar5 = sVar5 - 1) {
      uVar1 = *(undefined8 *)((longlong)local_40 + (longlong)*(int *)(*local_40 + 4) + 0x48);
      uVar4 = (**(code **)(*plVar6 + 0x60))(plVar6,*param_2);
      sVar3 = FUN_140058e2a(uVar1,uVar4);
      lVar9 = (ulonglong)(sVar3 == -1) << 2;
      param_2 = param_2 + 1;
    }
    if (((int)lVar9 == 0) && (0 < lVar10)) {
      do {
        sVar3 = FUN_140058e2a(*(undefined8 *)
                               ((longlong)local_40 + (longlong)*(int *)(*local_40 + 4) + 0x48));
        if (sVar3 == -1) {
          lVar9 = 4;
          goto code_r0x0001400ac46e;
        }
        lVar9 = lVar10 + -1;
        bVar2 = 0 < lVar10;
        lVar10 = lVar9;
      } while (lVar9 != 0 && bVar2);
      lVar9 = 0;
    }
code_r0x0001400ac46e:
    *(undefined8 *)((longlong)local_40 + (longlong)*(int *)(*local_40 + 4) + 0x28) = 0;
    local_48 = lVar9;
  }
  lVar9 = (longlong)*(int *)(*local_40 + 4);
  FUN_14000a9f0((longlong)local_40 + lVar9,
                (uint)(*(longlong *)((longlong)local_40 + lVar9 + 0x48) == 0) << 2 |
                (uint)local_48 | *(uint *)((longlong)local_40 + lVar9 + 0x10),0);
  FUN_14000ce2e(local_68);
  return local_40;
}

