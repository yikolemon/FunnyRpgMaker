/* Ghidra pseudocode. Image: pe_00bf40d0_8664.exe Address: 1400786b7 */

undefined1 * FUN_1400786b7(longlong param_1,longlong *param_2,longlong param_3,undefined *param_4)

{
  ushort uVar1;
  longlong lVar2;
  int iVar3;
  undefined1 *puVar4;
  undefined8 uVar5;
  undefined1 *puVar6;
  longlong lVar7;
  undefined1 auStack_78 [32];
  longlong *local_58;
  int local_4c;
  ulonglong local_48;
  
  local_48 = DAT_14012ea80 ^ (ulonglong)auStack_78;
  puVar4 = (undefined1 *)FUN_14001e961(param_1,*(ushort *)(param_3 + 8) + 1,&local_4c);
  if (local_4c == 0) {
    uVar5 = FUN_140020a41((longlong)param_2,*(uint *)(param_3 + 0xc));
    local_4c = (int)uVar5;
    if ((local_4c == 0) &&
       (local_4c = FUN_140021063(param_2,(uint)*(ushort *)(param_3 + 8)), local_4c == 0)) {
      uVar1 = *(ushort *)(param_3 + 8);
      if (uVar1 == 0) {
        *puVar4 = 0;
        FUN_140021187(param_2);
      }
      else {
        lVar2 = param_2[7];
        lVar7 = 0;
        puVar6 = puVar4;
        local_58 = param_2;
        do {
          iVar3 = (*(code *)param_4)((int)*(char *)(lVar2 + lVar7));
          if (iVar3 != 0) {
            *puVar6 = *(undefined1 *)(lVar2 + lVar7);
            puVar6 = puVar6 + 1;
          }
          lVar7 = lVar7 + 1;
        } while ((uint)uVar1 != (uint)lVar7);
        *puVar6 = 0;
        FUN_140021187(local_58);
        if (puVar6 != puVar4) goto LAB_140078755;
      }
    }
    FUN_14001c53d(param_1,(longlong)puVar4);
    *(undefined4 *)(param_3 + 0xc) = 0;
    *(undefined2 *)(param_3 + 8) = 0;
    FUN_14001c53d(param_1,*(longlong *)(param_3 + 0x10));
    *(undefined8 *)(param_3 + 0x10) = 0;
  }
  puVar4 = (undefined1 *)0x0;
LAB_140078755:
  if (DAT_14012ea80 != (local_48 ^ (ulonglong)auStack_78)) {
                    /* WARNING: Subroutine does not return */
    FUN_140086440(local_48 ^ (ulonglong)auStack_78);
  }
  return puVar4;
}

