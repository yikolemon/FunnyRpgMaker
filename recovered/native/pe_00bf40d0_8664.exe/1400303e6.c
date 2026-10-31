/* Ghidra pseudocode. Image: pe_00bf40d0_8664.exe Address: 1400303e6 */

byte * FUN_1400303e6(longlong param_1,longlong *param_2,undefined8 param_3,undefined4 *param_4)

{
  byte *pbVar1;
  int iVar2;
  longlong *plVar3;
  undefined8 uVar4;
  byte bVar5;
  undefined4 uVar6;
  longlong lVar7;
  longlong lVar8;
  ulonglong uVar9;
  longlong lVar10;
  byte *pbVar11;
  int iVar12;
  byte *pbVar13;
  undefined1 auStack_98 [32];
  int local_78;
  undefined *local_68;
  longlong local_60;
  undefined4 *local_58;
  uint local_50;
  uint local_4c;
  ulonglong local_48;
  
  local_48 = DAT_14012ea80 ^ (ulonglong)auStack_98;
  plVar3 = (longlong *)param_2[6];
  local_60 = plVar3[3];
  iVar2 = *(int *)(*param_2 + 0x10);
  local_68 = (&PTR_DAT_1400f4260)[iVar2];
  local_58 = param_4;
  (**(code **)(*(longlong *)(plVar3[99] + 0x48) + 0x90))
            (local_60,*(undefined2 *)(*plVar3 + 0x68),*(undefined2 *)(*plVar3 + 0x68));
  pbVar13 = (byte *)(param_1 + -1);
  iVar12 = (int)param_1 + -1;
  do {
    bVar5 = pbVar13[1];
    pbVar13 = pbVar13 + 1;
    iVar12 = iVar12 + 1;
  } while (bVar5 == 0x20);
  pbVar11 = pbVar13;
  if ((bVar5 & 0xdf) != 0) {
    do {
      pbVar1 = pbVar11 + 1;
      lVar7 = 2 - (ulonglong)(bVar5 < 0xf0);
      if (bVar5 < 0xe0) {
        lVar7 = 0;
      }
      pbVar11 = pbVar11 + lVar7 + 2;
      if (-1 < (char)bVar5) {
        pbVar11 = pbVar1;
      }
      bVar5 = *pbVar11;
    } while ((bVar5 & 0xdf) != 0);
  }
  iVar12 = (int)pbVar11 - iVar12;
  (**(code **)(*(longlong *)(plVar3[99] + 0x48) + 0x18))(param_3);
  local_78 = iVar12;
  (**(code **)(*(longlong *)(plVar3[99] + 0x48) + 0x10))(param_3,pbVar13,iVar12,0);
  (**(code **)(*(longlong *)(plVar3[99] + 0x48) + 0x48))(param_3);
  lVar7 = local_60;
  (**(code **)(*(longlong *)(plVar3[99] + 0x48) + 0x100))(local_60,param_3,local_68,iVar2 != 10);
  if (iVar2 != 10) {
    uVar4 = *(undefined8 *)(param_2[6] + 0x20);
    (**(code **)(*(longlong *)(plVar3[99] + 0x48) + 0x18))(uVar4);
    local_78 = iVar12;
    (**(code **)(*(longlong *)(plVar3[99] + 0x48) + 0x10))(uVar4,pbVar13,iVar12,0);
    (**(code **)(*(longlong *)(plVar3[99] + 0x48) + 0x48))(uVar4);
    (**(code **)(*(longlong *)(plVar3[99] + 0x48) + 0x100))(lVar7,uVar4,0,0);
    lVar7 = (**(code **)(*(longlong *)(plVar3[99] + 0x48) + 0x30))(param_3,&local_4c);
    lVar8 = (**(code **)(*(longlong *)(plVar3[99] + 0x48) + 0x30))(uVar4);
    uVar9 = (ulonglong)local_4c;
    if (local_4c == local_50) {
      if (uVar9 != 0) {
        lVar10 = 0;
        do {
          if (*(int *)(lVar7 + lVar10) != *(int *)(lVar8 + lVar10)) {
            if ((int)uVar9 != 0) goto LAB_1400305e8;
            break;
          }
          lVar10 = lVar10 + 0x14;
          uVar9 = uVar9 - 1;
        } while (uVar9 != 0);
      }
      (**(code **)(*(longlong *)(plVar3[99] + 0x48) + 0x18))(param_3);
    }
  }
LAB_1400305e8:
  uVar6 = (**(code **)(*(longlong *)(plVar3[99] + 0x48) + 0x40))(param_3);
  *local_58 = uVar6;
  if (DAT_14012ea80 != (local_48 ^ (ulonglong)auStack_98)) {
                    /* WARNING: Subroutine does not return */
    FUN_140086440(local_48 ^ (ulonglong)auStack_98);
  }
  return pbVar11;
}

