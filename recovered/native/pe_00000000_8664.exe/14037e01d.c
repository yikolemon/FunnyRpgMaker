/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 14037e01d */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

byte FUN_14037e01d(undefined8 param_1,char param_2,uint param_3)

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
  
  lVar6 = DAT_14062a630;
  local_90 = ram0x000140613b10 ^ (ulonglong)auStack_c8;
  lVar5 = *(longlong *)(DAT_14062a630 + 0x1608);
  local_a8 = -1.0;
  bVar10 = 1;
  FUN_14031389a(&local_98,param_1,0,1);
  local_a8 = (float)(int)(*(float *)(lVar6 + 0x1320) * DAT_1404efdd4);
  fVar11 = (float)FUN_140362110(lVar5 + 0x1c4,0,local_98,0);
  FUN_140322539(&local_a0);
  fVar12 = (float)FUN_140313933(0,local_a0 - fVar11);
  fVar1 = *(float *)(lVar5 + 0x158);
  fVar2 = *(float *)(lVar5 + 0x15c);
  fVar3 = *(float *)(lVar5 + 400);
  iVar8 = FUN_14032984d(param_1);
  iVar4 = *(int *)(lVar6 + 0x167c);
  if (iVar4 == iVar8) {
    bVar10 = *(byte *)(lVar6 + 0x168c) ^ 1;
  }
  FUN_140327a50(param_3 ^ 1);
  local_9c = local_94;
  local_a0 = fVar11;
  bVar7 = FUN_14034a6c6(param_1,0,(uint)(iVar4 == iVar8) << 5 | 0x1800000);
  if ((param_2 != '\0') && ((*(uint *)(lVar6 + 0x1fe8) & 0x100) != 0)) {
    fVar11 = *(float *)(lVar6 + 0x1320) * _DAT_1404f062c;
    uVar9 = FUN_14031276b(0,DAT_1404bda40);
    FUN_1403ace93(*(undefined8 *)(lVar5 + 800),
                  CONCAT44(fVar2 + fVar3 +
                           DAT_1404f0630 * *(float *)(lVar6 + 0x1320) * DAT_1404ecffc,
                           fVar1 + *(float *)(lVar6 + 0x1320) * DAT_1404ccda8 +
                                   fVar12 + (float)*(ushort *)(lVar5 + 0x1d4)),uVar9,fVar11);
  }
  FUN_140327b46();
  if (ram0x000140613b10 == (local_90 ^ (ulonglong)auStack_c8)) {
    return bVar7 & bVar10;
  }
                    /* WARNING: Subroutine does not return */
  FUN_14044aba0(local_90 ^ (ulonglong)auStack_c8);
}

