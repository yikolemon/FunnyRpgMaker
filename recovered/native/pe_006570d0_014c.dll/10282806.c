/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 10282806 */

uint FUN_10282806(ushort *param_1,byte *param_2,uint param_3,int param_4)

{
  byte *pbVar1;
  byte bVar2;
  int iVar3;
  void **ppvVar4;
  uint uVar5;
  int iVar6;
  DWORD DVar7;
  uint uVar8;
  undefined8 local_1c;
  byte *local_14;
  void *local_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  iVar3 = param_4;
  uStack_8 = 0xffffffff;
  puStack_c = &DAT_1028a594;
  local_10 = ExceptionList;
  uVar5 = DAT_10388d00 ^ (uint)&stack0xfffffffc;
  uVar8 = 0;
  ppvVar4 = &local_10;
  if (param_1 != (ushort *)0x0) {
    if (param_3 == 0) {
      return 0;
    }
    ExceptionList = &local_10;
    *param_1 = 0;
    ppvVar4 = ExceptionList;
  }
  ExceptionList = ppvVar4;
  if (param_2 == (byte *)0x0) {
    *(undefined1 *)(param_4 + 0x1c) = 1;
    *(undefined4 *)(param_4 + 0x18) = 0x16;
    FUN_10274034(0,0,0,0,0,param_4);
  }
  else {
    if (*(char *)(param_4 + 0x14) == '\0') {
      FUN_1025ec50(uVar5);
    }
    if (*(int *)(*(int *)(iVar3 + 0xc) + 8) == 0xfde9) {
      local_1c = 0;
      uVar5 = FUN_1027855f(param_1,&param_2,param_3,&local_1c,iVar3);
      ExceptionList = local_10;
      return uVar5;
    }
    iVar6 = *(int *)(*(int *)(iVar3 + 0xc) + 0xa8);
    if (param_1 == (ushort *)0x0) {
      if (iVar6 == 0) {
        pbVar1 = param_2 + 1;
        do {
          bVar2 = *param_2;
          param_2 = param_2 + 1;
        } while (bVar2 != 0);
        ExceptionList = local_10;
        return (int)param_2 - (int)pbVar1;
      }
      iVar6 = FUN_102741c1(*(undefined4 *)(*(int *)(iVar3 + 0xc) + 8),9,param_2,0xffffffff,0,0);
      if (iVar6 != 0) goto LAB_102829b9;
      *(undefined1 *)(iVar3 + 0x1c) = 1;
      *(undefined4 *)(iVar3 + 0x18) = 0x2a;
    }
    else {
      if (iVar6 == 0) {
        if (param_3 == 0) {
          ExceptionList = local_10;
          return 0;
        }
        do {
          *param_1 = (ushort)param_2[uVar8];
          if (param_2[uVar8] == 0) {
            ExceptionList = local_10;
            return uVar8;
          }
          uVar8 = uVar8 + 1;
          param_1 = param_1 + 1;
        } while (uVar8 < param_3);
        ExceptionList = local_10;
        return uVar8;
      }
      iVar6 = FUN_102741c1(*(undefined4 *)(*(int *)(iVar3 + 0xc) + 8),9,param_2,0xffffffff,param_1,
                           param_3);
      if (iVar6 != 0) {
LAB_102829b9:
        ExceptionList = local_10;
        return iVar6 - 1;
      }
      DVar7 = GetLastError();
      local_14 = param_2;
      uVar5 = param_3;
      if (DVar7 == 0x7a) {
        while (uVar5 != 0) {
          local_1c = CONCAT44(uVar5 - 1,(undefined4)local_1c);
          if (*local_14 == 0) break;
          if ((*(short *)(**(int **)(iVar3 + 0xc) + (uint)*local_14 * 2) < 0) &&
             (local_14 = local_14 + 1, *local_14 == 0)) goto LAB_10282910;
          local_14 = local_14 + 1;
          uVar5 = uVar5 - 1;
        }
        uVar5 = FUN_102741c1(*(undefined4 *)(*(int *)(iVar3 + 0xc) + 8),1,param_2,
                             (int)local_14 - (int)param_2,param_1,param_3);
        if (uVar5 != 0) {
          ExceptionList = local_10;
          return uVar5;
        }
      }
LAB_10282910:
      *(undefined1 *)(iVar3 + 0x1c) = 1;
      *(undefined4 *)(iVar3 + 0x18) = 0x2a;
      *param_1 = 0;
    }
  }
  ExceptionList = local_10;
  return 0xffffffff;
}

