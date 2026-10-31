/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 1401438ec */

void FUN_1401438ec(longlong param_1)

{
  int *piVar1;
  short sVar2;
  int iVar3;
  longlong lVar4;
  ushort *puVar5;
  short sVar6;
  int iVar7;
  ulonglong uVar8;
  short *psVar9;
  short sVar10;
  int iVar11;
  short sVar13;
  int iVar14;
  int iVar15;
  int *piVar16;
  short sVar17;
  int iVar18;
  int iVar12;
  
  if ((*(byte *)(param_1 + 0x411) & 1) != 0) {
    lVar4 = *(longlong *)(param_1 + 0x408);
    puVar5 = *(ushort **)(lVar4 + 0x60);
    piVar16 = *(int **)(puVar5 + 0x14);
    if ((piVar16 == (int *)0x0) || (uVar8 = (ulonglong)*puVar5, uVar8 == 0)) {
      sVar10 = 0;
      sVar17 = 0;
      sVar13 = 0;
    }
    else {
      piVar1 = piVar16 + uVar8 * 3;
      iVar18 = 0;
      iVar11 = 0;
      iVar14 = 0;
      do {
        psVar9 = (short *)FUN_140143414(param_1,*piVar16);
        iVar7 = FUN_1401412d4(param_1,*(longlong *)(lVar4 + 0x60) + 8,(short)piVar16[1],
                              *(undefined2 *)((longlong)piVar16 + 6));
        iVar12 = iVar11;
        iVar15 = iVar14;
        if ((psVar9 != (short *)0x0) && (iVar7 != 0)) {
          *psVar9 = (short)piVar16[2] + (short)iVar7;
          iVar3 = *piVar16;
          iVar15 = iVar7;
          if ((iVar3 != 0x68617363) &&
             ((iVar12 = iVar7, iVar15 = iVar14, iVar3 != 0x686c6770 &&
              (iVar12 = iVar11, iVar3 == 0x68647363)))) {
            iVar18 = iVar7;
          }
        }
        sVar17 = (short)iVar18;
        sVar13 = (short)iVar15;
        sVar10 = (short)iVar12;
        piVar16 = piVar16 + 3;
        iVar11 = iVar12;
        iVar14 = iVar15;
      } while (piVar16 < piVar1);
    }
    sVar2 = *(short *)(param_1 + 0x6a);
    sVar13 = sVar13 + sVar2;
    *(short *)(param_1 + 0x6a) = sVar13;
    sVar6 = (short)*(undefined4 *)(param_1 + 0x6c);
    sVar17 = sVar17 + sVar6;
    *(short *)(param_1 + 0x6c) = sVar17;
    *(short *)(param_1 + 0x6e) =
         (sVar13 + sVar6 + ((sVar10 + *(short *)(param_1 + 0x6e)) - sVar2)) - sVar17;
    *(short *)(param_1 + 0x74) =
         (short)*(undefined4 *)(param_1 + 0x278) - *(short *)(param_1 + 0x27a) / 2;
    *(short *)(param_1 + 0x76) = *(short *)(param_1 + 0x27a);
    if ((*(longlong *)(param_1 + 0x2f0) != 0) &&
       (*(longlong *)(*(longlong *)(param_1 + 0x2f0) + 0x40) != 0)) {
      FUN_14012ea7a(param_1 + 0xa8,FUN_140143d70);
      return;
    }
  }
  return;
}

