/* Ghidra pseudocode. Image: pe_00d3d4d0_014c.exe Address: 0045c21a */

void __cdecl FUN_0045c21a(undefined4 *param_1)

{
  byte bVar1;
  byte *pbVar2;
  byte *pbVar3;
  int iVar4;
  byte *pbVar5;
  int iVar6;
  uint uVar7;
  byte *local_18;
  uint local_14;
  
  local_14 = DAT_0050e8c0 ^ (uint)&local_18;
  pbVar2 = (byte *)*param_1;
  pbVar3 = (byte *)param_1[2];
  local_18 = pbVar2;
  FUN_0045ee80(&local_18,pbVar3);
  iVar4 = 0;
  pbVar5 = local_18;
  if (pbVar3 <= local_18) goto LAB_0045c326;
  bVar1 = *local_18;
  if (bVar1 < 0x3e) {
    if (bVar1 == 0x28) {
      iVar4 = FUN_0045efb5((uint *)&local_18,pbVar3);
      pbVar5 = local_18;
      goto LAB_0045c326;
    }
    if (bVar1 == 0x2f) {
      local_18 = local_18 + 1;
    }
    else if (bVar1 == 0x3c) {
      if ((pbVar3 <= local_18 + 1) || (local_18[1] != 0x3c)) {
        iVar4 = FUN_0045f04b((int *)&local_18,pbVar3);
        pbVar5 = local_18;
        goto LAB_0045c326;
      }
      goto LAB_0045c2bf;
    }
LAB_0045c2d0:
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
        iVar4 = FUN_0045eefc(&local_18,pbVar3);
        pbVar5 = local_18;
        goto LAB_0045c326;
      }
      if (bVar1 == 0x5d) goto LAB_0045c29a;
      goto LAB_0045c2d0;
    }
    if (bVar1 == 0x3e) {
      pbVar5 = local_18 + 1;
      iVar4 = 3;
      if ((pbVar3 <= pbVar5) || (*pbVar5 != 0x3e)) goto LAB_0045c326;
LAB_0045c2bf:
      pbVar5 = local_18 + 2;
    }
    else {
      if (bVar1 != 0x5b) goto LAB_0045c2d0;
LAB_0045c29a:
      pbVar5 = local_18 + 1;
    }
  }
  iVar4 = 0;
LAB_0045c326:
  local_18 = pbVar5;
  iVar6 = 3;
  if (local_18 != pbVar2) {
    iVar6 = iVar4;
  }
  pbVar5 = local_18;
  if (pbVar3 < local_18) {
    pbVar5 = pbVar3;
  }
  if (pbVar3 <= local_18) {
    iVar6 = iVar4;
  }
  param_1[3] = iVar6;
  *param_1 = pbVar5;
  if (DAT_0050e8c0 != (local_14 ^ (uint)&local_18)) {
                    /* WARNING: Subroutine does not return */
    FUN_0047f2c0(local_14 ^ (uint)&local_18);
  }
  return;
}

