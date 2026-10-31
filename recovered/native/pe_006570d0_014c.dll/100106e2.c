/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 100106e2 */

undefined8 FUN_100106e2(byte *param_1,byte *param_2,uint param_3,uint param_4)

{
  byte *pbVar1;
  uint uVar2;
  uint uVar3;
  byte *pbVar4;
  uint uVar5;
  int iVar6;
  uint uVar7;
  undefined4 uVar8;
  uint uVar9;
  int iVar10;
  int iVar11;
  uint local_3c;
  uint local_38;
  byte local_17;
  undefined2 local_16;
  undefined4 local_14;
  
  local_14 = DAT_10388d00 ^ (uint)&local_3c;
  uVar9 = 6;
  if (-1 < (int)param_4) {
    uVar9 = param_4;
  }
  uVar5 = param_3 & 0x7fffff;
  uVar7 = 0xffffff82;
  if (uVar5 == 0) {
    uVar7 = 0;
  }
  uVar3 = uVar5 * 2 + 0x1000000;
  uVar2 = (param_3 >> 0x17) - 0x7f;
  if (param_3 >> 0x17 == 0) {
    uVar3 = uVar5 * 2;
    uVar2 = uVar7;
  }
  uVar7 = -uVar2;
  if ((int)-uVar2 < 0) {
    uVar7 = uVar2;
  }
  uVar8 = 0x84;
  local_3c = uVar2;
  if ((int)param_2 - (int)param_1 < (int)uVar9) goto LAB_100108ca;
  iVar10 = 3 - (uint)(uVar7 < 100);
  if (uVar7 < 10) {
    iVar10 = 1;
  }
  local_38 = uVar7;
  if ((int)(((int)param_2 - (int)param_1) - uVar9) < (int)((iVar10 - (uint)(uVar9 == 0)) + 4))
  goto LAB_100108ca;
  if (uVar9 < 6) {
    uVar3 = uVar3 + (1 << ((char)uVar9 * -4 + 0x18U & 0x1f) &
                    (uVar3 * 2 + 0x1ffffff | uVar3) & uVar3 * 2);
    *param_1 = (byte)(uVar3 >> 0x18) | 0x30;
    if (uVar9 != 0) goto LAB_100107d8;
    param_1 = param_1 + 1;
  }
  else {
    *param_1 = (byte)(uVar3 >> 0x18) | 0x30;
LAB_100107d8:
    uVar3 = uVar3 & 0xffffff;
    param_1[1] = 0x2e;
    param_1[2] = (&DAT_1028b674)[uVar3 >> 0x14];
    local_3c = uVar9 - 1;
    if (local_3c == 0) {
      param_1 = param_1 + 3;
      local_3c = uVar2;
    }
    else {
      iVar6 = 0x14;
      iVar10 = 0;
      do {
        iVar11 = iVar10;
        uVar3 = ~(-1 << ((byte)iVar6 & 0x1f)) & uVar3;
        iVar6 = iVar6 + -4;
        param_1[iVar11 + 3] = (&DAT_1028b674)[uVar3 >> ((byte)iVar6 & 0x1f)];
        if (uVar9 - 2 == iVar11) {
          param_1 = param_1 + iVar11 + 4;
          goto LAB_10010856;
        }
        iVar10 = iVar11 + 1;
      } while (iVar6 != 0);
      _memset(param_1 + iVar11 + 4,0x30,local_3c - (iVar11 + 1));
      param_1 = param_1 + uVar9 + 2;
    }
  }
LAB_10010856:
  pbVar1 = param_1 + 2;
  *param_1 = 0x70;
  param_1[1] = (char)((int)uVar2 >> 0x1f) * -2 + 0x2b;
  if (local_38 < 10) {
    pbVar4 = (byte *)((int)&local_16 + 1);
    uVar9 = local_38;
LAB_100108a3:
    *pbVar4 = (byte)uVar9 | 0x30;
  }
  else {
    uVar9 = local_38 / 100;
    local_16 = *(undefined2 *)(&DAT_1028b5ac + (local_38 % 100) * 2);
    if (99 < local_38) {
      pbVar4 = &local_17;
      goto LAB_100108a3;
    }
    pbVar4 = (byte *)&local_16;
  }
  iVar10 = (int)&local_14 - (int)pbVar4;
  if ((int)param_2 - (int)pbVar1 < iVar10) {
    uVar8 = 0x84;
  }
  else {
    thunk_FUN_10006e05(pbVar4,iVar10,pbVar1);
    param_2 = pbVar1 + iVar10;
    uVar8 = 0;
  }
LAB_100108ca:
  if (DAT_10388d00 == (local_14 ^ (uint)&local_3c)) {
    return CONCAT44(uVar8,param_2);
  }
                    /* WARNING: Subroutine does not return */
  FUN_102283e0();
}

