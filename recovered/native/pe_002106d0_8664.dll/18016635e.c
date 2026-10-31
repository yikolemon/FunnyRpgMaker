/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 18016635e */

void FUN_18016635e(int param_1,undefined4 param_2)

{
  undefined4 uVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  uint *puVar5;
  uint *puVar6;
  undefined4 uVar7;
  float fVar8;
  float fVar9;
  
  lVar2 = *(longlong *)(DAT_180419160 + 0x24f8);
  lVar3 = *(longlong *)(lVar2 + 0x18);
  lVar4 = (longlong)param_1 * 0x74;
  uVar1 = *(undefined4 *)(lVar2 + 0xb8);
  uVar7 = FUN_180102463(uVar1,*(undefined4 *)(lVar3 + 0x18 + lVar4));
  fVar8 = (float)FUN_1801179ee(param_2,uVar1,uVar7);
  fVar9 = *(float *)(lVar3 + 4 + lVar4);
  if ((fVar9 == fVar8) && (!NAN(fVar9) && !NAN(fVar8))) {
    return;
  }
  puVar6 = (uint *)(lVar3 + lVar4);
  fVar9 = (float)puVar6[4];
  if ((fVar9 == fVar8) && (!NAN(fVar9) && !NAN(fVar8))) {
    return;
  }
  if ((longlong)(short)puVar6[0x17] == -1) {
    if ((*puVar6 & 0x10) != 0) {
LAB_180166483:
      puVar6[4] = (uint)fVar8;
      goto LAB_180166488;
    }
LAB_1801663fe:
    if ((longlong)*(short *)((longlong)puVar6 + 0x5a) == -1) {
      return;
    }
    if (*(longlong *)(lVar2 + 0x18) == 0) {
      return;
    }
    puVar5 = (uint *)(*(longlong *)(lVar2 + 0x18) +
                     (longlong)*(short *)((longlong)puVar6 + 0x5a) * 0x74);
  }
  else {
    lVar3 = *(longlong *)(lVar2 + 0x18);
    puVar5 = (uint *)((longlong)(short)puVar6[0x17] * 0x74 + lVar3);
    if ((*puVar6 & 0x10) == 0) {
      if (lVar3 == 0) goto LAB_1801663fe;
    }
    else if (((lVar3 == 0) || ((longlong)*(short *)(lVar2 + 0x222) == -1)) ||
            (*(short *)((longlong)puVar6 + 0x56) <=
             *(short *)(lVar3 + 0x56 + (longlong)*(short *)(lVar2 + 0x222) * 0x74)))
    goto LAB_180166483;
  }
  fVar9 = (float)FUN_180102463((float)puVar5[4] - (fVar8 - fVar9),uVar1);
  puVar6[4] = (uint)(((float)puVar6[4] + (float)puVar5[4]) - fVar9);
  puVar5[4] = (uint)fVar9;
  if (((*puVar5 | *puVar6) & 8) != 0) {
    FUN_18016abaa(lVar2);
  }
LAB_180166488:
  *(undefined1 *)(lVar2 + 0x241) = 1;
  return;
}

