/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 1801ff527 */

void FUN_1801ff527(longlong param_1,longlong param_2)

{
  undefined8 uVar1;
  longlong lVar2;
  longlong lVar3;
  char *pcVar4;
  longlong lVar5;
  undefined8 *puVar6;
  longlong lVar7;
  int iVar8;
  ulonglong uVar9;
  undefined1 auStack_d8 [40];
  int local_b0;
  int local_ac;
  undefined8 local_a8 [12];
  ulonglong local_48;
  
  local_48 = DAT_180402640 ^ (ulonglong)auStack_d8;
  uVar1 = *(undefined8 *)(param_1 + 0x98);
  puVar6 = local_a8;
  (**(code **)(param_2 + 0x78))(param_2,puVar6,4,&local_ac);
  if (local_ac < 0) {
    iVar8 = 0xa2;
  }
  else if (local_ac - 5U < 0xfffffffc) {
LAB_1801ff586:
    iVar8 = 3;
  }
  else {
    local_b0 = FUN_1801ff85c(param_1,0);
    iVar8 = local_b0;
    if ((local_b0 == 0) && (iVar8 = 0, 0 < local_ac)) {
      lVar2 = *(longlong *)(param_1 + 0x2e0);
      lVar7 = 0;
      do {
        pcVar4 = (char *)*puVar6;
        if (*pcVar4 == '/') {
          pcVar4 = pcVar4 + 1;
          *puVar6 = pcVar4;
        }
        lVar3 = puVar6[1];
        iVar8 = (int)(lVar3 - (longlong)pcVar4);
        if (iVar8 == 0) goto LAB_1801ff586;
        if (*(longlong *)(lVar2 + 8 + lVar7 * 8) != 0) {
          FUN_1801c9b65(uVar1);
        }
        lVar5 = FUN_1801cc006(uVar1,iVar8 + 1,&local_b0);
        *(longlong *)(lVar2 + 8 + lVar7 * 8) = lVar5;
        iVar8 = local_b0;
        if (local_b0 != 0) break;
        uVar9 = lVar3 - (longlong)pcVar4 & 0xffffffff;
        FUN_1802a82f0(lVar5,*puVar6,uVar9);
        *(undefined1 *)(lVar5 + uVar9) = 0;
        lVar7 = lVar7 + 1;
        puVar6 = puVar6 + 3;
        iVar8 = local_b0;
      } while (lVar7 < local_ac);
    }
  }
  *(int *)(param_2 + 0x18) = iVar8;
  if (DAT_180402640 != (local_48 ^ (ulonglong)auStack_d8)) {
                    /* WARNING: Subroutine does not return */
    FUN_1802396d0(local_48 ^ (ulonglong)auStack_d8);
  }
  return;
}

