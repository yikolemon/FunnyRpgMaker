/* Ghidra pseudocode. Image: pe_00bf40d0_8664.exe Address: 14004ccc1 */

void FUN_14004ccc1(longlong param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  int iVar3;
  undefined4 uVar4;
  longlong lVar5;
  longlong lVar6;
  undefined8 *puVar7;
  uint *puVar8;
  undefined1 auStackY_1f8 [32];
  int local_1c0;
  uint local_1bc;
  undefined1 local_1b8 [8];
  undefined8 local_1b0 [47];
  ulonglong local_38;
  
  local_38 = DAT_14012ea80 ^ (ulonglong)auStackY_1f8;
  local_1c0 = 0;
  lVar6 = *(longlong *)(param_1 + 0x98);
  puVar8 = *(uint **)(param_1 + 0x2e0);
  (*(code *)param_2[0xf])(param_2,local_1b8,0x10,&local_1bc);
  if ((int)local_1bc < 0) {
    iVar3 = 0xa2;
  }
  else {
    iVar3 = 3;
    if (0xffffffef < local_1bc - 0x11) {
      if ((puVar8 == (uint *)0x0) || (*puVar8 == 0)) {
        iVar3 = FUN_14004ce96(param_1,local_1bc,0);
        local_1c0 = iVar3;
        if (iVar3 != 0) goto LAB_14004ce35;
        puVar8 = *(uint **)(param_1 + 0x2e0);
      }
      else if (*puVar8 != local_1bc) goto LAB_14004ce35;
      lVar5 = *(longlong *)(puVar8 + 0x42);
      if (lVar5 == 0) {
        lVar5 = FUN_14001f231(lVar6,4,0,local_1bc * 2,0,&local_1c0);
        *(longlong *)(puVar8 + 0x42) = lVar5;
        iVar3 = local_1c0;
        if (local_1c0 != 0) goto LAB_14004ce35;
      }
      *(longlong *)(puVar8 + 0x44) = lVar5 + (longlong)(int)local_1bc * 4;
      uVar1 = *param_2;
      uVar2 = param_2[2];
      if ((int)local_1bc < 1) {
        iVar3 = 0;
      }
      else {
        puVar7 = local_1b0;
        lVar6 = 0;
        do {
          *param_2 = puVar7[-1];
          param_2[2] = *puVar7;
          uVar4 = (*(code *)param_2[10])(param_2,0);
          *(undefined4 *)(*(longlong *)(puVar8 + 0x42) + lVar6 * 4) = uVar4;
          *(undefined4 *)(*(longlong *)(puVar8 + 0x44) + lVar6 * 4) = uVar4;
          lVar6 = lVar6 + 1;
          puVar7 = puVar7 + 3;
          iVar3 = local_1c0;
        } while (lVar6 < (int)local_1bc);
      }
      *param_2 = uVar1;
      param_2[2] = uVar2;
    }
  }
LAB_14004ce35:
  *(int *)(param_2 + 3) = iVar3;
  if (DAT_14012ea80 != (local_38 ^ (ulonglong)auStackY_1f8)) {
                    /* WARNING: Subroutine does not return */
    FUN_140086440(local_38 ^ (ulonglong)auStackY_1f8);
  }
  return;
}

