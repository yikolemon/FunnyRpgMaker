/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 10128e66 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10128e66(void)

{
  int iVar1;
  char cVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  float fVar7;
  float fVar8;
  undefined8 local_24;
  undefined8 local_1c;
  uint local_14;
  
  iVar1 = DAT_1039d74c;
  local_14 = DAT_10388d00 ^ (uint)&local_24;
  if (DAT_102b9110 < *(float *)(DAT_1039d74c + 0x2228) ||
      DAT_102b9110 == *(float *)(DAT_1039d74c + 0x2228)) {
    iVar3 = FUN_1010ad36();
    local_1c = DAT_102b8950;
    local_24 = CONCAT44((float)((ulonglong)*(undefined8 *)(iVar3 + 0x10) >> 0x20) * _UNK_102b9124,
                        (float)*(undefined8 *)(iVar3 + 0x10) * _DAT_102b9120);
    FUN_10111da2(&local_24,&local_1c,0,0);
    local_1c = CONCAT44(DAT_102b89c0._4_4_,(float)DAT_102b89c0);
    local_24 = CONCAT44((float)((ulonglong)*(undefined8 *)(iVar3 + 0x10) >> 0x20) *
                        DAT_102b89c0._4_4_ + (float)((ulonglong)*(undefined8 *)(iVar3 + 8) >> 0x20),
                        (float)*(undefined8 *)(iVar3 + 0x10) * (float)DAT_102b89c0 +
                        (float)*(undefined8 *)(iVar3 + 8));
    FUN_10111d56(&local_24,1,&local_1c);
    fVar7 = (float)*(undefined8 *)(iVar1 + 0xcd4);
    fVar8 = (float)((ulonglong)*(undefined8 *)(iVar1 + 0xcd4) >> 0x20);
    local_1c = CONCAT44(fVar8 + fVar8,fVar7 + fVar7);
    FUN_100fd3bc(2,&local_1c);
    FUN_10107d2b("##NavWindowingOverlay",0,0x31347);
    *(undefined4 *)(iVar1 + 0x2224) = *(undefined4 *)(iVar1 + 0x14cc);
    if (*(char *)(iVar1 + 0x20) != '\0') {
      FUN_10132656(iVar1 + 0x20);
    }
    if (0 < *(int *)(iVar1 + 0x1490)) {
      uVar6 = *(int *)(iVar1 + 0x1490) + 1;
      do {
        iVar3 = *(int *)(*(int *)(iVar1 + 0x1498) + -8 + uVar6 * 4);
        cVar2 = FUN_10117992(iVar3);
        if (cVar2 != '\0') {
          iVar5 = *(int *)(iVar3 + 4);
          iVar4 = FUN_100fd57d(iVar5,0);
          if (iVar5 == iVar4) {
            iVar5 = FUN_10129176();
          }
          local_1c = 0;
          FUN_10133727(iVar5,*(int *)(iVar1 + 0x221c) == iVar3,0,&local_1c);
        }
        uVar6 = uVar6 - 1;
      } while (1 < uVar6);
    }
    FUN_1010ad44();
    FUN_100fd4c4(1);
  }
  if (DAT_10388d00 == (local_14 ^ (uint)&local_24)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_102283e0();
}

