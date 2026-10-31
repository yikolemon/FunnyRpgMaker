/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 101b0c43 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101b0c43(void)

{
  char cVar1;
  void *pvVar2;
  int iVar3;
  undefined *puVar4;
  uint uVar5;
  int iVar6;
  int iVar7;
  float10 fVar8;
  float10 fVar9;
  uint uVar10;
  uint uVar11;
  float fVar12;
  double dVar13;
  undefined8 uVar14;
  ulonglong uVar15;
  undefined4 uVar16;
  undefined4 uVar17;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined8 local_40;
  undefined8 local_38;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  uint local_18;
  
  local_18 = DAT_10388d00 ^ (uint)&stack0xfffffffc;
  cVar1 = FUN_10147d77();
  if (cVar1 != '\0') {
    FUN_101032c6();
    FUN_101032c6();
    cVar1 = FUN_10147d77();
    if (cVar1 != '\0') {
      local_38 = 0;
      FUN_101496ab("1. I am selectable",&DAT_1038ab8c,0);
      local_38 = 0;
      FUN_101496ab("2. I am selectable",&DAT_1038ab8d,0);
      local_38 = 0;
      FUN_101496ab("3. I am selectable",&DAT_1038ab8e,0);
      local_38 = 0;
      cVar1 = FUN_10133727("4. I am double clickable",DAT_1038ab8f,4);
      if (cVar1 != '\0') {
        cVar1 = FUN_10113f85();
        if (cVar1 != '\0') {
          DAT_1038ab8f = DAT_1038ab8f ^ 1;
        }
      }
      FUN_10149387();
    }
    FUN_101032c6();
    cVar1 = FUN_10147d77();
    if (cVar1 != '\0') {
      FUN_101032c6();
      FUN_1010c007();
      local_38 = 0;
      FUN_101496ab("main.c",&DAT_103a4040,0);
      FUN_10114a0e(0);
      FUN_1012e1ca();
      FUN_1010c007();
      local_38 = 0;
      FUN_101496ab("hello.cpp",&DAT_103a4041,0);
      FUN_10114a0e(0);
      FUN_1012e1ca();
      FUN_1010c007();
      local_38 = 0;
      FUN_101496ab("hello.h",&DAT_103a4042,0);
      FUN_10114a0e(0);
      FUN_1012e1ca();
      FUN_10131d29();
      FUN_100fdb2e(&local_38,"x",0,0);
      uVar15 = local_38 & 0xffffffff;
      uVar16 = 0;
      uVar17 = 0;
      uVar5 = 0;
      do {
        FUN_10113358();
        FUN_10131ed3(uVar15,uVar16,uVar17);
        local_38 = 0;
        cVar1 = FUN_10133727("##selectable",uVar5 == DAT_103a4048,0x10);
        if (cVar1 != '\0') {
          DAT_103a4048 = uVar5;
        }
        FUN_10114a0e(0);
        FUN_1012ff1a("##check");
        FUN_10114a0e(0);
        uVar10 = -(uint)((uVar5 & (uint)DAT_102b7290) == 0);
        uVar11 = -(uint)((uVar5 & DAT_102b7290._4_4_) == 0);
        local_38 = CONCAT44(uVar11 & _UNK_102b9124 | ~uVar11 & DAT_102b70a0._4_4_,
                            uVar10 & _DAT_102b9120 | ~uVar10 & (uint)DAT_102b70a0);
        uStack_30 = (undefined4)DAT_103029a0;
        uStack_2c = DAT_103029a0._4_4_;
        local_40 = uVar15;
        FUN_10144b9b("##color",&local_38,0x40);
        FUN_10114a0e(0);
        FUN_1012d08c();
        FUN_10113568();
        uVar5 = uVar5 + 1;
      } while (uVar5 != 5);
      FUN_10149387();
    }
    cVar1 = FUN_10147d77();
    if (cVar1 != '\0') {
      FUN_101032c6();
      local_38 = 0;
      cVar1 = FUN_1015f834("split1",3,0x791,&local_38);
      if (cVar1 != '\0') {
        iVar6 = 0;
        do {
          FUN_101b5fc7();
          FUN_101657a1();
          local_40 = 0;
          FUN_101496ab(&local_38,&DAT_103a404c + iVar6,0);
          iVar6 = iVar6 + 1;
        } while (iVar6 != 10);
        FUN_1016304e();
      }
      FUN_10131d29();
      local_38 = 0;
      cVar1 = FUN_1015f834("split2",3,0x791,&local_38);
      if (cVar1 != '\0') {
        iVar6 = 0;
        do {
          FUN_101b5fc7();
          FUN_10165364(0);
          FUN_101657a1();
          local_40 = 0;
          FUN_101496ab(&local_38,&DAT_103a404c + iVar6,2);
          FUN_101657a1();
          FUN_1012d08c();
          FUN_101657a1();
          FUN_1012d08c();
          iVar6 = iVar6 + 1;
        } while (iVar6 != 10);
        FUN_1016304e();
      }
      FUN_10149387();
    }
    cVar1 = FUN_10147d77();
    if (cVar1 != '\0') {
      FUN_101032c6();
      fVar8 = (float10)FUN_10103354();
      dVar13 = (double)fVar8;
      pvVar2 = _memchr(&DAT_1038ab91,0,0x10);
      if (pvVar2 == (void *)0x0) {
        fVar12 = (float)dVar13;
        dVar13 = (double)CONCAT44((int)((ulonglong)dVar13 >> 0x20),fVar12);
        fVar8 = (float10)FUN_102704b0((double)(DAT_102b6c58 * fVar12),fVar12);
        fVar9 = (float10)FUN_1026d4b0((double)(SUB84(dVar13,0) + SUB84(dVar13,0)));
        local_38 = CONCAT44((float)fVar8 * DAT_102b89c0._4_4_ + DAT_102b89c0._4_4_,
                            (float)fVar9 * (float)DAT_102b89c0 + (float)DAT_102b89c0);
        FUN_100fd3bc(0x25,&local_38);
      }
      uVar16 = (undefined4)((ulonglong)dVar13 >> 0x20);
      iVar7 = 0;
      FUN_100fdb2e(&local_38,"Sailor",0,0,0xbf800000);
      uVar14 = CONCAT44(uVar16,(undefined4)local_38);
      iVar6 = 0;
      do {
        iVar3 = 0;
        do {
          if (iVar3 != 0) {
            FUN_10114a0e(0,0xbf800000,uVar14);
          }
          FUN_10113358();
          local_38 = CONCAT44((int)uVar14,(int)uVar14);
          cVar1 = FUN_10133727("Sailor",(&DAT_1038ab91)[iVar3 + iVar7] != '\0');
          if (cVar1 != '\0') {
            (&DAT_1038ab91)[iVar3 + iVar7] = (&DAT_1038ab91)[iVar3 + iVar7] ^ 1;
            if ((iVar3 == 0) ||
               ((&DAT_1038ab90)[iVar3 + iVar7] = (&DAT_1038ab90)[iVar3 + iVar7] ^ 1, iVar3 != 3)) {
              (&DAT_1038ab92)[iVar3 + iVar7] = (&DAT_1038ab92)[iVar3 + iVar7] ^ 1;
            }
            if ((iVar6 == 0) ||
               ((&DAT_1038ab8d)[iVar3 + iVar7] = (&DAT_1038ab8d)[iVar3 + iVar7] ^ 1, iVar6 != 3)) {
              (&DAT_1038ab95)[iVar3 + iVar7] = (&DAT_1038ab95)[iVar3 + iVar7] ^ 1;
            }
          }
          FUN_10113568();
          iVar3 = iVar3 + 1;
        } while (iVar3 != 4);
        iVar6 = iVar6 + 1;
        iVar7 = iVar7 + 4;
      } while (iVar6 != 4);
      if (pvVar2 == (void *)0x0) {
        FUN_100fd4c4();
      }
      FUN_10149387();
    }
    cVar1 = FUN_10147d77();
    if (cVar1 != '\0') {
      FUN_101032c6();
      FUN_1011eaad();
      iVar6 = 0;
      FUN_100fdb2e(&local_38,"(1.0,1.0)",0,0,0xbf800000);
      uVar16 = (undefined4)local_38;
      puVar4 = &DAT_1038aba1;
      do {
        fVar12 = (float)iVar6 * DAT_102b70e0;
        uVar15 = (ulonglong)(uint)fVar12;
        iVar7 = 0;
        do {
          local_40 = CONCAT44((int)uVar15,(float)iVar7 * DAT_102b70e0);
          FUN_101b5fc7(&local_38,"(%.1f,%.1f)",(double)((float)iVar7 * DAT_102b70e0),(double)fVar12)
          ;
          if (iVar7 != 0) {
            FUN_10114a0e(0,0xbf800000);
          }
          FUN_100fd3bc(0x25,&local_40);
          uStack_48 = uVar16;
          uStack_44 = uVar16;
          FUN_101496ab(&local_38,puVar4 + iVar7,0,&uStack_48);
          FUN_100fd4c4();
          iVar7 = iVar7 + 1;
        } while (iVar7 != 3);
        iVar6 = iVar6 + 1;
        puVar4 = puVar4 + 3;
      } while (iVar6 != 3);
      FUN_10149387();
    }
    FUN_10149387();
  }
  if (DAT_10388d00 == (local_18 ^ (uint)&stack0xfffffffc)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_102283e0();
}

