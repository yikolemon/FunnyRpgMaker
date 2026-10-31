/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 18012eea7 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18012eea7(void)

{
  longlong lVar1;
  char cVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  ulonglong uVar6;
  float fVar7;
  float fVar8;
  undefined1 auStack_68 [40];
  undefined8 local_40;
  undefined8 local_38;
  ulonglong local_30;
  
  lVar1 = DAT_180419160;
  local_30 = DAT_180402640 ^ (ulonglong)auStack_68;
  if (DAT_1802deb10 < *(float *)(DAT_180419160 + 0x2400) ||
      DAT_1802deb10 == *(float *)(DAT_180419160 + 0x2400)) {
    lVar3 = FUN_18010f8ee();
    local_38 = DAT_1802de500;
    local_40 = CONCAT44((float)((ulonglong)*(undefined8 *)(lVar3 + 0x10) >> 0x20) * _UNK_1802deb24,
                        (float)*(undefined8 *)(lVar3 + 0x10) * _DAT_1802deb20);
    FUN_180116ac1(&local_40,&local_38,0,0);
    local_38 = DAT_1802de570;
    local_40 = CONCAT44((float)((ulonglong)*(undefined8 *)(lVar3 + 0x10) >> 0x20) *
                        DAT_1802de570._4_4_ + (float)((ulonglong)*(undefined8 *)(lVar3 + 8) >> 0x20)
                        ,(float)*(undefined8 *)(lVar3 + 0x10) * (float)DAT_1802de570 +
                         (float)*(undefined8 *)(lVar3 + 8));
    FUN_180116a8b(&local_40,1,&local_38);
    fVar7 = (float)*(undefined8 *)(lVar1 + 0xdbc);
    fVar8 = (float)((ulonglong)*(undefined8 *)(lVar1 + 0xdbc) >> 0x20);
    local_38 = CONCAT44(fVar8 + fVar8,fVar7 + fVar7);
    FUN_180101bbb(2,&local_38);
    FUN_18010ca66("##NavWindowingOverlay",0,0x31347);
    *(undefined8 *)(lVar1 + 0x23f8) = *(undefined8 *)(lVar1 + 0x1608);
    if (*(char *)(lVar1 + 0x20) != '\0') {
      FUN_1801380f1(lVar1 + 0x20);
    }
    if (0 < (longlong)*(int *)(lVar1 + 0x15b8)) {
      uVar6 = (longlong)*(int *)(lVar1 + 0x15b8) + 1;
      do {
        lVar3 = *(longlong *)(*(longlong *)(lVar1 + 0x15c0) + -0x10 + uVar6 * 8);
        cVar2 = FUN_18011c85c(lVar3);
        if (cVar2 != '\0') {
          lVar5 = *(longlong *)(lVar3 + 8);
          lVar4 = FUN_180101d94(lVar5,0);
          if (lVar5 == lVar4) {
            lVar5 = FUN_18012f219(lVar3);
          }
          local_38 = 0;
          FUN_1801391f6(lVar5,*(longlong *)(lVar1 + 0x23e8) == lVar3,0,&local_38);
        }
        uVar6 = uVar6 - 1;
      } while (1 < uVar6);
    }
    FUN_18010f900();
    FUN_180101ccb(1);
  }
  if (DAT_180402640 == (local_30 ^ (ulonglong)auStack_68)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1802396d0(local_30 ^ (ulonglong)auStack_68);
}

