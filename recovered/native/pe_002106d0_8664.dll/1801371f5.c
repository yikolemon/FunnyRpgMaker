/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 1801371f5 */

void FUN_1801371f5(void)

{
  longlong lVar1;
  longlong lVar2;
  char cVar3;
  undefined4 uVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  undefined1 auStack_68 [32];
  undefined8 local_48;
  undefined8 local_40;
  undefined8 local_38;
  ulonglong local_30;
  
  lVar2 = DAT_180419160;
  local_30 = DAT_180402640 ^ (ulonglong)auStack_68;
  *(undefined1 *)(*(longlong *)(DAT_180419160 + 0x1608) + 0x10b) = 1;
  lVar1 = *(longlong *)(lVar2 + 0x1608);
  if (*(char *)(lVar1 + 0x10e) == '\0') {
    FUN_1800eebe2(*(undefined4 *)(lVar1 + 0x184),
                  *(float *)(lVar2 + 0xdf8) + *(float *)(lVar2 + 0xdf8) + *(float *)(lVar2 + 0x1320)
                 );
    fVar5 = (float)FUN_180102463();
    local_48 = *(undefined8 *)(lVar1 + 0x158);
    fVar6 = *(float *)(lVar2 + 0x1320) + (float)local_48;
    fVar8 = (float)((ulonglong)local_48 >> 0x20);
    fVar7 = fVar5 + fVar8;
    local_40 = CONCAT44(fVar7,fVar6);
    local_38 = CONCAT44(fVar7 - fVar8,fVar6 - (float)local_48);
    FUN_180111514();
    cVar3 = FUN_1801116b6(&local_48,0,0,0);
    if (cVar3 != '\0') {
      uVar4 = FUN_18010129b(0);
      FUN_18019b936(*(undefined8 *)(lVar1 + 800),
                    CONCAT44(fVar5 * DAT_1802dbb2c + local_48._4_4_,
                             DAT_1802dbb2c * *(float *)(lVar2 + 0x1320) + *(float *)(lVar2 + 0xdf4)
                             + (float)local_48),uVar4);
    }
    FUN_180119893(0,*(float *)(lVar2 + 0xdf4) + *(float *)(lVar2 + 0xdf4));
  }
  if (DAT_180402640 == (local_30 ^ (ulonglong)auStack_68)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1802396d0(local_30 ^ (ulonglong)auStack_68);
}

