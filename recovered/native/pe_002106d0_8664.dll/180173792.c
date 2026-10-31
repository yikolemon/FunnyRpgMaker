/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 180173792 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 (*) [16] FUN_180173792(undefined1 (*param_1) [16],longlong *param_2)

{
  undefined2 uVar1;
  ulonglong uVar2;
  undefined1 (*pauVar3) [16];
  byte *pbVar4;
  longlong lVar5;
  uint uVar6;
  longlong lVar7;
  longlong lVar8;
  ulonglong uVar9;
  undefined1 uVar12;
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  undefined1 local_b0 [24];
  undefined1 local_98 [24];
  undefined1 local_80 [24];
  undefined1 local_68 [24];
  undefined1 local_50 [24];
  undefined1 (*local_38) [16];
  undefined8 local_30;
  
  local_30 = 0xfffffffffffffffe;
  uVar2 = param_2[1];
  if (uVar2 == 0) {
    *param_1 = (undefined1  [16])0x0;
    *(undefined8 *)param_1[1] = 0;
    *(undefined8 *)(param_1[1] + 8) = 0xf;
  }
  else {
    if ((uVar2 & 3) != 0) {
      FUN_1800061ea(local_b0,"Invalid base64 encoded data - Size not divisible by 4");
                    /* WARNING: Subroutine does not return */
      FUN_18026d5b0(local_b0,&DAT_1803a64a0);
    }
    lVar7 = 0;
    lVar8 = 0;
    lVar5 = 4;
    do {
      uVar1 = *(undefined2 *)(uVar2 + *param_2 + -6 + lVar5);
      uVar12 = (undefined1)((ushort)uVar1 >> 8);
      auVar10 = ZEXT416(CONCAT22((short)(CONCAT13(uVar12,CONCAT12(uVar12,uVar1)) >> 0x10),
                                 CONCAT11((char)uVar1,(char)uVar1)));
      auVar10 = pshuflw(auVar10,auVar10,0xc5);
      auVar11[0] = -(auVar10[0] == DAT_1802e12a0);
      auVar11[1] = -(auVar10[1] == UNK_1802e12a1);
      auVar11[2] = -(auVar10[2] == UNK_1802e12a2);
      auVar11[3] = -(auVar10[3] == UNK_1802e12a3);
      auVar11[4] = -(auVar10[4] == UNK_1802e12a4);
      auVar11[5] = -(auVar10[5] == UNK_1802e12a5);
      auVar11[6] = -(auVar10[6] == UNK_1802e12a6);
      auVar11[7] = -(auVar10[7] == UNK_1802e12a7);
      auVar11[8] = -(auVar10[4] == UNK_1802e12a8);
      auVar11[9] = -(auVar10[5] == UNK_1802e12a9);
      auVar11[10] = -(auVar10[6] == UNK_1802e12aa);
      auVar11[0xb] = -(auVar10[7] == UNK_1802e12ab);
      auVar11[0xc] = -(auVar10[0xc] == UNK_1802e12ac);
      auVar11[0xd] = -(auVar10[0xd] == UNK_1802e12ad);
      auVar11[0xe] = -(auVar10[0xe] == UNK_1802e12ae);
      auVar11[0xf] = -(auVar10[0xf] == UNK_1802e12af);
      lVar7 = lVar7 + SUB168(auVar11 & _DAT_1802be650,0);
      lVar8 = lVar8 + SUB168(auVar11 & _DAT_1802be650,8);
      lVar5 = lVar5 + -2;
    } while (lVar5 != 0);
    uVar9 = lVar8 + lVar7;
    if (2 < uVar9) {
      FUN_1800061ea(local_98,"Invalid base64 encoded data - Found more than 2 padding signs");
                    /* WARNING: Subroutine does not return */
      FUN_18026d5b0(local_98,&DAT_1803a64a0);
    }
    param_1[1] = (undefined1  [16])0x0;
    *param_1 = (undefined1  [16])0x0;
    local_38 = param_1;
    FUN_180061c48(0,0x2e,(uVar2 * 3 >> 2) - uVar9);
    pauVar3 = local_38;
    if (0xf < *(ulonglong *)(local_38[1] + 8)) {
      pauVar3 = *(undefined1 (**) [16])*local_38;
    }
    pbVar4 = (byte *)*param_2;
    for (lVar5 = ((ulonglong)param_2[1] >> 2) - (ulonglong)(uVar9 != 0); lVar5 != 0;
        lVar5 = lVar5 + -1) {
      uVar6 = *(uint *)(&DAT_1802dfc90 + (ulonglong)pbVar4[1] * 4) |
              *(uint *)(&DAT_1802df890 + (ulonglong)*pbVar4 * 4) |
              *(uint *)(&DAT_1802e0090 + (ulonglong)pbVar4[2] * 4) |
              *(uint *)(&DAT_1802e0490 + (ulonglong)pbVar4[3] * 4);
      if (0x1fffffe < uVar6) {
        FUN_1800061ea(local_80,"Invalid base64 encoded data - Invalid character");
                    /* WARNING: Subroutine does not return */
        FUN_18026d5b0(local_80,&DAT_1803a64a0);
      }
      pbVar4 = pbVar4 + 4;
      (*pauVar3)[0] = (char)uVar6;
      (*pauVar3)[1] = (char)(uVar6 >> 8);
      (*pauVar3)[2] = (char)(uVar6 >> 0x10);
      pauVar3 = (undefined1 (*) [16])(*pauVar3 + 3);
    }
    param_1 = local_38;
    if (uVar9 != 0) {
      if (uVar9 == 1) {
        uVar6 = *(uint *)(&DAT_1802dfc90 + (ulonglong)pbVar4[1] * 4) |
                *(uint *)(&DAT_1802df890 + (ulonglong)*pbVar4 * 4) |
                *(uint *)(&DAT_1802e0090 + (ulonglong)pbVar4[2] * 4);
        if (0x1fffffe < uVar6) {
          FUN_1800061ea(local_68,"Invalid base64 encoded data - Invalid character");
                    /* WARNING: Subroutine does not return */
          FUN_18026d5b0(local_68,&DAT_1803a64a0);
        }
        *(short *)*pauVar3 = (short)uVar6;
      }
      else {
        if (0x1fffffe <
            (*(uint *)(&DAT_1802dfc90 + (ulonglong)pbVar4[1] * 4) |
            *(uint *)(&DAT_1802df890 + (ulonglong)*pbVar4 * 4))) {
          FUN_1800061ea(local_50,"Invalid base64 encoded data - Invalid character");
                    /* WARNING: Subroutine does not return */
          FUN_18026d5b0(local_50,&DAT_1803a64a0);
        }
        (*pauVar3)[0] =
             (char)(*(uint *)(&DAT_1802dfc90 + (ulonglong)pbVar4[1] * 4) |
                   *(uint *)(&DAT_1802df890 + (ulonglong)*pbVar4 * 4));
      }
    }
  }
  return param_1;
}

