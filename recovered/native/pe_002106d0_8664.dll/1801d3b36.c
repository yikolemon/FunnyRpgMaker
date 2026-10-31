/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 1801d3b36 */

longlong * FUN_1801d3b36(longlong param_1,longlong *param_2,longlong *param_3)

{
  longlong *plVar1;
  ulonglong uVar2;
  undefined8 *puVar3;
  longlong *plVar4;
  longlong *plVar5;
  longlong *plVar6;
  longlong lVar7;
  ulonglong local_88;
  longlong local_80;
  undefined8 *local_78;
  undefined8 *local_70;
  longlong local_68;
  undefined8 local_60;
  
  local_60 = 0xfffffffffffffffe;
  if (param_2 != param_3) {
    local_78 = *(undefined8 **)(param_1 + 8);
    lVar7 = *(longlong *)(param_1 + 0x18);
    local_70 = (undefined8 *)param_2[1];
    local_88 = ~-(ulonglong)((double)param_2[2] == 0.0) & param_2[2];
    uVar2 = FUN_1800dbb7b();
    local_80 = (uVar2 & *(ulonglong *)(param_1 + 0x30)) * 0x10;
    plVar1 = *(longlong **)(lVar7 + local_80);
    plVar5 = *(longlong **)(lVar7 + 8 + local_80);
    plVar4 = param_2;
    local_68 = lVar7;
    do {
      plVar6 = (longlong *)*plVar4;
      thunk_FUN_1802464a0(plVar4,0x20);
      *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + -1;
      if (plVar4 == plVar5) {
        puVar3 = local_70;
        if (plVar1 == param_2) {
          *(undefined8 **)(local_68 + local_80) = local_78;
          puVar3 = local_78;
        }
        *(undefined8 **)(local_68 + 8 + local_80) = puVar3;
        if (plVar6 != param_3) {
          do {
            local_88 = ~-(ulonglong)((double)plVar6[2] == 0.0) & plVar6[2];
            uVar2 = FUN_1800dbb7b(&local_88);
            lVar7 = (uVar2 & *(ulonglong *)(param_1 + 0x30)) * 0x10;
            plVar1 = *(longlong **)(local_68 + 8 + lVar7);
            plVar5 = plVar6;
            while( true ) {
              plVar6 = (longlong *)*plVar5;
              thunk_FUN_1802464a0(plVar5,0x20);
              *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + -1;
              if (plVar5 == plVar1) break;
              plVar5 = plVar6;
              if (plVar6 == param_3) {
                *(longlong **)(local_68 + lVar7) = plVar6;
                goto code_r0x0001801d3cad;
              }
            }
            *(undefined8 **)(local_68 + lVar7) = local_78;
            *(undefined8 **)(local_68 + 8 + lVar7) = local_78;
          } while (plVar6 != param_3);
        }
        break;
      }
      if ((plVar6 == param_3) && (plVar1 == param_2)) {
        *(longlong **)(local_68 + local_80) = plVar6;
        break;
      }
      plVar4 = plVar6;
    } while (plVar6 != param_3);
code_r0x0001801d3cad:
    *local_70 = plVar6;
    plVar6[1] = (longlong)local_70;
  }
  return param_3;
}

