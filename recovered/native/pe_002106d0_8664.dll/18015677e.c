/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 18015677e */

ulonglong FUN_18015677e(undefined8 param_1,float param_2,float param_3,uint *param_4)

{
  char cVar1;
  uint uVar2;
  int iVar3;
  ulonglong uVar4;
  uint uVar5;
  uint uVar6;
  float fVar7;
  float fVar8;
  undefined1 auStack_a8 [32];
  float local_88;
  float local_84;
  float local_80;
  float local_7c;
  float local_78;
  int local_74;
  ulonglong local_70;
  
  local_70 = DAT_180402640 ^ (ulonglong)auStack_a8;
  uVar2 = FUN_180155f5d();
  uVar4 = (ulonglong)uVar2;
  *param_4 = 0;
  if (0 < (int)uVar2) {
    fVar8 = 0.0;
    uVar5 = 0;
    do {
      FUN_180155cce(&local_88,param_1,uVar5);
      if (local_74 < 1) goto LAB_180156825;
      if ((uVar5 == 0) && (param_3 < local_7c + fVar8)) {
        uVar4 = 0;
        goto LAB_180156825;
      }
      if (param_3 < local_78 + fVar8) {
        if (param_2 < local_88) goto LAB_180156867;
        if (local_84 <= param_2) goto LAB_1801568ad;
        iVar3 = 0;
        fVar8 = local_88;
        goto LAB_18015687c;
      }
      uVar5 = uVar5 + local_74;
      fVar8 = fVar8 + local_80;
    } while ((int)uVar5 < (int)uVar2);
  }
  *param_4 = 1;
  goto LAB_180156825;
LAB_180156867:
  uVar4 = (ulonglong)uVar5;
  goto LAB_180156825;
  while( true ) {
    iVar3 = FUN_180155a37(param_1,iVar3 + uVar5);
    iVar3 = iVar3 - uVar5;
    fVar8 = fVar8 + fVar7;
    if (local_74 <= iVar3) break;
LAB_18015687c:
    fVar7 = (float)FUN_180155d79(param_1,uVar5,iVar3);
    if (param_2 < fVar8 + fVar7) {
      *param_4 = (uint)(iVar3 != 0);
      uVar5 = uVar5 + iVar3;
      if (param_2 < fVar8 + fVar7 * DAT_1802dbb2c) goto LAB_180156867;
      if (DAT_180402640 == (local_70 ^ (ulonglong)auStack_a8)) {
        uVar4 = FUN_180155a37(param_1,uVar5);
        return uVar4;
      }
      goto LAB_180156931;
    }
  }
LAB_1801568ad:
  *param_4 = 1;
  uVar6 = (uVar5 + local_74) - 1;
  cVar1 = FUN_1801476cb(param_1,uVar6);
  uVar2 = local_74 + uVar5;
  if (cVar1 == '\n') {
    uVar2 = uVar6;
  }
  uVar4 = (ulonglong)uVar2;
LAB_180156825:
  if (DAT_180402640 == (local_70 ^ (ulonglong)auStack_a8)) {
    return uVar4;
  }
LAB_180156931:
                    /* WARNING: Subroutine does not return */
  FUN_1802396d0(local_70 ^ (ulonglong)auStack_a8);
}

