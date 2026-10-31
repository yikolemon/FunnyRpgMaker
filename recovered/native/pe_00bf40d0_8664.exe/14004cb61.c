/* Ghidra pseudocode. Image: pe_00bf40d0_8664.exe Address: 14004cb61 */

void FUN_14004cb61(longlong param_1,longlong param_2)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  char *pcVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  longlong lVar8;
  int iVar9;
  ulonglong uVar10;
  undefined1 auStack_d8 [40];
  int local_b0;
  int local_ac;
  undefined8 local_a8 [12];
  ulonglong local_48;
  
  local_48 = DAT_14012ea80 ^ (ulonglong)auStack_d8;
  lVar1 = *(longlong *)(param_1 + 0x98);
  puVar7 = local_a8;
  (**(code **)(param_2 + 0x78))(param_2,puVar7,4,&local_ac);
  if (local_ac < 0) {
    iVar9 = 0xa2;
  }
  else if (local_ac - 5U < 0xfffffffc) {
LAB_14004cbc0:
    iVar9 = 3;
  }
  else {
    local_b0 = FUN_14004ce96(param_1,0,local_ac);
    iVar9 = local_b0;
    if ((local_b0 == 0) && (iVar9 = 0, 0 < local_ac)) {
      lVar2 = *(longlong *)(param_1 + 0x2e0);
      lVar8 = 0;
      do {
        pcVar5 = (char *)*puVar7;
        if (*pcVar5 == '/') {
          pcVar5 = pcVar5 + 1;
          *puVar7 = pcVar5;
        }
        lVar3 = puVar7[1];
        iVar9 = (int)(lVar3 - (longlong)pcVar5);
        if (iVar9 == 0) goto LAB_14004cbc0;
        lVar4 = *(longlong *)(lVar2 + 8 + lVar8 * 8);
        if (lVar4 != 0) {
          FUN_14001c53d(lVar1,lVar4);
        }
        puVar6 = (undefined8 *)FUN_14001e961(lVar1,iVar9 + 1,&local_b0);
        *(undefined8 **)(lVar2 + 8 + lVar8 * 8) = puVar6;
        iVar9 = local_b0;
        if (local_b0 != 0) break;
        uVar10 = lVar3 - (longlong)pcVar5 & 0xffffffff;
        FUN_1400b3550(puVar6,(undefined8 *)*puVar7,uVar10);
        *(undefined1 *)((longlong)puVar6 + uVar10) = 0;
        lVar8 = lVar8 + 1;
        puVar7 = puVar7 + 3;
        iVar9 = local_b0;
      } while (lVar8 < local_ac);
    }
  }
  *(int *)(param_2 + 0x18) = iVar9;
  if (DAT_14012ea80 != (local_48 ^ (ulonglong)auStack_d8)) {
                    /* WARNING: Subroutine does not return */
    FUN_140086440(local_48 ^ (ulonglong)auStack_d8);
  }
  return;
}

