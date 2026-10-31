/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 10147815 */

void FUN_10147815(uint param_1,float *param_2,uint param_3)

{
  char cVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float local_48;
  float fStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  float local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  float local_28;
  float fStack_24;
  float local_20;
  float local_1c;
  float local_18;
  float local_14;
  uint local_10;
  
  iVar6 = DAT_1039d74c;
  local_10 = DAT_10388d00 ^ (uint)&local_48;
  cVar1 = FUN_10115ba7(2,0);
  if (cVar1 != '\0') {
    if (param_1 != 0) {
      uVar2 = FUN_100fd57d(param_1,0);
      if (param_1 < uVar2) {
        FUN_1012cbcc();
        FUN_10132188();
      }
    }
    fVar8 = *(float *)(iVar6 + 0xd10);
    local_18 = *(float *)(iVar6 + 0x1228) * DAT_102b6c58 + fVar8 + fVar8;
    local_1c = DAT_1028b430;
    if ((param_3 & 2) == 0) {
      local_1c = param_2[3];
    }
    local_38 = param_2[2];
    local_48 = *param_2;
    fStack_44 = param_2[1];
    uStack_40 = 0;
    uStack_3c = 0;
    uStack_34 = 0;
    uStack_30 = 0;
    uStack_2c = 0;
    iVar6 = 0xff;
    if ((param_3 & 2) == 0) {
      fVar8 = param_2[3];
      fVar7 = DAT_1028b430;
      if (fVar8 <= DAT_1028b430) {
        fVar7 = fVar8;
      }
      iVar6 = (int)(float)(-(uint)(fVar8 < 0.0) & (uint)DAT_102b70e0 |
                          ~-(uint)(fVar8 < 0.0) & (uint)(fVar7 * DAT_102b7090 + DAT_102b70e0));
    }
    local_28 = local_48;
    fStack_24 = fStack_44;
    local_20 = local_38;
    local_14 = local_18;
    FUN_10144b9b("##preview",&local_28,param_3 & 0x18007002 | 0x40,&local_18);
    FUN_10114a0e(0,0xbf800000);
    if ((param_3 & 0x18000000) == 0x10000000) {
      if ((param_3 & 2) == 0) {
        FUN_1012d08c("H: %.3f, S: %.3f, V: %.3f, A: %.3f",(double)*param_2,(double)param_2[1],
                     (double)param_2[2],(double)param_2[3]);
      }
      else {
        FUN_1012d08c();
      }
    }
    else {
      fVar8 = DAT_1028b430;
      if (local_48 <= DAT_1028b430) {
        fVar8 = local_48;
      }
      fVar7 = DAT_1028b430;
      if (fStack_44 <= DAT_1028b430) {
        fVar7 = fStack_44;
      }
      fVar9 = DAT_1028b430;
      if (local_38 <= DAT_1028b430) {
        fVar9 = local_38;
      }
      iVar3 = (int)(float)(-(uint)(local_48 < 0.0) & (uint)DAT_102b70e0 |
                          ~-(uint)(local_48 < 0.0) & (uint)(fVar8 * DAT_102b7090 + DAT_102b70e0));
      iVar4 = (int)(float)(-(uint)(fStack_44 < 0.0) & (uint)DAT_102b70e0 |
                          ~-(uint)(fStack_44 < 0.0) & (uint)(fVar7 * DAT_102b7090 + DAT_102b70e0));
      iVar5 = (int)(float)(-(uint)(local_38 < 0.0) & (uint)DAT_102b70e0 |
                          ~-(uint)(local_38 < 0.0) & (uint)(fVar9 * DAT_102b7090 + DAT_102b70e0));
      if ((param_3 & 2) == 0) {
        FUN_1012d08c("#%02X%02X%02X%02X\nR:%d, G:%d, B:%d, A:%d\n(%.3f, %.3f, %.3f, %.3f)",iVar3,
                     iVar4,iVar5,iVar6,iVar3,iVar4,iVar5,iVar6,(double)*param_2,(double)param_2[1],
                     (double)param_2[2],(double)param_2[3]);
      }
      else {
        FUN_1012d08c("#%02X%02X%02X\nR: %d, G: %d, B: %d\n(%.3f, %.3f, %.3f)",iVar3,iVar4,iVar5,
                     iVar3,iVar4,iVar5,(double)*param_2,(double)param_2[1],(double)param_2[2]);
      }
    }
    thunk_FUN_1010ad44();
  }
  if (DAT_10388d00 == (local_10 ^ (uint)&local_48)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_102283e0();
}

