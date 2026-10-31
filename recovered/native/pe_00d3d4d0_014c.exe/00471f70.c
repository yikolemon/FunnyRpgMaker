/* Ghidra pseudocode. Image: pe_00d3d4d0_014c.exe Address: 00471f70 */

byte * __fastcall FUN_00471f70(uint param_1,byte *param_2)

{
  int iVar1;
  uint uVar2;
  byte bVar3;
  uint uVar5;
  byte *pbVar6;
  int iVar7;
  uint uVar8;
  bool bVar9;
  uint local_20;
  byte local_19 [5];
  uint local_14;
  char cVar4;
  
  local_14 = DAT_0050e8c0 ^ (uint)&local_20;
  if (param_1 == 0) {
    *param_2 = 0x30;
  }
  else {
    if ((int)param_1 < 0) {
      *param_2 = 0x2d;
      param_2 = param_2 + 1;
      param_1 = -param_1;
    }
    uVar5 = param_1 & 0xffff;
    if (param_1 >> 0x10 != 0) {
      pbVar6 = local_19;
      uVar2 = param_1 >> 0x10;
      do {
        *pbVar6 = (char)uVar2 + (char)(uVar2 / 10) * -10 | 0x30;
        pbVar6 = pbVar6 + 1;
        bVar9 = 9 < uVar2;
        uVar2 = uVar2 / 10;
      } while (bVar9);
      for (; local_20 = uVar5, local_19 < pbVar6; pbVar6 = pbVar6 + -1) {
        *param_2 = pbVar6[-1];
        param_2 = param_2 + 1;
      }
    }
    if (uVar5 == 0) goto LAB_0047207e;
    *param_2 = 0x2e;
    uVar5 = uVar5 * 10 + 5;
    iVar1 = 0;
    do {
      iVar7 = iVar1;
      uVar2 = uVar5 >> 0x10;
      cVar4 = (char)(uVar5 >> 0x10);
      bVar3 = cVar4 + 0x30;
      param_2[iVar7 + 1] = bVar3;
      uVar8 = uVar5 & 0xffff;
      if (uVar8 == 0) {
        if (iVar7 != 4) goto LAB_00472064;
        if (bVar3 != 0x31) goto LAB_00472057;
        goto LAB_0047204e;
      }
      uVar5 = uVar8 * 10;
      iVar1 = iVar7 + 1;
    } while (iVar7 + 1 != 5);
    if (uVar8 < 0x86b0) {
      if (bVar3 != 0x31) {
        if (uVar8 == 0x4350) {
          if ((uVar2 & 1) != 0) {
LAB_0047205b:
            bVar3 = cVar4 + 0x2f;
            param_2[iVar7 + 1] = bVar3;
          }
        }
        else if (uVar8 < 0x4350) {
LAB_00472057:
          if (uVar2 != 0) goto LAB_0047205b;
          goto LAB_00472069;
        }
        goto LAB_00472064;
      }
LAB_0047204e:
      param_2[iVar7 + 1] = 0x30;
    }
    else {
LAB_00472064:
      if (bVar3 != 0x30) {
        param_2 = param_2 + iVar7 + 1;
        goto LAB_0047207d;
      }
    }
LAB_00472069:
    param_2 = param_2 + iVar7 + 1;
    do {
      *param_2 = 0;
      pbVar6 = param_2 + -1;
      param_2 = param_2 + -1;
    } while (*pbVar6 == 0x30);
  }
LAB_0047207d:
  param_2 = param_2 + 1;
LAB_0047207e:
  if (DAT_0050e8c0 != (local_14 ^ (uint)&local_20)) {
                    /* WARNING: Subroutine does not return */
    FUN_0047f2c0(local_14 ^ (uint)&local_20);
  }
  return param_2;
}

