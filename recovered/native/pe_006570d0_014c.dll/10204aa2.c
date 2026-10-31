/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 10204aa2 */

void FUN_10204aa2(undefined4 *param_1)

{
  byte bVar1;
  byte *pbVar2;
  byte *pbVar3;
  undefined4 uVar4;
  byte *pbVar5;
  undefined4 uVar6;
  uint uVar7;
  byte *local_18;
  uint local_14;
  
  local_14 = DAT_10388d00 ^ (uint)&local_18;
  pbVar2 = (byte *)*param_1;
  pbVar3 = (byte *)param_1[2];
  local_18 = pbVar2;
  FUN_10207708();
  uVar4 = 0;
  pbVar5 = local_18;
  if (pbVar3 <= local_18) goto LAB_10204bae;
  bVar1 = *local_18;
  if (bVar1 < 0x3e) {
    if (bVar1 == 0x28) {
      uVar4 = FUN_1020783d();
      pbVar5 = local_18;
      goto LAB_10204bae;
    }
    if (bVar1 == 0x2f) {
      local_18 = local_18 + 1;
    }
    else if (bVar1 == 0x3c) {
      if ((pbVar3 <= local_18 + 1) || (local_18[1] != 0x3c)) {
        uVar4 = FUN_102078d3();
        pbVar5 = local_18;
        goto LAB_10204bae;
      }
      goto LAB_10204b47;
    }
LAB_10204b58:
    pbVar5 = local_18;
    if (local_18 < pbVar3) {
      do {
        uVar7 = (uint)*local_18;
        pbVar5 = local_18;
        if (uVar7 < 0x5b) {
          if (((uVar7 - 0x20 < 0x1f) && ((0x50008321U >> (uVar7 - 0x20 & 0x1f) & 1) != 0)) ||
             ((uVar7 < 0xe && ((0x3601U >> (uVar7 & 0x1f) & 1) != 0)))) break;
        }
        else if (uVar7 < 0x7b) {
          if ((uVar7 == 0x5b) || (uVar7 == 0x5d)) break;
        }
        else if ((uVar7 == 0x7b) || (uVar7 == 0x7d)) break;
        local_18 = local_18 + 1;
        pbVar5 = pbVar3;
      } while (local_18 != pbVar3);
    }
  }
  else {
    if (0x5c < bVar1) {
      if (bVar1 == 0x7b) {
        uVar4 = FUN_10207784();
        pbVar5 = local_18;
        goto LAB_10204bae;
      }
      if (bVar1 == 0x5d) goto LAB_10204b22;
      goto LAB_10204b58;
    }
    if (bVar1 == 0x3e) {
      pbVar5 = local_18 + 1;
      uVar4 = 3;
      if ((pbVar3 <= pbVar5) || (*pbVar5 != 0x3e)) goto LAB_10204bae;
LAB_10204b47:
      pbVar5 = local_18 + 2;
    }
    else {
      if (bVar1 != 0x5b) goto LAB_10204b58;
LAB_10204b22:
      pbVar5 = local_18 + 1;
    }
  }
  uVar4 = 0;
LAB_10204bae:
  local_18 = pbVar5;
  uVar6 = 3;
  if (local_18 != pbVar2) {
    uVar6 = uVar4;
  }
  pbVar5 = local_18;
  if (pbVar3 < local_18) {
    pbVar5 = pbVar3;
  }
  if (pbVar3 <= local_18) {
    uVar6 = uVar4;
  }
  param_1[3] = uVar6;
  *param_1 = pbVar5;
  if (DAT_10388d00 != (local_14 ^ (uint)&local_18)) {
                    /* WARNING: Subroutine does not return */
    FUN_102283e0();
  }
  return;
}

