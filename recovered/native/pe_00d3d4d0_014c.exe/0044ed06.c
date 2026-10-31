/* Ghidra pseudocode. Image: pe_00d3d4d0_014c.exe Address: 0044ed06 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int __fastcall
FUN_0044ed06(undefined4 *param_1,int *param_2,uint param_3,int *param_4,int param_5,int param_6,
            undefined4 *param_7,int param_8)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  int *piVar4;
  int iVar5;
  undefined4 uVar6;
  byte *pbVar7;
  int iVar8;
  uint *puVar9;
  undefined4 *puVar10;
  uint uVar11;
  undefined1 auStack_54 [3];
  char local_51;
  undefined4 *local_50;
  int local_4c;
  int *local_48;
  uint local_44;
  byte *local_40;
  undefined4 local_3c [10];
  uint local_14;
  
  local_14 = DAT_0050e8c0 ^ (uint)auStack_54;
  local_40 = (byte *)0x0;
  local_51 = (param_6 - 0x3000U & 0xffffefff) == 0;
  uVar11 = 0x60;
  if ((bool)local_51) {
    uVar11 = 0x201;
  }
  iVar1 = *(int *)(param_8 + 0x230);
  local_48 = param_2;
  iVar5 = FUN_0044c397(local_3c,param_6,param_1,(int *)*param_7,uVar11,0,0);
  if (iVar5 != 0) goto LAB_0044ed6c;
  local_4c = iVar1;
  _memset(param_1 + 6,0,0x9c);
  piVar4 = local_48;
  param_1[8] = 0x32ff9c;
  param_1[10] = 2;
  param_1[0xb] = 0x10000;
  param_1[0xe] = 0x10000;
  param_1[0x26] = 0x2210;
  uVar3 = _UNK_004d743c;
  uVar2 = _UNK_004d7438;
  uVar6 = _UNK_004d7434;
  *param_1 = _DAT_004d7430;
  param_1[1] = uVar6;
  param_1[2] = uVar2;
  param_1[3] = uVar3;
  uVar6 = 0x30;
  if (local_51 != '\0') {
    uVar6 = 0x201;
  }
  param_1[4] = 0xffff;
  param_1[5] = 0xffff;
  param_1[0x1f] = 0xffff;
  param_1[0x20] = 0xffff;
  param_1[0x21] = 0xffff;
  param_1[0x2a] = 0xffff;
  param_1[0x2d] = uVar6;
  local_50 = param_1;
  if (local_48[3] == 0) {
    iVar5 = FUN_00420696((int)param_4,local_48[5]);
    if ((iVar5 != 0) || (iVar5 = FUN_00420bb8(param_4,piVar4[6],(int *)&local_40), iVar5 != 0))
    goto LAB_0044ed6c;
    puVar9 = (uint *)(piVar4 + 6);
LAB_0044ee41:
    pbVar7 = local_40 + *puVar9;
    if (local_40 == (byte *)0x0) {
      pbVar7 = (byte *)0x0;
    }
    iVar5 = FUN_0044c427((int)local_3c,local_40,pbVar7);
  }
  else {
    puVar9 = &local_44;
    iVar5 = FUN_0044dedf(local_48,param_3,(int *)&local_40,puVar9);
    if (iVar5 == 0) goto LAB_0044ee41;
  }
  if (piVar4[3] == 0) {
    FUN_00420cb6((int)param_4,(int *)&local_40);
  }
  else {
    FUN_0044decc(piVar4,(int *)&local_40);
  }
  iVar1 = local_4c;
  puVar10 = local_50;
  if (iVar5 != 0) goto LAB_0044ed6c;
  if (local_50[0x20] == 0xffff) {
    iVar5 = FUN_0044bebf(param_7,(int)local_50,0,0);
    if (iVar5 != 0) goto LAB_0044ed6c;
    if ((param_6 != 0x3000) && (param_6 != 0x4000)) {
      iVar5 = *(int *)(*(int *)(param_8 + 0x80) + 0x3c);
      if (iVar5 == -1) {
        iVar5 = *(int *)(param_8 + 0x60);
        iVar8 = *(int *)(iVar5 + 0x44);
        local_50[0xa1] = iVar8;
        if (iVar8 != 0) {
          do {
            iVar8 = (**(code **)(iVar1 + 0x14))(iVar8);
            *(int *)(iVar5 + 0x44) = iVar8;
          } while (iVar8 < 0);
        }
      }
      else {
        local_50[0xa1] = iVar5;
        iVar5 = *(int *)(*(int *)(param_8 + 0x80) + 0x3c);
        if (iVar5 != 0) {
          do {
            uVar6 = (**(code **)(iVar1 + 0x14))(iVar5);
            *(undefined4 *)(*(int *)(param_8 + 0x80) + 0x3c) = uVar6;
            iVar5 = *(int *)(*(int *)(param_8 + 0x80) + 0x3c);
          } while (iVar5 < 0);
        }
      }
      puVar10 = local_50;
      if (local_50[0xa1] == 0) {
        local_50[0xa1] = local_50[0x84];
      }
    }
    if (puVar10[0x85] != 0) {
      iVar5 = FUN_00420696((int)param_4,puVar10[0x85] + param_5 + puVar10[0x1c]);
      if (iVar5 == 0) {
        iVar5 = FUN_0044e9ea(puVar10 + 0x97,param_4,'\x01',local_51);
        if (iVar5 == 0) {
          iVar5 = FUN_0044eb50(puVar10 + 0x97,puVar10 + 0xa0,(int *)0x0,(size_t *)0x0);
        }
      }
      goto LAB_0044ed6c;
    }
  }
  iVar5 = 0;
LAB_0044ed6c:
  FUN_0044c6ed(local_3c);
  if (DAT_0050e8c0 != (local_14 ^ (uint)auStack_54)) {
                    /* WARNING: Subroutine does not return */
    FUN_0047f2c0(local_14 ^ (uint)auStack_54);
  }
  return iVar5;
}

