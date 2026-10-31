/* Ghidra pseudocode. Image: pe_00bf40d0_8664.exe Address: 140038185 */

int FUN_140038185(longlong *param_1,uint param_2,longlong *param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  longlong lVar3;
  int iVar4;
  undefined1 (*pauVar5) [32];
  ulonglong uVar6;
  undefined1 auStack_78 [44];
  int local_4c;
  ulonglong local_48;
  
  local_48 = DAT_14012ea80 ^ (ulonglong)auStack_78;
  local_4c = 0;
  iVar4 = 0;
  if (param_2 < *(uint *)(param_1 + 1)) {
    uVar6 = (ulonglong)(*(ushort *)(param_1[2] + (ulonglong)param_2 * 2) & 0x1fff);
    pauVar5 = (undefined1 (*) [32])param_1[uVar6 + 9];
    if (pauVar5 == (undefined1 (*) [32])0x0) {
      do {
        local_4c = 0;
        puVar1 = (&PTR_DAT_1400f0f40)[uVar6];
        puVar2 = (&PTR_DAT_1400f0d20)[*(int *)(puVar1 + 4)];
        lVar3 = *(longlong *)(*param_1 + 0x98);
        pauVar5 = FUN_14001c423(lVar3,*(uint *)(puVar2 + 8),&local_4c);
        iVar4 = local_4c;
        if (local_4c != 0) goto LAB_14003829d;
        *(undefined **)*pauVar5 = puVar1;
        *(longlong **)(pauVar5[1] + 0x10) = param_1;
        if ((*(code **)(puVar2 + 0x10) == (code *)0x0) ||
           (local_4c = (**(code **)(puVar2 + 0x10))(pauVar5,*param_1), local_4c == 0)) {
          param_1[uVar6 + 9] = (longlong)pauVar5;
          break;
        }
        if (*(code **)(puVar2 + 0x20) != (code *)0x0) {
          (**(code **)(puVar2 + 0x20))(pauVar5);
        }
        FUN_14001c53d(lVar3,(longlong)pauVar5);
        iVar4 = local_4c;
        if (local_4c != -1) goto LAB_14003829a;
        local_4c = 0;
        uVar6 = (ulonglong)(*(ushort *)(param_1[2] + (ulonglong)param_2 * 2) & 0x1fff);
        pauVar5 = (undefined1 (*) [32])param_1[uVar6 + 9];
      } while (pauVar5 == (undefined1 (*) [32])0x0);
      iVar4 = 0;
    }
  }
  else {
    iVar4 = 6;
LAB_14003829a:
    pauVar5 = (undefined1 (*) [32])0x0;
  }
LAB_14003829d:
  *param_3 = (longlong)pauVar5;
  if (DAT_14012ea80 != (local_48 ^ (ulonglong)auStack_78)) {
                    /* WARNING: Subroutine does not return */
    FUN_140086440(local_48 ^ (ulonglong)auStack_78);
  }
  return iVar4;
}

