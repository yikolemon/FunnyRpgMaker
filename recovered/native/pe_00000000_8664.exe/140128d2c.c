/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 140128d2c */

int FUN_140128d2c(undefined8 *param_1,int param_2,int param_3)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  undefined8 uVar4;
  longlong lVar5;
  undefined8 uVar6;
  uint uVar7;
  uint uVar8;
  undefined1 auStack_88 [32];
  undefined8 local_68;
  int *local_60;
  int local_4c;
  ulonglong local_48;
  
  local_48 = DAT_140f17b40 ^ (ulonglong)auStack_88;
  uVar6 = *param_1;
  local_4c = FUN_140128b74();
  iVar2 = local_4c;
  if (local_4c == 0) {
    uVar8 = param_2 + (uint)*(ushort *)((longlong)param_1 + 0x1a) +
            (uint)*(ushort *)((longlong)param_1 + 0x62);
    uVar3 = *(uint *)(param_1 + 1);
    if (uVar3 < uVar8) {
      iVar2 = 10;
      if (uVar8 < 0x10000) {
        uVar1 = (uVar3 >> 1) + uVar3;
        if (uVar1 < uVar8) {
          uVar1 = uVar8;
        }
        uVar7 = 0xffff;
        if (uVar1 + 7 < 0x10000) {
          uVar7 = uVar1 + 7 & 0xfffffff8;
        }
        local_68 = param_1[4];
        local_60 = &local_4c;
        uVar4 = FUN_140128c13(uVar6,8,uVar3,uVar7);
        param_1[4] = uVar4;
        iVar2 = local_4c;
        if (local_4c == 0) {
          local_68 = param_1[5];
          local_60 = &local_4c;
          uVar4 = FUN_140128c13(uVar6,1,uVar3,uVar7);
          param_1[5] = uVar4;
          iVar2 = local_4c;
          if (local_4c == 0) {
            if (*(char *)((longlong)param_1 + 0x14) != '\0') {
              local_68 = param_1[8];
              local_60 = &local_4c;
              lVar5 = FUN_140128c13(uVar6,8,uVar3 * 2,uVar7 * 2);
              param_1[8] = lVar5;
              iVar2 = local_4c;
              if (local_4c != 0) goto LAB_140128d66;
              FUN_1401c5180(lVar5 + (ulonglong)uVar7 * 8,lVar5 + (ulonglong)uVar3 * 8,
                            (ulonglong)uVar3 * 8);
              param_1[9] = (ulonglong)uVar7 * 8 + param_1[8];
            }
            *(uint *)(param_1 + 1) = uVar7;
            goto LAB_140128eb2;
          }
        }
      }
    }
    else {
LAB_140128eb2:
      iVar2 = FUN_140128b74(param_1);
      if (iVar2 == 0) {
        uVar1 = *(uint *)((longlong)param_1 + 0xc);
        uVar7 = param_3 + (uint)*(ushort *)(param_1 + 3) + (uint)*(ushort *)(param_1 + 0xc);
        if (uVar7 <= uVar1) {
          iVar2 = 0;
          if (uVar8 <= uVar3) goto LAB_140128d6e;
LAB_140128f4f:
          FUN_140128cbb(param_1);
          iVar2 = 0;
          goto LAB_140128d6e;
        }
        iVar2 = 10;
        if (uVar7 < 0x10000) {
          uVar3 = (uVar1 >> 1) + uVar1;
          if (uVar3 < uVar7) {
            uVar3 = uVar7;
          }
          uVar8 = 0xffff;
          if (uVar3 + 3 < 0x10000) {
            uVar8 = uVar3 + 3 & 0xfffffffc;
          }
          local_68 = param_1[6];
          local_60 = &local_4c;
          uVar6 = FUN_140128c13(uVar6,2,uVar1,uVar8);
          param_1[6] = uVar6;
          iVar2 = local_4c;
          if (local_4c == 0) {
            *(uint *)((longlong)param_1 + 0xc) = uVar8;
            goto LAB_140128f4f;
          }
        }
      }
    }
  }
LAB_140128d66:
  FUN_140128abc(param_1);
LAB_140128d6e:
  if (DAT_140f17b40 != (local_48 ^ (ulonglong)auStack_88)) {
                    /* WARNING: Subroutine does not return */
    FUN_140188a00(local_48 ^ (ulonglong)auStack_88);
  }
  return iVar2;
}

