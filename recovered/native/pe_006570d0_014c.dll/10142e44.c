/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 10142e44 */

undefined4 __fastcall
FUN_10142e44(int param_1,int param_2,uint *param_3,code *param_4,undefined4 param_5,byte param_6)

{
  uint uVar1;
  undefined4 *puVar2;
  byte bVar3;
  byte bVar4;
  ushort uVar5;
  byte bVar9;
  uint uVar6;
  int iVar7;
  undefined4 uVar8;
  uint uVar10;
  uint uVar11;
  uint uVar12;
  int local_50;
  int local_4c;
  int local_48 [3];
  undefined4 local_3c;
  int local_38;
  ushort local_30;
  undefined1 local_2e;
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 local_18;
  uint local_14;
  
  local_14 = DAT_10388d00 ^ (uint)&local_50;
  uVar6 = *param_3;
  uVar1 = *(uint *)(param_2 + 8);
  uVar12 = uVar6;
  local_4c = param_2;
  if (uVar6 < 0x20) {
    bVar3 = (byte)(uVar1 >> 0x1a);
    uVar5 = CONCAT11(bVar3,uVar6 == 10) & 0x1ff;
    bVar4 = (byte)uVar5;
    bVar9 = (byte)(uVar5 >> 8) & bVar4;
    if (((bVar4 & param_6) == 1) && (uVar12 = 10, (uVar1 >> 0x1a & 1) == 0)) {
      *param_3 = 0x20;
      bVar9 = 1;
      uVar12 = 0x20;
    }
    local_50 = param_1;
    if ((((uVar12 == 9 & (byte)((uVar1 & 0x20) >> 5)) != 0) || (bVar9 != 0)) ||
       ((uVar12 == 10 & bVar3 & 1) != 0)) goto LAB_10142ee2;
LAB_1014307c:
    uVar8 = 0;
  }
  else {
LAB_10142ee2:
    if (param_6 == 0) {
      uVar8 = 0;
      if (((0xffff < uVar12) || (uVar12 == 0x7f)) || (uVar12 - 0xe000 < 0x1900)) goto LAB_1014307e;
    }
    else if (0xffff < uVar12) goto LAB_1014307c;
    if ((uVar1 & 0x1000001f) != 0 && 0x1f < uVar6) {
      uVar11 = (uint)*(ushort *)(param_1 + 0xc1c);
      uVar6 = uVar12;
      if ((uVar12 & 0xfffd) == 0x2c) {
        uVar6 = uVar11;
      }
      if ((uVar1 & 0x10000005) == 0) {
        uVar6 = uVar12;
      }
      uVar10 = uVar6 - 0xfee0;
      if (0x5d < uVar6 - 0xff01) {
        uVar10 = uVar6;
      }
      if ((uVar1 & 7) == 0) {
        uVar10 = uVar6;
      }
      uVar6 = uVar10 - 0x30;
      if ((((uVar1 & 1) != 0) && (9 < uVar6)) && (uVar10 != uVar11)) {
        uVar8 = 0;
        if ((5 < uVar10 - 0x2a) || ((0x2bU >> (uVar10 - 0x2a & 0x1f) & 1) == 0)) goto LAB_1014307e;
      }
      if ((((((uVar1 & 4) != 0) && ((9 < uVar6 && (uVar10 != uVar11)))) &&
           ((0x1b < uVar10 - 0x2a || ((0x800002bU >> (uVar10 - 0x2a & 0x1f) & 1) == 0)))) &&
          (uVar10 != 0x65)) ||
         (((((uVar1 & 2) != 0 && (9 < uVar6)) && (5 < uVar10 - 0x61)) && (5 < uVar10 - 0x41))))
      goto LAB_1014307c;
      uVar12 = uVar10 - 0x20;
      if (0x19 < uVar10 - 0x61) {
        uVar12 = uVar10;
      }
      if ((uVar1 & 8) == 0) {
        uVar12 = uVar10;
      }
      if (((uVar1 & 0x10) != 0) &&
         (((uVar8 = 0, uVar12 == 9 || (uVar12 == 0x20)) || (uVar12 == 0x3000)))) goto LAB_1014307e;
      *param_3 = uVar12;
    }
    iVar7 = DAT_1039d74c;
    if ((uVar1 >> 0x15 & 1) != 0) {
      FUN_10142686();
      local_48[0] = iVar7;
      local_38 = *(int *)(local_4c + 0xc);
      local_48[1] = 0x200000;
      local_30 = (ushort)uVar12;
      if (*(int *)(iVar7 + 0x1528) == local_38) {
        local_2e = *(undefined1 *)(iVar7 + 0x1534);
      }
      else {
        local_2e = 0;
      }
      puVar2 = *(undefined4 **)(local_4c + 4);
      local_20 = *puVar2;
      local_1c = puVar2[1];
      local_18 = puVar2[2];
      local_3c = param_5;
      local_48[2] = uVar1;
      iVar7 = (*param_4)(local_48);
      if ((iVar7 != 0) || (*param_3 = (uint)local_30, local_30 == 0)) goto LAB_1014307c;
    }
    uVar8 = 1;
  }
LAB_1014307e:
  if (DAT_10388d00 != (local_14 ^ (uint)&local_50)) {
                    /* WARNING: Subroutine does not return */
    FUN_102283e0();
  }
  return uVar8;
}

