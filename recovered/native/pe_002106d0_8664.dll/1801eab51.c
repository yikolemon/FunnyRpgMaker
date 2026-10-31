/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 1801eab51 */

int FUN_1801eab51(longlong *param_1,uint param_2,longlong *param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  int iVar4;
  longlong *plVar5;
  ulonglong uVar6;
  undefined1 auStack_78 [44];
  int local_4c;
  ulonglong local_48;
  
  local_48 = DAT_180402640 ^ (ulonglong)auStack_78;
  local_4c = 0;
  iVar4 = 0;
  if (param_2 < *(uint *)(param_1 + 1)) {
    uVar6 = (ulonglong)(*(ushort *)(param_1[2] + (ulonglong)param_2 * 2) & 0x1fff);
    plVar5 = (longlong *)param_1[uVar6 + 9];
    if (plVar5 == (longlong *)0x0) {
      do {
        local_4c = 0;
        puVar1 = (&PTR_DAT_180333e20)[uVar6];
        puVar2 = (&PTR_DAT_180333c00)[*(int *)(puVar1 + 4)];
        uVar3 = *(undefined8 *)(*param_1 + 0x98);
        plVar5 = (longlong *)FUN_1801c9a4b(uVar3,*(undefined4 *)(puVar2 + 8),&local_4c);
        iVar4 = local_4c;
        if (local_4c != 0) goto LAB_1801eac69;
        *plVar5 = (longlong)puVar1;
        plVar5[6] = (longlong)param_1;
        if ((*(code **)(puVar2 + 0x10) == (code *)0x0) ||
           (local_4c = (**(code **)(puVar2 + 0x10))(plVar5,*param_1), local_4c == 0)) {
          param_1[uVar6 + 9] = (longlong)plVar5;
          break;
        }
        if (*(code **)(puVar2 + 0x20) != (code *)0x0) {
          (**(code **)(puVar2 + 0x20))(plVar5);
        }
        FUN_1801c9b65(uVar3,plVar5);
        iVar4 = local_4c;
        if (local_4c != -1) goto LAB_1801eac66;
        local_4c = 0;
        uVar6 = (ulonglong)(*(ushort *)(param_1[2] + (ulonglong)param_2 * 2) & 0x1fff);
        plVar5 = (longlong *)param_1[uVar6 + 9];
      } while (plVar5 == (longlong *)0x0);
      iVar4 = 0;
    }
  }
  else {
    iVar4 = 6;
LAB_1801eac66:
    plVar5 = (longlong *)0x0;
  }
LAB_1801eac69:
  *param_3 = (longlong)plVar5;
  if (DAT_180402640 != (local_48 ^ (ulonglong)auStack_78)) {
                    /* WARNING: Subroutine does not return */
    FUN_1802396d0(local_48 ^ (ulonglong)auStack_78);
  }
  return iVar4;
}

