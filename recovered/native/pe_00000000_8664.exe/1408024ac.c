/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 1408024ac */

/* WARNING: Instruction at (ram,0x000140802792) overlaps instruction at (ram,0x000140802791)
    */
/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Removing unreachable block (ram,0x000140802514) */
/* WARNING: Removing unreachable block (ram,0x00014080251e) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ulonglong Unwind_1408024ac(undefined8 *param_1,undefined8 param_2,undefined8 param_3,byte param_4)

{
  byte *pbVar1;
  uint uVar2;
  int iVar3;
  char cVar4;
  uint uVar5;
  undefined4 uVar6;
  undefined4 *puVar7;
  longlong lVar8;
  ulonglong uVar9;
  uint uVar10;
  uint *puVar11;
  undefined4 unaff_EBX;
  undefined4 *puVar12;
  undefined1 *puVar13;
  ulonglong uVar14;
  ulonglong uVar15;
  ulonglong uVar16;
  ulonglong uVar17;
  ulonglong uVar18;
  ulonglong uVar19;
  ulonglong uVar20;
  ulonglong uVar21;
  undefined4 *puVar22;
  ulonglong uVar23;
  ulonglong uVar24;
  undefined1 *puVar25;
  ulonglong uVar26;
  longlong unaff_RSI;
  int *piVar27;
  longlong in_FS_OFFSET;
  float10 in_ST0;
  float10 in_ST1;
  float10 in_ST2;
  float10 in_ST3;
  undefined8 uVar28;
  
  do {
    *param_1 = 0;
    *(undefined4 *)(param_1 + 1) = 0;
    uVar10 = (int)param_1 + 0xc;
    param_1 = (undefined8 *)(ulonglong)uVar10;
  } while (uVar10 != 0);
  _DAT_150ba6c38 = unaff_EBX;
  if (0 < _DAT_150b9133b) {
    puVar7 = (undefined4 *)(ulonglong)(_DAT_150ba6c50 + 8);
    do {
      puVar7[-2] = 0;
      puVar7[-1] = uRam00000000103023a4;
      *puVar7 = 0;
    } while (0 < _DAT_150b91399);
  }
  *(undefined4 *)(unaff_RSI + 0xf8) = 0xffffffff;
  puVar7 = (undefined4 *)FUN_140769dc5();
  uVar10 = _DAT_150b913a1;
  uVar6 = 0;
  if ((_DAT_150b913a1 >> 0x18 & 1) != 0) {
    uVar6 = _DAT_150ba6cbe;
  }
  uVar28 = _DAT_150ba6cc4;
  if (DAT_150b913cd == '\0') {
    uVar28 = 0;
  }
  *(int *)(unaff_RSI + 0x38) = (int)puVar7;
  *(undefined4 *)(unaff_RSI + 0x3c) = *puVar7;
  *(undefined8 *)(unaff_RSI + 0x40) = uVar28;
  puVar12 = (undefined4 *)(ulonglong)((int)&stack0x00000000 - 0x14);
  puVar12[4] = uVar6;
  iVar3 = (int)unaff_RSI;
  puVar12[3] = iVar3 + 0x40;
  puVar12[2] = uVar10;
  puVar12[1] = 6;
  *puVar12 = 0x1033a884;
  *(undefined8 *)(puVar12 + -2) = 0x1408025a0;
  cVar4 = FUN_1407b7704();
  puVar13 = (undefined1 *)((ulonglong)&stack0x00000000 & 0xffffffff);
  if (cVar4 == '\0') {
    piVar27 = (int *)0x0;
    *(undefined8 *)(unaff_RSI + 0x20) = 0;
    *(undefined8 *)(unaff_RSI + 0x18) = 0;
    *(undefined8 *)(unaff_RSI + 0x70) = 0;
    *(undefined8 *)(unaff_RSI + 0x10) = 0;
code_r0x000140802c98:
    *(undefined8 *)(puVar13 + -8) = 0x103a4791;
    *(undefined8 *)(puVar13 + -0x10) = 0x10333529;
    *(undefined8 *)(puVar13 + -0x18) = 0x140802ca7;
    FUN_140787dea();
    puVar25 = (undefined1 *)(ulonglong)((int)(puVar13 + -0x10) + 8);
    if (((int)piVar27 != 0) && (DAT_150ba7447 != '\0')) {
      *(undefined8 *)(puVar25 + -8) = 0;
      *(undefined8 *)(puVar25 + -0x10) = 0;
      *(undefined8 *)(puVar25 + -0x18) = 0x140802cc1;
      FUN_14076c8de();
      uVar26 = (ulonglong)((int)(puVar25 + -0x10) + 8);
      iVar3 = *piVar27;
      if ((int)piVar27 == *(int *)(unaff_RSI + 0x38)) {
        *(ulonglong *)(uVar26 - 8) = (ulonglong)(uint)(iVar3 - *(int *)(unaff_RSI + 0x3c));
        *(undefined8 *)(uVar26 - 0x10) = 0x1034770f;
        *(undefined8 *)(uVar26 - 0x18) = 0x140802d1f;
        FUN_140784f5c();
        puVar25 = (undefined1 *)(ulonglong)((int)(uVar26 - 0x10) + 8);
      }
      else {
        *(undefined8 *)(uVar26 - 8) = *(undefined8 *)(unaff_RSI + 0x18);
        *(undefined8 *)(uVar26 - 0x10) = *(undefined8 *)(unaff_RSI + 0x10);
        *(undefined8 *)(uVar26 - 0x18) = *(undefined8 *)(unaff_RSI + 0x20);
        *(undefined8 *)(uVar26 - 0x20) = *(undefined8 *)(unaff_RSI + 0x70);
        *(int *)(uVar26 - 0x24) = iVar3;
        *(undefined4 *)(uVar26 - 0x28) = 0x10348b9d;
        *(undefined8 *)(uVar26 - 0x30) = 0x140802d0b;
        FUN_140784f5c();
        puVar25 = (undefined1 *)(ulonglong)((int)(uVar26 - 0x28) + 0x28);
      }
    }
    *(undefined8 *)(puVar25 + -8) = 0x140802d27;
    FUN_1407a1257();
    *(undefined8 *)(puVar25 + -8) = 0x140802d2c;
    FUN_14076b438();
    *(undefined8 *)(puVar25 + -8) = 0x140802d31;
    FUN_14080fdf0();
    if (DAT_150ba7291 == '\x01') {
      *(undefined8 *)(puVar25 + -8) = 1;
      *(undefined8 *)(puVar25 + -0x10) = 0x140802d42;
      FUN_140755394();
    }
    uVar10 = *(uint *)(unaff_RSI + 0xf0);
    *(uint *)(in_FS_OFFSET + 0x5ef4658d00000000) = uVar10;
    return (ulonglong)uVar10;
  }
  uVar5 = _DAT_150ba6d0a | 0x94;
  *(undefined8 *)(puVar13 + -8) = 0;
  *(undefined8 *)(puVar13 + -0x10) = 0;
  *(ulonglong *)(puVar13 + -0x18) = (ulonglong)uVar5;
  *(undefined8 *)(puVar13 + -0x20) = 0x1033cb72;
  *(undefined8 *)(puVar13 + -0x28) = 0x1408025c5;
  FUN_1407bcd5b();
  uVar14 = (ulonglong)((int)(puVar13 + -0x20) + 0x10);
  iRam0000000000000050 = iRam0000000000000050 + uVar10;
  *(undefined8 *)(uVar14 - 8) = 0x1033955c;
  *(undefined8 *)(uVar14 - 0x10) = 0x1408025de;
  FUN_1407bcd5b();
  uVar15 = (ulonglong)((int)(uVar14 - 8) + 0x10);
  uVar10 = _DAT_150ba6d40 | 0x210;
  *(undefined8 *)(uVar15 - 8) = 2;
  *(undefined8 *)(uVar15 - 0x10) = 0;
  *(ulonglong *)(uVar15 - 0x18) = (ulonglong)uVar10;
  *(undefined8 *)(uVar15 - 0x20) = 0x10335e8f;
  *(undefined8 *)(uVar15 - 0x28) = 0x1408025fa;
  FUN_1407bcd5b();
  uVar16 = (ulonglong)((int)(uVar15 - 0x20) + 0x10);
  uVar10 = _DAT_150ba6d5c | 0x8000;
  *(undefined8 *)(uVar16 - 8) = 3;
  *(undefined8 *)(uVar16 - 0x10) = 0;
  *(ulonglong *)(uVar16 - 0x18) = (ulonglong)uVar10;
  *(undefined8 *)(uVar16 - 0x20) = 0x103303a4;
  *(undefined8 *)(uVar16 - 0x28) = 0x140802616;
  FUN_1407bcd5b();
  uVar17 = (ulonglong)((int)(uVar16 - 0x20) + 0x10);
  uVar10 = _DAT_e8c1d0f71038ee5c | 0xb08e083;
  *(undefined8 *)(uVar17 - 8) = 4;
  *(undefined8 *)(uVar17 - 0x10) = 0;
  *(ulonglong *)(uVar17 - 0x18) = (ulonglong)(uVar10 + 0x103a4754);
  *(undefined8 *)(uVar17 - 0x20) = 0x10335d69;
  *(undefined8 *)(uVar17 - 0x28) = 0x14080263a;
  FUN_1407bcd5b();
  uVar18 = (ulonglong)((int)(uVar17 - 0x20) + 0x10);
  uVar10 = _DAT_150ba6d9c | 0x202;
  *(undefined8 *)(uVar18 - 8) = 0;
  *(undefined8 *)(uVar18 - 0x10) = 0;
  *(ulonglong *)(uVar18 - 0x18) = (ulonglong)uVar10;
  *(undefined8 *)(uVar18 - 0x20) = 0x10336265;
  *(undefined8 *)(uVar18 - 0x28) = 0x140802655;
  FUN_1407bcd5b();
  uVar19 = (ulonglong)((int)(uVar18 - 0x20) + 0x10);
  *(ulonglong *)(uVar19 - 8) = CONCAT62(_DAT_150b914c8,_DAT_150b914c6);
  *(ulonglong *)(uVar19 - 0x10) = CONCAT26(uRam0000000150b914ce,_DAT_150b914c8);
  *(undefined8 *)(uVar19 - 0x18) = 0x140802669;
  FUN_1407bcf64();
  uVar20 = (ulonglong)((int)(uVar19 - 0x10) + 8);
  *(undefined8 *)(uVar20 - 8) = 0x140802671;
  lVar8 = FUN_1407bd90a();
  if ((int)lVar8 != 0) {
    if (*(char *)(lVar8 + 8) != '\0') {
      DAT_150ba6e15 = 1;
    }
    return (ulonglong)_DAT_f02f883103a4770;
  }
  DAT_150ba6e85 = 0;
  *(undefined8 *)(uVar20 - 8) = 3;
  *(undefined8 *)(uVar20 - 0x10) = 0x1408026fc;
  uVar6 = FUN_1407bd085();
  uVar21 = (ulonglong)((int)(uVar20 - 8) + 4);
  *(undefined4 *)(unaff_RSI + 0xc) = uVar6;
  if (DAT_150b9157a == '\x01') {
    if ((DAT_150ba6e69 & 4) != 0) {
      *(undefined8 *)(uVar21 - 8) = 0x14080271a;
      FUN_1407be87e();
      if (DAT_150b91592 != '\x01') goto LAB_140802728;
    }
    *(undefined8 *)(uVar21 - 8) = 0x140802728;
    FUN_1407bdeef();
  }
LAB_140802728:
  *(undefined8 *)(uVar21 - 8) = 0x140802730;
  FUN_140753b48(iVar3 + 0x40);
  *(undefined4 *)(unaff_RSI + 0xf8) = 6;
  *(undefined8 *)(uVar21 - 8) = 0xffffffffbf800000;
  puVar13 = (undefined1 *)(uVar21 - 0x10);
  *(undefined8 *)(uVar21 - 0x10) = _DAT_150ba6eb8;
  *(undefined8 *)(uVar21 - 0x18) = 0x14080274d;
  FUN_140753bf2(iVar3 + 0x40);
  do {
    *(undefined8 *)(uVar21 - 0x18) = 0x140802755;
    cVar4 = FUN_14075419a(iVar3 + 0x40);
    uVar10 = _DAT_8981048d103a4780;
    if (cVar4 == '\0') {
      *(undefined8 *)(uVar21 - 0x18) = 0x140802bda;
      FUN_14076d7ab();
      *(float *)(unaff_RSI + 0xb4) = (float)in_ST0;
      *(undefined4 *)(unaff_RSI + 0x20) = *(undefined4 *)(unaff_RSI + 0xb4);
      *(undefined8 *)(uVar21 - 0x18) = 0x140802bf3;
      FUN_14076d799();
      *(float *)(unaff_RSI + 0xb0) = (float)in_ST1;
      *(undefined4 *)(unaff_RSI + 0x70) = *(undefined4 *)(unaff_RSI + 0xb0);
      *(undefined8 *)(uVar21 - 0x18) = 0x140802c0c;
      FUN_14076d7cf();
      *(float *)(unaff_RSI + 0xac) = (float)in_ST2;
      *(undefined4 *)(unaff_RSI + 0x18) = *(undefined4 *)(unaff_RSI + 0xac);
      *(undefined8 *)(uVar21 - 0x18) = 0x140802c25;
      FUN_14076d7bd();
      *(float *)(unaff_RSI + 0xa8) = (float)in_ST3;
      *(undefined4 *)(unaff_RSI + 0xa4) = *(undefined4 *)(unaff_RSI + 0xa8);
      *(undefined8 *)(uVar21 - 0x18) = 0x140802c41;
      uVar6 = FUN_140769dc5();
      *(undefined4 *)(unaff_RSI + 0xc) = uVar6;
      *(undefined8 *)(uVar21 - 0x18) = 0x140802c49;
      FUN_1407baf1e();
      *(undefined4 *)(unaff_RSI + 0xf8) = 0xffffffff;
      *(undefined8 *)(uVar21 - 0x18) = 0x140802c5c;
      thunk_FUN_140753b60(iVar3 + 0x40);
      *(double *)(unaff_RSI + 0x18) = (double)*(float *)(unaff_RSI + 0x18);
      *(double *)(unaff_RSI + 0x10) = (double)*(float *)(unaff_RSI + 0x20);
      *(double *)(unaff_RSI + 0x20) = (double)*(float *)(unaff_RSI + 0xa4);
      *(double *)(unaff_RSI + 0x70) = (double)*(float *)(unaff_RSI + 0x70);
      piVar27 = (int *)(ulonglong)*(uint *)(unaff_RSI + 0xc);
      goto code_r0x000140802c98;
    }
  } while (*(int *)(unaff_RSI + 0x44) <= *(int *)(unaff_RSI + 0x40));
  puVar11 = (uint *)(ulonglong)_DAT_150ba6f04;
  uVar9 = (ulonglong)_DAT_8981048d103a4780;
  pbVar1 = (byte *)((longlong)puVar11 + 0x28b1856);
  *pbVar1 = *pbVar1 & param_4;
  do {
    uVar5 = (uint)puVar11;
    if (*(uint *)(unaff_RSI + 0x20) <= uVar5) break;
    uVar2 = *puVar11;
    puVar11 = (uint *)(ulonglong)(uVar5 + 4);
  } while (uVar2 != uVar10);
  *(uint *)(unaff_RSI + 0x10) = uVar5;
  *(undefined4 *)(unaff_RSI + 0xf8) = 6;
  *(ulonglong *)(uVar21 - 0x18) = uVar9;
  *(undefined8 *)(uVar21 - 0x20) = 0x1408027ae;
  FUN_14076b228();
  puVar22 = (undefined4 *)(ulonglong)((int)(uVar21 - 0x18) - 4);
  puVar22[1] = _DAT_150ba6f1e;
  *puVar22 = 0;
  *(undefined8 *)(puVar22 + -2) = 0x1408027cf;
  FUN_1407bd234();
  uVar23 = (ulonglong)((int)(uVar21 - 0x18) + 4);
  *(undefined8 *)(uVar23 - 8) = 0;
  *(undefined8 *)(uVar23 - 0x10) = 0x1408027da;
  FUN_1407bd4d6();
  uVar24 = (ulonglong)((int)(uVar23 - 8) + 4);
  *(undefined8 *)(uVar24 - 8) = *(undefined8 *)(ulonglong)*(uint *)(unaff_RSI + 0x18);
  *(undefined8 *)(uVar24 - 0x10) = 0x1033a9c0;
  *(ulonglong *)(uVar24 - 0x18) = (ulonglong)(iVar3 + 0x84);
  *(undefined8 *)(uVar24 - 0x20) = 0x1408027f4;
  FUN_14080de97();
  if (-1 < (int)(uVar24 - 0x18) + 0xc) {
                    /* WARNING: Could not recover jumptable at 0x000140802802. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar9 = (**(code **)((ulonglong)_DAT_7703f8831038ee60 * 4 + 0x10302b58))();
    return uVar9;
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

