/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 1407ed713 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_1407ed713(uint param_1,undefined4 param_2)

{
  undefined4 uVar1;
  ushort uVar2;
  ushort uVar3;
  uint uVar4;
  float fVar5;
  ulonglong uVar6;
  longlong lVar7;
  undefined8 uVar8;
  ulonglong uVar9;
  ulonglong uVar10;
  undefined1 *puVar11;
  float *pfVar12;
  ulonglong uVar13;
  float *pfVar14;
  undefined4 *puVar15;
  ulonglong uVar16;
  
  uVar10 = (ulonglong)((int)&stack0xffffffffffffffe0 - 0x48);
  uVar9 = (ulonglong)param_1;
  puVar11 = (undefined1 *)(uVar10 - 8);
  *(undefined8 *)(uVar10 - 8) = 0x2e;
  *(undefined8 *)(uVar10 - 0x10) = 0x1407ed735;
  uVar6 = FUN_1407eae26(param_2);
  if ((int)uVar6 == 0) {
    puVar11 = (undefined1 *)(uVar10 - 0x10);
    *(undefined8 *)(uVar10 - 0x10) = 0xff0e;
    *(undefined8 *)(uVar10 - 0x18) = 0x1407ed745;
    uVar6 = FUN_1407eae26(param_2);
    if ((int)uVar6 == 0) {
      if (_DAT_150b765e1 == (*(uint *)(uVar10 + 0x34) ^ (uint)(uVar10 - 0x10))) {
        return 0;
      }
      uVar4 = *(uint *)(uVar10 + 0x34);
                    /* WARNING: Subroutine does not return */
      *(code **)(uVar10 - 0x18) = FUN_1407ed8fc;
      FUN_1408802b0(uVar4 ^ (uint)(uVar10 - 0x10));
    }
  }
  uVar16 = uVar6 & 0xffffffff;
  *(undefined4 *)(puVar11 + 8) = param_2;
  uVar4 = *(uint *)(uVar6 + 0x28);
  *(uint *)(puVar11 + 4) = uVar4;
  *(ulonglong *)(puVar11 + -8) = (ulonglong)uVar4;
  *(ulonglong *)(puVar11 + -0x10) = uVar9;
  *(undefined8 *)(puVar11 + -0x18) = 0x1407ed761;
  lVar7 = FUN_1407e7fe2();
  pfVar12 = (float *)(ulonglong)((int)(puVar11 + -0x10) + 8);
  *pfVar12 = (*(float *)(uVar16 + 0x10) - *(float *)(uVar16 + 8)) + _DAT_150a78ba6;
  uVar2 = *(ushort *)(lVar7 + 6);
  uVar3 = *(ushort *)(lVar7 + 4);
  pfVar12[-2] = 0.0;
  pfVar12[-1] = 0.0;
  *(ulonglong *)(pfVar12 + -4) = (ulonglong)uVar2;
  *(ulonglong *)(pfVar12 + -6) = (ulonglong)((uint)uVar3 + (uint)uVar3 * 2 + 2);
  *(ulonglong *)(pfVar12 + -8) = uVar9;
  pfVar12[-10] = 3.9819078;
  pfVar12[-9] = 1.4013e-45;
  uVar8 = FUN_1407e7cbf();
  uVar13 = (ulonglong)((int)(pfVar12 + -8) + 0x10);
  *(int *)(uVar13 + 0xc) = (int)uVar8;
  *(undefined8 *)(uVar13 - 8) = uVar8;
  *(ulonglong *)(uVar13 - 0x10) = uVar9;
  *(undefined8 *)(uVar13 - 0x18) = 0x1407ed7a2;
  fVar5 = (float)FUN_1407e7fe2();
  pfVar14 = (float *)(ulonglong)((int)(uVar13 - 0x10) + 8);
  pfVar14[4] = fVar5;
  *(undefined8 *)(((ulonglong)(pfVar14 + 6) & 0xffffffff) + 0x18) = 0;
  *(undefined8 *)(((ulonglong)(pfVar14 + 6) & 0xffffffff) + 0x20) = 0;
  fVar5 = *pfVar14 * _DAT_150aa4420;
  *pfVar14 = fVar5;
  uVar1 = *(undefined4 *)(uVar16 + 4);
  puVar15 = (undefined4 *)(uVar13 - 0x10 & 0xffffffff);
  puVar15[1] = *(float *)(uVar16 + 8) + fVar5 + _DAT_150aa622e;
  *puVar15 = uVar1;
                    /* WARNING: Subroutine does not return */
  *(undefined **)(puVar15 + -2) = &UNK_1407ed7f6;
  FUN_140755a9a();
}

