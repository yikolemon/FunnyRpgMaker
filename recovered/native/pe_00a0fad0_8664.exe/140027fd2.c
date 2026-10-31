/* Ghidra pseudocode. Image: pe_00a0fad0_8664.exe Address: 140027fd2 */

ulonglong FUN_140027fd2(undefined8 *param_1,ulonglong param_2,undefined4 param_3)

{
  ulonglong *puVar1;
  longlong lVar2;
  ulonglong uVar3;
  undefined8 *puVar4;
  undefined8 ******ppppppuVar5;
  ulonglong uVar6;
  undefined8 *puVar7;
  ulonglong uVar8;
  undefined8 *****local_68;
  undefined8 uStack_60;
  longlong local_58;
  ulonglong local_50;
  undefined8 local_48;
  
  local_48 = 0xfffffffffffffffe;
  lVar2 = FUN_14000e108("\"\'`])>}",param_3,0);
  if ((lVar2 - 1U < 2) || (lVar2 == -1)) {
    uVar3 = FUN_14000e108(param_1,param_3,param_2 + 1);
    if (uVar3 == 0xffffffffffffffff) {
      uVar3 = param_1[2];
    }
  }
  else if (lVar2 == 0) {
    puVar1 = param_1 + 2;
    uVar3 = param_2 + 1;
    if (uVar3 < *puVar1) {
      if (0xf < (ulonglong)param_1[3]) {
        param_1 = (undefined8 *)*param_1;
      }
      do {
        if (*(byte *)((longlong)param_1 + uVar3) == (byte)param_3) {
          return uVar3;
        }
        uVar6 = uVar3;
        if (*(byte *)((longlong)param_1 + uVar3) == 0x5c) {
          uVar6 = param_2 + 2;
        }
        uVar3 = uVar6 + 1;
        param_2 = uVar6;
      } while (uVar3 < *puVar1);
    }
  }
  else {
    uStack_60 = 0;
    local_58 = 1;
    local_50 = 0xf;
    local_68 = (undefined8 *****)(ulonglong)(byte)param_3;
LAB_1400280ac:
    uVar8 = param_2;
    uVar6 = uVar8 + 1;
    uVar3 = param_1[2];
    if (uVar6 < (ulonglong)param_1[2]) {
      puVar4 = (undefined8 *)*param_1;
      uVar3 = param_1[3];
      puVar7 = param_1;
      if (0xf < uVar3) {
        puVar7 = puVar4;
      }
      ppppppuVar5 = &local_68;
      if (0xf < local_50) {
        ppppppuVar5 = (undefined8 ******)local_68;
      }
      if (*(char *)((longlong)puVar7 + uVar6) == *(char *)((longlong)ppppppuVar5 + local_58 + -1)) {
        lVar2 = local_58 + -1;
        local_58 = local_58 + -1;
        *(undefined1 *)((longlong)ppppppuVar5 + lVar2) = 0;
        uVar3 = uVar6;
        if (local_58 == 0) goto LAB_1400281e9;
        puVar4 = (undefined8 *)*param_1;
        uVar3 = param_1[3];
      }
      if (uVar3 < 0x10) {
        puVar4 = param_1;
      }
      lVar2 = FUN_14000e108("\"\'`[(<{",*(undefined1 *)((longlong)puVar4 + uVar6),0);
      if (lVar2 - 1U < 2) {
        puVar4 = param_1;
        if (0xf < (ulonglong)param_1[3]) {
          puVar4 = (undefined8 *)*param_1;
        }
        param_2 = FUN_14000e108(param_1,*(undefined1 *)((longlong)puVar4 + uVar8 + 1),uVar8 + 2);
        if (param_2 == 0xffffffffffffffff) {
          param_2 = param_1[2];
        }
      }
      else {
        param_2 = uVar6;
        if (lVar2 != -1) {
          if (lVar2 == 0) {
            puVar4 = param_1;
            if (0xf < (ulonglong)param_1[3]) {
              puVar4 = (undefined8 *)*param_1;
            }
            param_2 = uVar8 + 2;
            if (param_2 < (ulonglong)param_1[2]) {
              do {
                if (*(char *)((longlong)puVar4 + param_2) == *(char *)((longlong)puVar4 + uVar8 + 1)
                   ) break;
                if (*(char *)((longlong)puVar4 + param_2) == '\\') {
                  param_2 = uVar6 + 2;
                }
                uVar3 = param_2 + 1;
                uVar6 = param_2;
                param_2 = uVar3;
              } while (uVar3 < (ulonglong)param_1[2]);
            }
          }
          else {
            FUN_14000cf50(&local_68,"\"\'`])>}"[lVar2]);
          }
        }
      }
      goto LAB_1400280ac;
    }
LAB_1400281e9:
    FUN_1400017de(&local_68);
  }
  return uVar3;
}

