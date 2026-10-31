/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 1400b0125 */

void FUN_1400b0125(void)

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
  
  lVar2 = DAT_140f2a910;
  local_30 = DAT_140f17b40 ^ (ulonglong)auStack_68;
  *(undefined1 *)(*(longlong *)(DAT_140f2a910 + 0x1608) + 0x10b) = 1;
  lVar1 = *(longlong *)(lVar2 + 0x1608);
  if (*(char *)(lVar1 + 0x10e) == '\0') {
    FUN_14004863e(*(undefined4 *)(lVar1 + 0x184),
                  *(float *)(lVar2 + 0xdf8) + *(float *)(lVar2 + 0xdf8) + *(float *)(lVar2 + 0x1320)
                 );
    fVar5 = (float)FUN_14007b71f();
    local_48 = *(undefined8 *)(lVar1 + 0x158);
    fVar6 = *(float *)(lVar2 + 0x1320) + (float)local_48;
    fVar8 = (float)((ulonglong)local_48 >> 0x20);
    fVar7 = fVar5 + fVar8;
    local_40 = CONCAT44(fVar7,fVar6);
    local_38 = CONCAT44(fVar7 - fVar8,fVar6 - (float)local_48);
    FUN_14008a82c();
    cVar3 = FUN_14008a9ce(&local_48,0,0,0);
    if (cVar3 != '\0') {
      uVar4 = FUN_14007a557(0);
      FUN_1400e6eaa(*(undefined8 *)(lVar1 + 800),
                    CONCAT44(fVar5 * DAT_1401c86a0 + local_48._4_4_,
                             DAT_1401c86a0 * *(float *)(lVar2 + 0x1320) + *(float *)(lVar2 + 0xdf4)
                             + (float)local_48),uVar4);
    }
    FUN_140092bab(0,*(float *)(lVar2 + 0xdf4) + *(float *)(lVar2 + 0xdf4));
  }
  if (DAT_140f17b40 == (local_30 ^ (ulonglong)auStack_68)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_140188a00(local_30 ^ (ulonglong)auStack_68);
}

