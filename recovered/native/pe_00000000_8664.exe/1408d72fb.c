/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 1408d72fb */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1408d72fb(void)

{
  short sVar1;
  code *pcVar2;
  int iVar3;
  undefined4 uVar4;
  short *psVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  undefined1 *puVar9;
  undefined1 *puVar10;
  ulonglong *puVar11;
  ulonglong *puVar12;
  ulonglong uVar13;
  uint unaff_EDI;
  undefined4 *puVar14;
  short *psVar15;
  ulonglong uStack_20;
  
  uVar13 = (ulonglong)&stack0xfffffffffffffff8 & 0xffffffff;
  FUN_140884800();
  uVar7 = *(uint *)(uVar13 + 0x10);
  puVar11 = &uStack_20;
  uStack_20 = (ulonglong)unaff_EDI;
  puVar14 = (undefined4 *)(ulonglong)*(uint *)(uVar13 + 8);
  iVar3 = *(int *)(uVar13 + 0x14);
  *(undefined4 *)(uVar13 - 0x1410) =
       *(undefined4 *)
        ((ulonglong)*(uint *)((ulonglong)(uint)((int)*(uint *)(uVar13 + 0xc) >> 6) * 4 + 0x103a5230)
         + 0x18 + (ulonglong)((*(uint *)(uVar13 + 0xc) & 0x3f) * 0x38));
  uVar6 = iVar3 + uVar7;
  *(uint *)(uVar13 - 0x140c) = uVar6;
  *puVar14 = 0;
  puVar14[1] = 0;
  puVar14[2] = 0;
  psVar15 = (short *)(ulonglong)uVar7;
  puVar12 = &uStack_20;
  if (uVar7 < uVar6) {
    do {
      uVar7 = *(uint *)(uVar13 - 0x140c);
      psVar5 = (short *)(ulonglong)((int)&stack0xfffffffffffffff8 - 0x6b0);
      do {
        if (uVar7 <= (uint)psVar15) break;
        sVar1 = *psVar15;
        psVar15 = (short *)(ulonglong)((uint)psVar15 + 2);
        if (sVar1 == 10) {
          *(undefined8 *)((longlong)puVar11 + -8) = 0xd;
          *psVar5 = (short)*(undefined8 *)((longlong)puVar11 + -8);
          psVar5 = (short *)(ulonglong)((int)psVar5 + 2);
        }
        *psVar5 = sVar1;
        uVar6 = (int)psVar5 + 2;
        psVar5 = (short *)(ulonglong)uVar6;
      } while (uVar6 < (int)&stack0xfffffffffffffff8 - 8U);
      *(undefined8 *)((longlong)puVar11 + -8) = 0;
      *(undefined8 *)((longlong)puVar11 + -0x10) = 0;
      *(undefined8 *)((longlong)puVar11 + -0x18) = 0xd55;
      *(ulonglong *)((longlong)puVar11 + -0x20) =
           (ulonglong)((int)&stack0xfffffffffffffff8 - 0x1408);
      uVar7 = (int)&stack0xfffffffffffffff8 - 0x6b0;
      *(ulonglong *)((longlong)puVar11 + -0x28) = (ulonglong)(uint)((int)((int)psVar5 - uVar7) >> 1)
      ;
      *(ulonglong *)((longlong)puVar11 + -0x30) = (ulonglong)uVar7;
      *(undefined8 *)((longlong)puVar11 + -0x38) = 0;
      *(undefined8 *)((longlong)puVar11 + -0x40) = 0xfde9;
      *(undefined8 *)((longlong)puVar11 + -0x48) = 0x1408d73b3;
      uVar6 = FUN_1408cc153();
      uVar7 = *(uint *)(uVar13 + 8);
      puVar9 = (undefined1 *)(ulonglong)((int)(undefined1 *)((longlong)puVar11 + -0x40) + 0x20);
      *(uint *)(uVar13 - 0x1418) = uVar6;
      if (uVar6 == 0) {
LAB_1408d7414:
        pcVar2 = _DAT_150c353aa;
        *(undefined8 *)(puVar9 + -8) = 0x1408d741a;
        uVar4 = (*pcVar2)();
        *(undefined4 *)(ulonglong)uVar7 = uVar4;
        puVar12 = (ulonglong *)puVar9;
        break;
      }
      uVar8 = 0;
      puVar10 = puVar9;
      puVar11 = (ulonglong *)puVar9;
      if (uVar6 != 0) {
        do {
          *(undefined8 *)(puVar10 + -8) = 0;
          *(ulonglong *)(puVar10 + -0x10) = (ulonglong)((int)&stack0xfffffffffffffff8 - 0x1414);
          *(ulonglong *)(puVar10 + -0x18) = (ulonglong)(uVar6 - uVar8);
          *(ulonglong *)(puVar10 + -0x20) =
               (ulonglong)((int)&stack0xfffffffffffffff8 + -0x1408 + uVar8);
          puVar11 = (ulonglong *)(puVar10 + -0x28);
          puVar9 = puVar10 + -0x28;
          *(undefined8 *)(puVar10 + -0x28) = *(undefined8 *)(uVar13 - 0x1410);
          pcVar2 = _DAT_150c35506;
          *(undefined8 *)(puVar10 + -0x30) = 0x1408d73ea;
          iVar3 = (*pcVar2)();
          if (iVar3 == 0) goto LAB_1408d7414;
          uVar8 = uVar8 + *(int *)(uVar13 - 0x1414);
          uVar6 = *(uint *)(uVar13 - 0x1418);
          puVar10 = puVar10 + -0x28;
        } while (uVar8 < uVar6);
      }
      ((undefined4 *)(ulonglong)uVar7)[1] = (uint)psVar15 - *(int *)(uVar13 + 0x10);
      puVar12 = puVar11;
    } while ((uint)psVar15 < *(uint *)(uVar13 - 0x140c));
  }
  uVar7 = *(uint *)(uVar13 - 4);
                    /* WARNING: Subroutine does not return */
  *(undefined **)((longlong)puVar12 + 0x10) = &UNK_1408d742b;
  FUN_1408802b0(uVar7 ^ (uint)&stack0xfffffffffffffff8);
}

