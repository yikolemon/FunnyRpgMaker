/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 180134936 */

undefined4 FUN_180134936(undefined4 param_1,undefined8 *param_2,longlong param_3)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  char cVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  int iVar7;
  undefined1 auStack_b8 [32];
  undefined4 local_98;
  undefined4 local_90;
  undefined4 local_84;
  longlong local_80;
  byte local_72;
  char local_71;
  undefined8 local_70;
  undefined8 local_68;
  ulonglong local_60;
  
  lVar2 = DAT_180419160;
  local_60 = DAT_180402640 ^ (ulonglong)auStack_b8;
  lVar1 = *(longlong *)(DAT_180419160 + 0x1608);
  local_70 = *param_2;
  local_68 = CONCAT44(*(float *)(DAT_180419160 + 0x1320) + (float)((ulonglong)local_70 >> 0x20),
                      *(float *)(DAT_180419160 + 0x1320) + (float)local_70);
  cVar4 = FUN_1801116b6(&local_70,param_1,0,0);
  local_98 = 0;
  uVar5 = FUN_18013386b(&local_70,param_1,&local_71,&local_72);
  if (cVar4 != '\0') {
    iVar7 = 0x16;
    if (local_71 != '\0') {
      iVar7 = local_72 + 0x17;
    }
    local_80 = param_3;
    uVar6 = FUN_18010129b(iVar7);
    local_84 = FUN_18010129b(0);
    if (local_72 != 0 || local_71 != '\0') {
      local_90 = 0;
      local_98 = 0;
      FUN_180192d20(*(undefined8 *)(lVar1 + 800),&local_70,&local_68,uVar6);
    }
    FUN_180102b0e(&local_70,param_1,2);
    lVar3 = local_80;
    if (local_80 == 0) {
      local_98 = 0x3f800000;
      FUN_18019b80a(*(undefined8 *)(lVar1 + 800),local_70,local_84,
                    (*(byte *)(lVar1 + 0x10c) ^ 1) * 2 + 1);
    }
    else {
      FUN_18019bd9b(*(undefined8 *)(lVar1 + 800),local_70,*(undefined4 *)(lVar2 + 0x1320),local_84);
    }
    cVar4 = FUN_180110b56();
    if (cVar4 != '\0') {
      cVar4 = FUN_1801083e1(0);
      if (cVar4 != '\0') {
        FUN_1801082f9(lVar1,lVar3,1);
      }
    }
  }
  if (DAT_180402640 == (local_60 ^ (ulonglong)auStack_b8)) {
    return uVar5;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1802396d0(local_60 ^ (ulonglong)auStack_b8);
}

