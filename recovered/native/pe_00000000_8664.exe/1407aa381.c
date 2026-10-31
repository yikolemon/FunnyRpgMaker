/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 1407aa381 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ulonglong FUN_1407aa381(undefined4 param_1,uint param_2)

{
  float fVar1;
  uint uVar2;
  int iVar3;
  ulonglong uVar4;
  undefined4 in_ECX;
  float *pfVar5;
  undefined1 *puVar6;
  int iVar7;
  ulonglong uVar8;
  float extraout_XMM0_Da;
  undefined4 in_XMM1_Da;
  float fVar9;
  float fVar10;
  
  pfVar5 = (float *)(ulonglong)((int)&stack0xffffffffffffffe0 - 0x2c);
  *(undefined4 *)((longlong)pfVar5 + 4) = in_XMM1_Da;
  *(undefined4 *)((longlong)pfVar5 + 0xc) = param_1;
  *(undefined8 *)((longlong)pfVar5 + -8) = 0x1407aa3a8;
  uVar2 = FUN_1407a9c61();
  *(uint *)((longlong)pfVar5 + 8) = param_2;
  *(undefined4 *)(ulonglong)param_2 = 0;
  uVar4 = (ulonglong)uVar2;
  if (0 < (int)uVar2) {
    fVar9 = 0.0;
    uVar8 = 0;
    do {
      *pfVar5 = fVar9;
      *(ulonglong *)(pfVar5 + -2) = uVar8;
      pfVar5[-4] = 3.9162478;
      pfVar5[-3] = 1.4013e-45;
      FUN_1407a9a19((ulonglong)(pfVar5 + 4) & 0xffffffff,in_ECX);
      pfVar5 = (float *)(ulonglong)((int)(pfVar5 + -2) + 4);
      fVar1 = pfVar5[9];
      if ((int)fVar1 < 1) goto LAB_1407aa41e;
      iVar7 = (int)uVar8;
      fVar9 = *pfVar5;
      if ((iVar7 == 0) && (pfVar5[1] <= pfVar5[7] + fVar9 && pfVar5[7] + fVar9 != pfVar5[1])) {
        uVar4 = 0;
        goto LAB_1407aa41e;
      }
      if (pfVar5[1] <= pfVar5[8] + fVar9 && pfVar5[8] + fVar9 != pfVar5[1]) {
        fVar9 = pfVar5[4];
        uVar4 = uVar8;
        if (pfVar5[3] < fVar9) goto LAB_1407aa41e;
        fVar10 = pfVar5[5];
        if (fVar10 <= pfVar5[3]) goto LAB_1407aa4a6;
        uVar4 = 0;
        *pfVar5 = fVar9;
        goto LAB_1407aa466;
      }
      uVar8 = (ulonglong)(uint)(iVar7 + (int)fVar1);
      fVar9 = fVar9 + pfVar5[6];
    } while (iVar7 + (int)fVar1 < (int)uVar2);
  }
  *(undefined4 *)(ulonglong)*(uint *)((longlong)pfVar5 + 8) = 1;
  goto LAB_1407aa41e;
  while( true ) {
    pfVar5[-2] = 3.9162962;
    pfVar5[-1] = 1.4013e-45;
    iVar3 = FUN_1407a97c3(in_ECX,iVar3 + iVar7);
    uVar4 = (ulonglong)(uint)(iVar3 - iVar7);
    fVar9 = *pfVar5;
    fVar10 = extraout_XMM0_Da;
    if ((int)fVar1 <= iVar3 - iVar7) break;
LAB_1407aa466:
    *(float *)((longlong)pfVar5 + 4) = fVar9;
    puVar6 = (undefined1 *)((longlong)pfVar5 + -8);
    *(ulonglong *)((longlong)pfVar5 + -8) = uVar4;
    *(undefined8 *)((longlong)pfVar5 + -0x10) = 0x1407aa476;
    fVar9 = (float)FUN_1407a9a9b(in_ECX,uVar8);
    pfVar5 = (float *)(ulonglong)((int)puVar6 + 4U);
    fVar10 = *pfVar5 + fVar9;
    *pfVar5 = fVar10;
    iVar3 = (int)uVar4;
    if (pfVar5[3] <= fVar10 && fVar10 != pfVar5[3]) {
      *(uint *)(ulonglong)(uint)pfVar5[2] = (uint)(iVar3 != 0);
      uVar4 = (ulonglong)(uint)(iVar7 + iVar3);
      if (pfVar5[3] <= pfVar5[1] + fVar9 * _DAT_150a615c5 &&
          pfVar5[1] + fVar9 * _DAT_150a615c5 != pfVar5[3]) goto LAB_1407aa41e;
      if (_DAT_150b33208 == ((uint)pfVar5[10] ^ (int)puVar6 + 4U)) {
        uVar4 = FUN_1407a97c3(in_ECX,uVar4);
        return uVar4;
      }
      goto LAB_1407aa51c;
    }
  }
LAB_1407aa4a6:
  *(undefined4 *)(ulonglong)*(uint *)((longlong)pfVar5 + 8) = 1;
  *(undefined8 *)((longlong)pfVar5 + -8) = 0x1407aa4bf;
  FUN_14079ac10(fVar10,iVar7 + (int)fVar1);
  uVar4 = (ulonglong)(uint)((int)fVar1 + iVar7);
LAB_1407aa41e:
  if (_DAT_150b3312a == (*(uint *)((longlong)pfVar5 + 0x28) ^ (uint)pfVar5)) {
    return uVar4;
  }
LAB_1407aa51c:
                    /* WARNING: Subroutine does not return */
  *(code **)((longlong)pfVar5 + -8) = FUN_1407aa527;
  FUN_1408802b0(*(uint *)((longlong)pfVar5 + 0x28) ^ (uint)pfVar5);
}

