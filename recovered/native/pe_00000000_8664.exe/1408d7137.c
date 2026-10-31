/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 1408d7137 */

/* WARNING: Instruction at (ram,0x0001408d71ac) overlaps instruction at (ram,0x0001408d71ab)
    */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1408d7137(undefined8 param_1,undefined8 param_2,ulonglong param_3)

{
  char cVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  undefined4 uVar6;
  ulonglong uVar7;
  uint uVar8;
  undefined4 *puVar9;
  ulonglong *puVar10;
  ulonglong *puVar11;
  ulonglong uVar12;
  uint uVar13;
  uint unaff_EDI;
  undefined4 *puVar15;
  ulonglong uStack_20;
  char *pcVar14;
  
  uVar12 = (ulonglong)&stack0xfffffffffffffff8 & 0xffffffff;
  FUN_140884800();
  puVar9 = (undefined4 *)(ulonglong)*(uint *)(uVar12 + 8);
  puVar15 = (undefined4 *)(ulonglong)*(uint *)(uVar12 + 8);
  uVar2 = *(uint *)(uVar12 + 0x10);
  uVar8 = *(int *)(uVar12 + 0x14) + uVar2;
  *(undefined4 *)(uVar12 - 0x1408) =
       *(undefined4 *)
        ((ulonglong)*(uint *)((ulonglong)(uint)((int)*(uint *)(uVar12 + 0xc) >> 6) * 4 + 0x103a5230)
         + 0x18 + (ulonglong)((*(uint *)(uVar12 + 0xc) & 0x3f) * 0x38));
  uVar4 = 0;
  *puVar15 = 0;
  *(uint *)(uVar12 - 0x140c) = uVar8;
  puVar15[1] = 0;
  puVar15[2] = 0;
  puVar11 = &uStack_20;
  uStack_20 = (ulonglong)unaff_EDI;
  if (uVar2 < uVar8) {
    uVar3 = *(uint *)(uVar12 - 0x1408);
    puVar10 = &uStack_20;
    do {
      uVar7 = (ulonglong)uVar4;
      uVar13 = (int)&stack0xfffffffffffffff8 - 0x1404;
      pcVar14 = (char *)(ulonglong)uVar13;
      do {
        if (uVar8 <= uVar2) break;
        cVar1 = *(char *)(ulonglong)uVar2;
        uVar7 = CONCAT71((int7)(uVar7 >> 8),cVar1);
        if (cVar1 != '\n') {
          *pcVar14 = cVar1;
        }
        puVar9[2] = puVar9[2] + 1;
        *pcVar14 = '\r';
        *pcVar14 = (char)param_3;
        param_3 = (ulonglong)((int)&stack0xfffffffffffffff8 - 5);
      } while (uVar13 < (uint)uVar7);
      *(uint *)(uVar12 + 0x10) = uVar2;
      uVar13 = uVar13 - ((int)&stack0xfffffffffffffff8 + -0x1404);
      *(undefined8 *)((longlong)puVar10 + -8) = 0;
      *(ulonglong *)((longlong)puVar10 + -0x10) =
           (ulonglong)((int)&stack0xfffffffffffffff8 - 0x1408);
      *(ulonglong *)((longlong)puVar10 + -0x18) = (ulonglong)uVar13;
      *(ulonglong *)((longlong)puVar10 + -0x20) =
           (ulonglong)((int)&stack0xfffffffffffffff8 - 0x1404);
      *(ulonglong *)((longlong)puVar10 + -0x28) = (ulonglong)uVar3;
      *(undefined8 *)((longlong)puVar10 + -0x30) = 0x1408d71d9;
      iVar5 = (*_DAT_150c352f5)();
      if (iVar5 == 0) {
        *(undefined8 *)((longlong)puVar10 + -0x30) = 0x1408d71ff;
        uVar6 = (*_DAT_150c3518f)();
        *puVar9 = uVar6;
        puVar11 = (ulonglong *)((longlong)puVar10 + -0x28);
        break;
      }
      uVar4 = *(uint *)(uVar12 - 0x1408);
      puVar9[1] = puVar9[1] + uVar4;
      puVar11 = (ulonglong *)((longlong)puVar10 + -0x28);
      if (uVar4 < uVar13) break;
      uVar2 = *(uint *)(uVar12 + 0x10);
      uVar8 = *(uint *)(uVar12 - 0x140c);
      puVar11 = (ulonglong *)((longlong)puVar10 + -0x28);
      puVar10 = (ulonglong *)((longlong)puVar10 + -0x28);
    } while (uVar2 < uVar8);
  }
  uVar2 = *(uint *)(uVar12 - 4);
                    /* WARNING: Subroutine does not return */
  *(undefined **)((longlong)puVar11 + 0x10) = &UNK_1408d7210;
  FUN_1408802b0(uVar2 ^ (uint)&stack0xfffffffffffffff8);
}

