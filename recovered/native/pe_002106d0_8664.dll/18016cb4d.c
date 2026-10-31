/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 18016cb4d */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

byte FUN_18016cb4d(undefined8 param_1,char param_2,uint param_3)

{
  float fVar1;
  float fVar2;
  float fVar3;
  int iVar4;
  longlong lVar5;
  longlong lVar6;
  byte bVar7;
  int iVar8;
  undefined4 uVar9;
  byte bVar10;
  float fVar11;
  float fVar12;
  undefined1 auStack_c8 [32];
  float local_a8;
  float local_a0;
  undefined4 local_9c;
  undefined4 local_98;
  undefined4 local_94;
  ulonglong local_90;
  
  lVar6 = DAT_180419160;
  local_90 = DAT_180402640 ^ (ulonglong)auStack_c8;
  lVar5 = *(longlong *)(DAT_180419160 + 0x1608);
  local_a8 = -1.0;
  bVar10 = 1;
  FUN_1801023ca(&local_98,param_1,0,1);
  local_a8 = (float)(int)(*(float *)(lVar6 + 0x1320) * DAT_1802de904);
  fVar11 = (float)FUN_180150c40(lVar5 + 0x1c4,0,local_98,0);
  FUN_180111069(&local_a0);
  fVar12 = (float)FUN_180102463(0,local_a0 - fVar11);
  fVar1 = *(float *)(lVar5 + 0x158);
  fVar2 = *(float *)(lVar5 + 0x15c);
  fVar3 = *(float *)(lVar5 + 400);
  iVar8 = FUN_18011837d(param_1);
  iVar4 = *(int *)(lVar6 + 0x167c);
  if (iVar4 == iVar8) {
    bVar10 = *(byte *)(lVar6 + 0x168c) ^ 1;
  }
  FUN_180116580(param_3 ^ 1);
  local_9c = local_94;
  local_a0 = fVar11;
  bVar7 = FUN_1801391f6(param_1,0,(uint)(iVar4 == iVar8) << 5 | 0x1800000);
  if ((param_2 != '\0') && ((*(uint *)(lVar6 + 0x1fe8) & 0x100) != 0)) {
    fVar11 = *(float *)(lVar6 + 0x1320) * _DAT_1802df15c;
    uVar9 = FUN_18010129b(0,DAT_1802ac570);
    FUN_18019b9c3(*(undefined8 *)(lVar5 + 800),
                  CONCAT44(fVar2 + fVar3 +
                           DAT_1802df160 * *(float *)(lVar6 + 0x1320) * DAT_1802dbb2c,
                           fVar1 + *(float *)(lVar6 + 0x1320) * DAT_1802bb8d8 +
                                   fVar12 + (float)*(ushort *)(lVar5 + 0x1d4)),uVar9,fVar11);
  }
  FUN_180116676();
  if (DAT_180402640 == (local_90 ^ (ulonglong)auStack_c8)) {
    return bVar7 & bVar10;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1802396d0(local_90 ^ (ulonglong)auStack_c8);
}

