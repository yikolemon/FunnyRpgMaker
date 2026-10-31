/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 1408d7212 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1408d7212(void)

{
  short sVar1;
  int iVar2;
  undefined4 uVar3;
  short *psVar4;
  uint uVar5;
  undefined4 *puVar6;
  undefined1 *puVar7;
  ulonglong *puVar8;
  ulonglong uVar9;
  uint uVar10;
  short *psVar11;
  uint unaff_EDI;
  undefined4 *puVar12;
  ulonglong uStack_20;
  
  uVar9 = (ulonglong)&stack0xfffffffffffffff8 & 0xffffffff;
  FUN_140884800();
  puVar6 = (undefined4 *)(ulonglong)*(uint *)(uVar9 + 8);
  puVar12 = (undefined4 *)(ulonglong)*(uint *)(uVar9 + 8);
  uVar10 = *(uint *)(uVar9 + 0x10);
  uVar5 = *(int *)(uVar9 + 0x14) + uVar10;
  *(undefined4 *)(uVar9 - 0x1408) =
       *(undefined4 *)
        ((ulonglong)*(uint *)((ulonglong)(uint)((int)*(uint *)(uVar9 + 0xc) >> 6) * 4 + 0x103a5230)
         + 0x18 + (ulonglong)((*(uint *)(uVar9 + 0xc) & 0x3f) * 0x38));
  *puVar12 = 0;
  *(uint *)(uVar9 - 0x1410) = uVar5;
  puVar12[1] = 0;
  puVar12[2] = 0;
  puVar8 = &uStack_20;
  uStack_20 = (ulonglong)unaff_EDI;
  do {
    psVar4 = (short *)(ulonglong)uVar10;
    if (uVar5 <= uVar10) {
LAB_1408d72ea:
      uVar5 = *(uint *)(uVar9 - 4);
                    /* WARNING: Subroutine does not return */
      *(undefined **)((longlong)puVar8 + 0x10) = &UNK_1408d72f9;
      FUN_1408802b0(uVar5 ^ (uint)&stack0xfffffffffffffff8);
    }
    psVar11 = (short *)(ulonglong)((int)&stack0xfffffffffffffff8 - 0x1404);
    do {
      if (uVar5 <= (uint)psVar4) break;
      sVar1 = *psVar4;
      psVar4 = (short *)(ulonglong)((uint)psVar4 + 2);
      if (sVar1 == 10) {
        puVar6[2] = puVar6[2] + 2;
        *(undefined8 *)((longlong)puVar8 + -8) = 0xd;
        *psVar11 = (short)*(undefined8 *)((longlong)puVar8 + -8);
        psVar11 = (short *)(ulonglong)((int)psVar11 + 2);
      }
      *psVar11 = sVar1;
      uVar10 = (int)psVar11 + 2;
      psVar11 = (short *)(ulonglong)uVar10;
    } while (uVar10 < (int)&stack0xfffffffffffffff8 - 6U);
    uVar5 = *(uint *)(uVar9 - 0x1408);
    uVar10 = (int)psVar11 - ((int)&stack0xfffffffffffffff8 + -0x1404);
    *(int *)(uVar9 + 0x10) = (int)psVar4;
    *(undefined8 *)((longlong)puVar8 + -8) = 0;
    *(ulonglong *)((longlong)puVar8 + -0x10) = (ulonglong)((int)&stack0xfffffffffffffff8 - 0x140c);
    *(ulonglong *)((longlong)puVar8 + -0x18) = (ulonglong)uVar10;
    *(ulonglong *)((longlong)puVar8 + -0x20) = (ulonglong)((int)&stack0xfffffffffffffff8 - 0x1404);
    puVar7 = (undefined1 *)((longlong)puVar8 + -0x28);
    *(ulonglong *)((longlong)puVar8 + -0x28) = (ulonglong)uVar5;
    *(undefined8 *)((longlong)puVar8 + -0x30) = 0x1408d72c2;
    iVar2 = (*_DAT_150c353de)();
    if (iVar2 == 0) {
      *(undefined8 *)((longlong)puVar8 + -0x30) = 0x1408d72e8;
      uVar3 = (*_DAT_150c35278)();
      *puVar6 = uVar3;
      puVar8 = (ulonglong *)((longlong)puVar8 + -0x28);
      goto LAB_1408d72ea;
    }
    uVar5 = *(uint *)(uVar9 - 0x140c);
    puVar6[1] = puVar6[1] + uVar5;
    puVar8 = (ulonglong *)((longlong)puVar8 + -0x28);
    if (uVar5 < uVar10) goto LAB_1408d72ea;
    uVar10 = *(uint *)(uVar9 + 0x10);
    uVar5 = *(uint *)(uVar9 - 0x1410);
    puVar8 = (ulonglong *)puVar7;
  } while( true );
}

