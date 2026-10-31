/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 1400ad866 */

undefined4 FUN_1400ad866(undefined4 param_1,undefined8 *param_2,longlong param_3)

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
  
  lVar2 = DAT_140f2a910;
  local_60 = DAT_140f17b40 ^ (ulonglong)auStack_b8;
  lVar1 = *(longlong *)(DAT_140f2a910 + 0x1608);
  local_70 = *param_2;
  local_68 = CONCAT44(*(float *)(DAT_140f2a910 + 0x1320) + (float)((ulonglong)local_70 >> 0x20),
                      *(float *)(DAT_140f2a910 + 0x1320) + (float)local_70);
  cVar4 = FUN_14008a9ce(&local_70,param_1,0,0);
  local_98 = 0;
  uVar5 = FUN_1400ac79b(&local_70,param_1,&local_71,&local_72);
  if (cVar4 != '\0') {
    iVar7 = 0x16;
    if (local_71 != '\0') {
      iVar7 = local_72 + 0x17;
    }
    local_80 = param_3;
    uVar6 = FUN_14007a557(iVar7);
    local_84 = FUN_14007a557(0);
    if (local_72 != 0 || local_71 != '\0') {
      local_90 = 0;
      local_98 = 0;
      FUN_1400de294(*(undefined8 *)(lVar1 + 800),&local_70,&local_68,uVar6);
    }
    FUN_14007bdca(&local_70,param_1,2);
    lVar3 = local_80;
    if (local_80 == 0) {
      local_98 = 0x3f800000;
      FUN_1400e6d7e(*(undefined8 *)(lVar1 + 800),local_70,local_84,
                    (*(byte *)(lVar1 + 0x10c) ^ 1) * 2 + 1);
    }
    else {
      FUN_1400e730f(*(undefined8 *)(lVar1 + 800),local_70,*(undefined4 *)(lVar2 + 0x1320),local_84);
    }
    cVar4 = FUN_140089e6e();
    if (cVar4 != '\0') {
      cVar4 = FUN_1400816f9(0);
      if (cVar4 != '\0') {
        FUN_140081611(lVar1,lVar3,1);
      }
    }
  }
  if (DAT_140f17b40 == (local_60 ^ (ulonglong)auStack_b8)) {
    return uVar5;
  }
                    /* WARNING: Subroutine does not return */
  FUN_140188a00(local_60 ^ (ulonglong)auStack_b8);
}

