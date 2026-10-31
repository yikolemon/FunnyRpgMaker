/* Ghidra pseudocode. Image: pe_00d3d4d0_014c.exe Address: 00430013 */

byte * __fastcall FUN_00430013(int param_1,int *param_2,undefined4 param_3,undefined4 *param_4)

{
  int iVar1;
  undefined4 uVar2;
  byte bVar3;
  int iVar4;
  int iVar5;
  int *piVar6;
  byte *pbVar7;
  byte *pbVar8;
  byte *pbVar9;
  int iStack_34;
  int *local_30;
  int iStack_2c;
  int *local_28;
  undefined *local_24;
  int local_20;
  int iStack_1c;
  int iStack_18;
  uint local_14;
  
  local_14 = DAT_0050e8c0 ^ (uint)&iStack_34;
  local_30 = (int *)param_2[9];
  local_20 = *(int *)(*param_2 + 0x10);
  iVar1 = local_30[3];
  local_24 = (&PTR_DAT_004e2570)[local_20];
  local_28 = param_2;
  (**(code **)(*(int *)(local_30[0x66] + 0x38) + 0x48))
            (iVar1,*(undefined2 *)(*local_30 + 0x44),*(undefined2 *)(*local_30 + 0x44));
  piVar6 = local_30;
  pbVar8 = (byte *)(param_1 + -1);
  pbVar9 = pbVar8;
  do {
    bVar3 = pbVar9[1];
    pbVar9 = pbVar9 + 1;
    pbVar8 = pbVar8 + 1;
  } while (bVar3 == 0x20);
  pbVar7 = pbVar9;
  if ((bVar3 & 0xdf) != 0) {
    do {
      iVar5 = 3 - (uint)(bVar3 < 0xf0);
      if (bVar3 < 0xe0) {
        iVar5 = 1;
      }
      if (-1 < (char)bVar3) {
        iVar5 = 0;
      }
      pbVar7 = pbVar7 + iVar5 + 1;
      bVar3 = *pbVar7;
    } while ((bVar3 & 0xdf) != 0);
  }
  iVar5 = (int)pbVar7 - (int)pbVar8;
  iStack_34 = iVar1;
  (**(code **)(*(int *)(local_30[0x66] + 0x38) + 0xc))(param_3);
  iStack_2c = iVar5;
  (**(code **)(*(int *)(piVar6[0x66] + 0x38) + 8))(param_3,pbVar9,iVar5,0,iVar5);
  (**(code **)(*(int *)(piVar6[0x66] + 0x38) + 0x24))(param_3);
  iVar1 = local_20;
  (**(code **)(*(int *)(piVar6[0x66] + 0x38) + 0x80))(iStack_34,param_3,local_24,local_20 != 10);
  if (iVar1 != 10) {
    uVar2 = *(undefined4 *)(local_28[9] + 0x10);
    (**(code **)(*(int *)(piVar6[0x66] + 0x38) + 0xc))(uVar2);
    (**(code **)(*(int *)(piVar6[0x66] + 0x38) + 8))(uVar2,pbVar9,iStack_2c,0,iStack_2c);
    (**(code **)(*(int *)(piVar6[0x66] + 0x38) + 0x24))(uVar2);
    (**(code **)(*(int *)(piVar6[0x66] + 0x38) + 0x80))(iStack_34,uVar2,0,0);
    iVar1 = (**(code **)(*(int *)(piVar6[0x66] + 0x38) + 0x18))(param_3,&iStack_18);
    iVar5 = (**(code **)(*(int *)(piVar6[0x66] + 0x38) + 0x18))(uVar2,&iStack_1c);
    piVar6 = local_30;
    if (iStack_18 == iStack_1c) {
      if (iStack_18 != 0) {
        iVar4 = 0;
        do {
          if (*(int *)(iVar1 + iVar4) != *(int *)(iVar5 + iVar4)) {
            if (iStack_18 != 0) goto LAB_004301e6;
            break;
          }
          iVar4 = iVar4 + 0x14;
          iStack_18 = iStack_18 + -1;
        } while (iStack_18 != 0);
      }
      (**(code **)(*(int *)(local_30[0x66] + 0x38) + 0xc))(param_3);
    }
  }
LAB_004301e6:
  uVar2 = (**(code **)(*(int *)(piVar6[0x66] + 0x38) + 0x20))(param_3);
  *param_4 = uVar2;
  if (DAT_0050e8c0 != (local_14 ^ (uint)&iStack_34)) {
                    /* WARNING: Subroutine does not return */
    FUN_0047f2c0(local_14 ^ (uint)&iStack_34);
  }
  return pbVar7;
}

