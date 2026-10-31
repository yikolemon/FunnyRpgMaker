/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 1407a1257 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1407a1257(void)

{
  float fVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  char cVar7;
  uint uVar8;
  uint *puVar10;
  ulonglong uVar11;
  ulonglong uVar12;
  longlong unaff_R14;
  undefined8 auStack_30 [2];
  ulonglong uVar9;
  
  uVar6 = _DAT_150b3e9ae;
  uVar12 = (ulonglong)_DAT_150b3e9ae;
  uVar2 = *(uint *)(uVar12 + 0x14cc);
  uVar11 = (ulonglong)uVar2;
  auStack_30[0] = 0;
  FUN_14076d07f();
  puVar10 = (uint *)(ulonglong)((int)auStack_30 + 4);
  uVar8 = *(uint *)(uVar11 + 0x1cc);
  uVar3 = *(uint *)(uVar11 + 0x1d0);
  *(ulonglong *)(unaff_R14 + 0x1cc) = (ulonglong)uVar8;
  if ((uVar3 >> (uVar8 & 0x1f) & 1) != 0) {
    iVar4 = *(int *)(uVar12 + 0x1fd4);
    iVar5 = *(int *)(uVar12 + 0x1fdc);
    uVar8 = (iVar5 + iVar4 * 0x28) - 0x28;
    uVar9 = (ulonglong)uVar8;
    if (((((*(byte *)(uVar9 + 6) & 2) != 0) && (*(char *)(uVar12 + 0x2043) == '\x01')) &&
        (*(int *)(uVar12 + 0x20e8) == 0)) && (*(uint *)(uVar12 + 0x2048) == uVar2)) {
      *puVar10 = uVar8;
      puVar10[-2] = 0x407a12d3;
      puVar10[-1] = 1;
      cVar7 = FUN_14076f185();
      uVar9 = (ulonglong)*puVar10;
      if (cVar7 != '\0') {
        *(ulonglong *)(puVar10 + -2) = uVar9;
        *(ulonglong *)(puVar10 + -4) = (ulonglong)(uVar6 + 0x2120);
        puVar10[-6] = 0x407a12e7;
        puVar10[-5] = 1;
        FUN_14076f1aa();
        uVar9 = (ulonglong)puVar10[-2];
        puVar10 = (uint *)(ulonglong)((int)(puVar10 + -4) + 8);
      }
    }
    fVar1 = *(float *)((ulonglong)(uint)(iVar5 + iVar4 * 0x28) - 0xc);
    if (((fVar1 != _DAT_150a59cae) || (NAN(fVar1) || NAN(_DAT_150a59cae))) &&
       (*(float *)(uVar11 + 0x290) <= *(float *)(uVar11 + 0x148))) {
      *(ulonglong *)((longlong)puVar10 + -8) = uVar9;
      *(undefined8 *)((longlong)puVar10 + -0x10) = 0x1407a1315;
      FUN_1407a1085();
    }
    *(int *)(uVar12 + 0x1fd4) = *(int *)(uVar12 + 0x1fd4) + -1;
    *(undefined8 *)(uVar11 + 0x1d0) = *(undefined8 *)(uVar11 + 0x1d0);
  }
  FUN_14076b438();
  return;
}

