/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 1400ac58d */

void FUN_1400ac58d(undefined8 param_1,undefined8 param_2)

{
  float fVar1;
  float fVar2;
  longlong lVar3;
  longlong lVar4;
  char cVar5;
  undefined4 uVar6;
  float fVar7;
  undefined1 auStack_b8 [32];
  undefined4 local_98;
  float local_90;
  undefined8 local_8c;
  float local_84;
  float local_80;
  float local_7c;
  float local_78;
  float local_74;
  undefined8 local_70;
  undefined8 local_68;
  ulonglong local_60;
  
  lVar4 = DAT_140f2a910;
  local_60 = DAT_140f17b40 ^ (ulonglong)auStack_b8;
  *(undefined1 *)(*(longlong *)(DAT_140f2a910 + 0x1608) + 0x10b) = 1;
  lVar3 = *(longlong *)(lVar4 + 0x1608);
  if (*(char *)(lVar3 + 0x10e) == '\0') {
    FUN_140077ef6(&local_68,&local_70,param_1,param_2);
    local_98 = 0xbf800000;
    FUN_14007b686(&local_78,local_68,local_70,0);
    local_80 = 0.0;
    if (0.0 < local_78) {
      local_80 = *(float *)(lVar4 + 0xdf4) + *(float *)(lVar4 + 0xdf4) + local_78;
    }
    local_80 = *(float *)(lVar4 + 0x1320) + local_80;
    local_7c = local_74;
    fVar1 = *(float *)(lVar3 + 0x158);
    fVar7 = *(float *)(lVar3 + 0x15c);
    fVar2 = *(float *)(lVar3 + 400);
    FUN_14008a82c(&local_80,0);
    fVar7 = fVar7 + fVar2;
    local_84 = local_7c + fVar7;
    local_8c = CONCAT44(local_80 + fVar1,fVar7);
    local_90 = fVar1;
    cVar5 = FUN_14008a9ce(&local_90,0,0,0);
    if (cVar5 != '\0') {
      uVar6 = FUN_14007a557(0,DAT_1401c86c8);
      fVar7 = *(float *)(lVar4 + 0x1320) * DAT_1401c86a0;
      FUN_1400e6eaa(*(undefined8 *)(lVar3 + 800),
                    CONCAT44(fVar7 + (float)local_8c,*(float *)(lVar4 + 0xdf4) + fVar7 + local_90),
                    uVar6);
      FUN_14007b084(CONCAT44((float)local_8c + 0.0,
                             *(float *)(lVar4 + 0xdf4) + *(float *)(lVar4 + 0xdf4) +
                             *(float *)(lVar4 + 0x1320) + local_90),local_68,local_70,0);
    }
  }
  if (DAT_140f17b40 == (local_60 ^ (ulonglong)auStack_b8)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_140188a00(local_60 ^ (ulonglong)auStack_b8);
}

