/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 18017d674 */

undefined8 FUN_18017d674(longlong *param_1)

{
  int iVar1;
  uint uVar2;
  ulonglong uVar3;
  byte *pbVar4;
  byte bVar5;
  uint uVar6;
  char *pcVar7;
  longlong lVar8;
  uint *puVar9;
  longlong lVar10;
  
  iVar1 = FUN_180177505(*param_1);
  lVar8 = *param_1;
  pbVar4 = *(byte **)(lVar8 + 0xc0);
  if (pbVar4 < *(byte **)(lVar8 + 200)) {
LAB_18017d6b9:
    *(byte **)(lVar8 + 0xc0) = pbVar4 + 1;
    bVar5 = *pbVar4;
    *(uint *)((longlong)param_1 + 0x4854) = (uint)bVar5;
    if ((0xfb < (byte)(bVar5 - 5)) && (lVar8 = *param_1, (int)(uint)bVar5 <= *(int *)(lVar8 + 8))) {
      if (iVar1 != (uint)bVar5 * 2 + 6) {
        pcVar7 = "bad SOS len";
        goto LAB_18017d805;
      }
      lVar10 = 0;
      do {
        pbVar4 = *(byte **)(lVar8 + 0xc0);
        if (pbVar4 < *(byte **)(lVar8 + 200)) {
LAB_18017d727:
          *(byte **)(lVar8 + 0xc0) = pbVar4 + 1;
          uVar6 = (uint)*pbVar4;
        }
        else {
          if (*(int *)(lVar8 + 0x30) != 0) {
            FUN_180176673(lVar8);
            pbVar4 = *(byte **)(lVar8 + 0xc0);
            goto LAB_18017d727;
          }
          uVar6 = 0;
        }
        lVar8 = *param_1;
        pbVar4 = *(byte **)(lVar8 + 0xc0);
        if (pbVar4 < *(byte **)(lVar8 + 200)) {
LAB_18017d761:
          *(byte **)(lVar8 + 0xc0) = pbVar4 + 1;
          bVar5 = *pbVar4;
        }
        else {
          if (*(int *)(lVar8 + 0x30) != 0) {
            FUN_180176673(lVar8);
            pbVar4 = *(byte **)(lVar8 + 0xc0);
            goto LAB_18017d761;
          }
          bVar5 = 0;
        }
        lVar8 = *param_1;
        iVar1 = *(int *)(lVar8 + 8);
        uVar3 = 0;
        if (0 < (longlong)iVar1) {
          uVar3 = 0;
          puVar9 = (uint *)(param_1 + 0x8d4);
          while (*puVar9 != uVar6) {
            uVar3 = uVar3 + 1;
            puVar9 = puVar9 + 0x18;
            if ((longlong)iVar1 == uVar3) {
              return 0;
            }
          }
        }
        if ((int)uVar3 == iVar1) {
          return 0;
        }
        *(uint *)(param_1 + (uVar3 & 0xffffffff) * 0xc + 0x8d6) = (uint)(bVar5 >> 4);
        if (0x3f < bVar5) {
          pcVar7 = "bad DC huff";
          goto LAB_18017d96e;
        }
        *(uint *)((longlong)(param_1 + 0x8d4) + ((uVar3 & 0xffffffff) * 0x18 + 5) * 4) = bVar5 & 0xf
        ;
        if (3 < (bVar5 & 0xf)) {
          pcVar7 = "bad AC huff";
          goto LAB_18017d96e;
        }
        *(int *)((longlong)param_1 + lVar10 * 4 + 0x4858) = (int)uVar3;
        lVar10 = lVar10 + 1;
      } while (lVar10 < *(int *)((longlong)param_1 + 0x4854));
      pbVar4 = *(byte **)(lVar8 + 0xc0);
      if (pbVar4 < *(byte **)(lVar8 + 200)) {
LAB_18017d865:
        *(byte **)(lVar8 + 0xc0) = pbVar4 + 1;
        uVar6 = (uint)*pbVar4;
      }
      else {
        if (*(int *)(lVar8 + 0x30) != 0) {
          FUN_180176673(lVar8);
          pbVar4 = *(byte **)(lVar8 + 0xc0);
          goto LAB_18017d865;
        }
        uVar6 = 0;
      }
      *(uint *)((longlong)param_1 + 0x4834) = uVar6;
      lVar8 = *param_1;
      pbVar4 = *(byte **)(lVar8 + 0xc0);
      if (pbVar4 < *(byte **)(lVar8 + 200)) {
LAB_18017d8a5:
        *(byte **)(lVar8 + 0xc0) = pbVar4 + 1;
        uVar6 = (uint)*pbVar4;
      }
      else {
        if (*(int *)(lVar8 + 0x30) != 0) {
          FUN_180176673(lVar8);
          pbVar4 = *(byte **)(lVar8 + 0xc0);
          goto LAB_18017d8a5;
        }
        uVar6 = 0;
      }
      *(uint *)(param_1 + 0x907) = uVar6;
      lVar8 = *param_1;
      pbVar4 = *(byte **)(lVar8 + 0xc0);
      if (pbVar4 < *(byte **)(lVar8 + 200)) {
LAB_18017d8e5:
        *(byte **)(lVar8 + 0xc0) = pbVar4 + 1;
        uVar6 = (uint)*pbVar4;
      }
      else {
        if (*(int *)(lVar8 + 0x30) != 0) {
          FUN_180176673(lVar8);
          pbVar4 = *(byte **)(lVar8 + 0xc0);
          goto LAB_18017d8e5;
        }
        uVar6 = 0;
      }
      *(uint *)((longlong)param_1 + 0x483c) = uVar6 >> 4;
      uVar2 = uVar6 & 0xf;
      *(uint *)(param_1 + 0x908) = uVar2;
      iVar1 = *(int *)((longlong)param_1 + 0x4834);
      if ((int)param_1[0x906] == 0) {
        if ((iVar1 == 0) && (uVar6 >> 4 == 0 && uVar2 == 0)) {
          *(undefined4 *)(param_1 + 0x907) = 0x3f;
          return 1;
        }
        pcVar7 = "bad SOS";
LAB_18017d96e:
        FUN_1801765d0(pcVar7);
        return 0;
      }
      if (((iVar1 < 0x40) && (iVar1 <= (int)param_1[0x907] && (int)param_1[0x907] < 0x40)) &&
         (uVar2 < 0xe && (byte)uVar6 < 0xe0)) {
        return 1;
      }
      pcVar7 = "bad SOS";
      goto LAB_18017d805;
    }
  }
  else {
    if (*(int *)(lVar8 + 0x30) != 0) {
      FUN_180176673(lVar8);
      pbVar4 = *(byte **)(lVar8 + 0xc0);
      goto LAB_18017d6b9;
    }
    *(undefined4 *)((longlong)param_1 + 0x4854) = 0;
  }
  pcVar7 = "bad SOS component count";
LAB_18017d805:
  FUN_1801765d0(pcVar7);
  return 0;
}

