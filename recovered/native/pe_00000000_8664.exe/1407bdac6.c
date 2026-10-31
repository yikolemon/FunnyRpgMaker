/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 1407bdac6 */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Removing unreachable block (ram,0x0001407bdbf8) */
/* WARNING: Removing unreachable block (ram,0x0001407bdc00) */

void FUN_1407bdac6(void)

{
  short sVar1;
  byte bVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  ulonglong uVar6;
  byte *pbVar7;
  ushort uVar8;
  uint uVar9;
  uint uVar10;
  int iVar11;
  uint uVar12;
  uint uVar13;
  uint *puVar14;
  uint uVar15;
  longlong unaff_R12;
  uint unaff_R14D;
  uint unaff_R15D;
  bool bVar16;
  
  puVar14 = (uint *)(ulonglong)((int)&stack0xffffffffffffffe0 - 0x14);
  uVar6 = (ulonglong)puVar14[10];
  uVar4 = *(uint *)(uVar6 + 0x40);
  puVar14[1] = uVar4;
  if (0 < (int)uVar4) {
    uVar4 = 0;
    uVar15 = 0;
    uVar9 = 0;
    do {
      puVar14[2] = uVar9;
      uVar6 = (ulonglong)*(uint *)((ulonglong)puVar14[10] + 0x10);
      uVar8 = *(ushort *)(uVar6 + 0x5e);
      puVar14[3] = uVar4;
      *puVar14 = uVar15;
      if (uVar8 == 0xffff) {
LAB_1407bdb21:
        uVar8 = 0;
      }
      else if (*(char *)(uVar6 + 0x66) == '\0') {
        *(undefined2 *)(uVar6 + 0x5e) = 0xffff;
        puVar14[1] = *(uint *)((ulonglong)puVar14[10] + 0x40);
        goto LAB_1407bdb21;
      }
      uVar15 = 0 << ((byte)uVar8 & 0x1f);
      bVar16 = (uVar8 & 0x20) != 0;
      uVar9 = 0;
      if (bVar16) {
        uVar9 = uVar15;
      }
      if (bVar16) {
        uVar15 = 0;
      }
      if (uVar8 == 0xffff) {
        uVar15 = 0;
        uVar9 = 0;
      }
      uVar9 = puVar14[2] | uVar9;
      uVar15 = *puVar14 | uVar15;
      uVar4 = puVar14[3] + (uint)(uVar8 != 0xffff);
    } while (0 < (int)puVar14[1]);
    bVar2 = (byte)uVar4 & 0x1f;
    uVar12 = 0 << ((byte)uVar4 & 0x1f);
    uVar10 = 0;
    uVar13 = uVar12;
    uVar3 = 0 << bVar2 | 0U >> 0x20 - bVar2;
    if ((uVar4 & 0x20) != 0) {
      uVar13 = 0;
      uVar3 = uVar12;
    }
    if (uVar4 != 0) {
      uVar10 = CONCAT31((int3)(puVar14[10] >> 8),(*(byte *)((ulonglong)puVar14[10] + 7) & 4) == 0);
    }
    puVar14[4] = uVar10;
    if (uVar4 != 0 &&
        (((byte)uVar10 ^ 1) & (uVar3 == uVar9 + CARRY4(unaff_R14D,unaff_R15D) && uVar13 == uVar15))
        == 0) {
      uVar15 = 0;
      puVar14[2] = 0;
      uVar6 = (ulonglong)puVar14[10];
      puVar14[3] = uVar4;
      do {
        puVar14[1] = uVar15;
        iVar11 = *(int *)(uVar6 + 0x40);
        puVar14[0] = 0;
        puVar14[1] = 0;
        if (0 < iVar11) {
          *(undefined8 *)((longlong)puVar14 + unaff_R12) = 0;
          do {
            sVar1 = *(short *)((ulonglong)*(uint *)((ulonglong)puVar14[10] + 0x10) + 0x5e);
            if ((sVar1 != -1) &&
               ((*puVar14 == -1 ||
                (sVar1 < *(short *)((ulonglong)*(uint *)((ulonglong)puVar14[10] + 0x10) + 0x5e +
                                   (ulonglong)(*puVar14 * 0x74)))))) {
              *puVar14 = 0;
            }
          } while (iVar11 != 0);
        }
        uVar6 = (ulonglong)puVar14[10];
        iVar11 = *puVar14;
        uVar15 = puVar14[1];
        *(short *)((ulonglong)*(uint *)(uVar6 + 0x10) + 0x5e + (ulonglong)(uint)(iVar11 * 0x74)) =
             (short)uVar15;
        if ((char)puVar14[4] != '\0') {
          iVar5 = *(int *)(uVar6 + 0x40);
          if (iVar5 < 1) {
            halt_baddata();
          }
          do {
            if (iVar11 != 0) {
              uVar4 = puVar14[10];
              *(undefined2 *)((ulonglong)*(uint *)((ulonglong)uVar4 + 0x10) + 0x5e) = 0xffff;
              iVar5 = *(int *)((ulonglong)uVar4 + 0x40);
              iVar11 = *puVar14;
            }
          } while (0 < iVar5);
          uVar4 = 0;
          uVar6 = (ulonglong)*(uint *)((longlong)puVar14 + unaff_R12 + 0x28);
          break;
        }
        puVar14[2] = puVar14[2];
        uVar4 = puVar14[3];
      } while (uVar15 != uVar4);
      goto LAB_1407bdd0b;
    }
    uVar6 = (ulonglong)puVar14[10];
    if (uVar4 != 0) goto LAB_1407bdd0b;
  }
  uVar4 = 0;
  if (((*(byte *)(uVar6 + 7) & 8) == 0) && (0 < *(int *)(uVar6 + 0x40))) {
    uVar15 = *(int *)(uVar6 + 0x10) + 0x72;
    do {
      pbVar7 = (byte *)(ulonglong)uVar15;
      if ((pbVar7[-0xc] == 1) && ((pbVar7[-0x71] & 2) == 0)) {
        pbVar7[-0x14] = 0;
        pbVar7[-0x13] = 0;
        pbVar7[-1] = pbVar7[-1] & 0xfc | *pbVar7 & 3;
                    /* WARNING: Bad instruction - Truncating control flow here */
        halt_baddata();
      }
      uVar15 = uVar15 + 0x74;
    } while (uVar15 != 0);
  }
LAB_1407bdd0b:
  *(short *)(uVar6 + 0x1b4) = (short)uVar4;
  return;
}

