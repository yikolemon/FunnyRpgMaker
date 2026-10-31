/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 1400e148b */

void FUN_1400e148b(longlong param_1,undefined8 *param_2)

{
  longlong *plVar1;
  int iVar2;
  longlong lVar3;
  code *pcVar4;
  longlong *plVar5;
  longlong lVar6;
  longlong lVar7;
  
  if (*(undefined8 **)(param_1 + 0x2b8) != param_2) {
    iVar2 = *(int *)(param_1 + 0x68);
    if ((longlong)iVar2 != 0) {
      lVar3 = *(longlong *)(param_1 + 0x70);
      lVar7 = 0;
      do {
        FUN_1400e132a(param_1,*(undefined8 *)(lVar3 + lVar7));
        lVar7 = lVar7 + 8;
      } while ((longlong)iVar2 * 8 != lVar7);
    }
    if (((*(longlong *)(param_1 + 0x2b0) != 0) && (*(longlong *)(param_1 + 0x2b8) != 0)) &&
       (pcVar4 = *(code **)(*(longlong *)(param_1 + 0x2b8) + 0x10), pcVar4 != (code *)0x0)) {
      (*pcVar4)(param_1);
    }
    *(undefined8 **)(param_1 + 0x2b8) = param_2;
    if (param_2 == (undefined8 *)0x0) {
      *(char **)(param_1 + 0x2c0) = "NULL";
    }
    else {
      *(undefined8 *)(param_1 + 0x2c0) = *param_2;
      if ((*(longlong *)(param_1 + 0x2b0) != 0) && ((code *)param_2[1] != (code *)0x0)) {
        (*(code *)param_2[1])(param_1);
      }
    }
    iVar2 = *(int *)(param_1 + 0x68);
    if ((longlong)iVar2 != 0) {
      lVar3 = *(longlong *)(param_1 + 0x70);
      lVar7 = 0;
      do {
        FUN_1400e37cc(param_1,*(undefined8 *)(lVar3 + lVar7));
        lVar7 = lVar7 + 8;
      } while ((longlong)iVar2 * 8 != lVar7);
      if ((longlong)*(int *)(param_1 + 0x68) != 0) {
        plVar5 = *(longlong **)(param_1 + 0x70);
        plVar1 = plVar5 + *(int *)(param_1 + 0x68);
        do {
          lVar3 = *plVar5;
          iVar2 = *(int *)(lVar3 + 0x20);
          if ((longlong)iVar2 != 0) {
            lVar7 = *(longlong *)(lVar3 + 0x28);
            lVar6 = 0;
            do {
              FUN_1400e2468(param_1,lVar3,*(undefined8 *)(lVar7 + lVar6));
              lVar6 = lVar6 + 8;
            } while ((longlong)iVar2 * 8 != lVar6);
          }
          plVar5 = plVar5 + 1;
        } while (plVar5 != plVar1);
      }
    }
  }
  return;
}

