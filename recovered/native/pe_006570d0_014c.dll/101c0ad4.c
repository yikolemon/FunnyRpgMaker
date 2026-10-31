/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 101c0ad4 */

undefined1 FUN_101c0ad4(undefined4 *param_1,int param_2,uint *param_3)

{
  undefined1 uVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  int iVar7;
  uint uVar8;
  int iVar9;
  uint local_40;
  int local_3c;
  uint local_38;
  int local_34;
  int local_30;
  int local_2c;
  uint local_28;
  uint local_24;
  uint local_20;
  uint local_1c;
  uint local_18;
  uint local_14;
  
  local_14 = DAT_10388d00 ^ (uint)&local_40;
  if (param_1[0x12] != 0x6f75746c) {
    uVar1 = 1;
    if (param_1[0x12] == 0x53564720) {
      piVar2 = (int *)FUN_101c0dab(*param_1,"ot-svg");
      uVar1 = (*(code *)**(undefined4 **)(*piVar2 + 0x14))(piVar2,param_1,0);
    }
    goto LAB_101c0d30;
  }
  if (param_3 == (uint *)0x0) {
    uVar5 = 0;
    local_38 = 0;
  }
  else {
    uVar5 = *param_3;
    local_38 = param_3[1];
  }
  local_28 = uVar5;
  FUN_101c0df9(param_1 + 0x1b,&local_24);
  local_40 = local_24;
  local_34 = ((int)local_24 >> 6) + ((int)uVar5 >> 6);
  local_30 = ((int)local_1c >> 6) + ((int)uVar5 >> 6);
  local_3c = ((int)local_20 >> 6) + ((int)local_38 >> 6);
  local_2c = ((int)local_18 >> 6) + ((int)local_38 >> 6);
  local_24 = (local_24 & 0x3f) + (local_28 & 0x3f);
  local_1c = (local_1c & 0x3f) + (local_28 & 0x3f);
  local_20 = (local_20 & 0x3f) + (local_38 & 0x3f);
  local_18 = (local_18 & 0x3f) + (local_38 & 0x3f);
  if (param_2 == 4) {
    uVar5 = 6;
LAB_101c0c36:
    FUN_101c0786(&local_24,param_1,param_2);
LAB_101c0c44:
    iVar3 = ((int)local_24 >> 6) + local_34;
    iVar4 = ((int)local_20 >> 6) + local_3c;
    iVar7 = ((int)(local_1c + 0x3f) >> 6) + local_30;
    iVar6 = ((int)(local_18 + 0x3f) >> 6) + local_2c;
    local_40 = uVar5;
  }
  else {
    if (param_2 == 3) {
      uVar5 = 5;
      goto LAB_101c0c36;
    }
    uVar5 = 2;
    if (param_2 != 2) goto LAB_101c0c44;
    iVar6 = (local_24 + 0x1f >> 6) + local_34;
    iVar7 = (local_1c + 0x20 >> 6) + local_30;
    iVar3 = iVar6;
    if (iVar6 == iVar7) {
      if ((int)((local_24 + 0x1f & 0x3f) + (local_1c + 0x20 & 0x3f) + -0x1f) < 0x20) {
        iVar3 = iVar6 + -1;
        iVar7 = iVar6;
      }
      else {
        iVar7 = iVar6 + 1;
      }
    }
    iVar4 = (local_20 + 0x1f >> 6) + local_3c;
    iVar6 = (local_18 + 0x20 >> 6) + local_2c;
    local_40 = 1;
    if (iVar4 == iVar6) {
      if ((int)((local_18 + 0x20 & 0x3f) + (local_20 + 0x1f & 0x3f) + -0x1f) < 0x20) {
        iVar6 = iVar4;
        iVar4 = iVar4 + -1;
      }
      else {
        iVar6 = iVar4 + 1;
      }
    }
  }
  uVar5 = iVar7 - iVar3;
  iVar9 = iVar6 - iVar4;
  uVar1 = true;
  if ((((iVar7 < 0x1000000) && (-0x1000001 < iVar3)) && ((int)uVar5 < 0x10000)) &&
     (((iVar9 < 0x10000 && (-0x1000001 < iVar4)) && (iVar6 < 0x1000000)))) {
    if (param_1[1] == 0) {
      uVar1 = false;
    }
    else {
      iVar7 = *(int *)(param_1[1] + 0x58);
      if ((int)uVar5 <= (int)((uint)*(ushort *)(iVar7 + 0xc) * 10)) {
        uVar1 = (int)((uint)*(ushort *)(iVar7 + 0xe) * 10) < iVar9;
      }
    }
  }
  uVar8 = uVar5;
  if (local_40 == 6) {
    iVar9 = iVar9 * 3;
  }
  else if (local_40 == 5) {
    iVar7 = uVar5 * 3;
    uVar5 = uVar5 * 3;
    uVar8 = iVar7 + 3U & 0xfffffffc;
  }
  else if (local_40 == 1) {
    uVar8 = (int)(uVar5 + 0xf) >> 3 & 0xfffffffe;
  }
  param_1[0x19] = iVar3;
  param_1[0x1a] = iVar6;
  *(char *)((int)param_1 + 0x5e) = (char)local_40;
  *(undefined2 *)(param_1 + 0x17) = 0x100;
  param_1[0x14] = uVar5;
  param_1[0x13] = iVar9;
  param_1[0x15] = uVar8;
LAB_101c0d30:
  if (DAT_10388d00 != (local_14 ^ (uint)&local_40)) {
                    /* WARNING: Subroutine does not return */
    FUN_102283e0();
  }
  return uVar1;
}

