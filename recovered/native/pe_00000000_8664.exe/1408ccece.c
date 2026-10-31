/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 1408ccece */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_1408ccece(void)

{
  undefined8 uVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  uint *puVar6;
  ulonglong *puVar7;
  ulonglong *puVar8;
  undefined1 *puVar9;
  ulonglong uVar10;
  ulonglong uVar11;
  uint unaff_EDI;
  uint uVar12;
  ulonglong uStack_30;
  ulonglong uStack_28;
  
  uStack_28 = (ulonglong)unaff_EDI;
  uVar10 = (ulonglong)&stack0xfffffffffffffff8 & 0xffffffff;
  puVar7 = &uStack_28;
  uVar12 = *(uint *)(uVar10 + 0x10);
  do {
    if (uVar12 == *(uint *)(uVar10 + 0x14)) {
      iVar5 = 0;
LAB_1408ccf1d:
      *(undefined8 *)((longlong)puVar7 + -8) = 0xe;
      *(undefined8 *)((longlong)puVar7 + -0x10) = 0x1408ccf24;
      FUN_1408c1f00();
      uVar1 = *(undefined8 *)((longlong)puVar7 + -8);
      *(ulonglong *)((longlong)puVar7 + -8) = (ulonglong)((int)&stack0xfffffffffffffff8 - 4);
      *(undefined8 *)((longlong)puVar7 + -0x10) = 4;
      *(undefined8 *)((longlong)puVar7 + -0x18) = 0x80;
      puVar9 = (undefined1 *)((longlong)puVar7 + -0x20);
      *(undefined8 *)((longlong)puVar7 + -0x20) = 0x103a9000;
      *(undefined8 *)((longlong)puVar7 + -0x28) = 0x1408ccf3d;
      iVar3 = (*_DAT_150c2b02d)(uVar1);
      if (iVar3 != 0) {
        iVar3 = *(int *)(uVar10 + 8);
        *(undefined8 *)((longlong)puVar7 + -0x28) = 0xffffffffffffffff;
        iVar4 = iVar5;
        if (iVar5 == 0) {
          iVar4 = (int)*(undefined8 *)((longlong)puVar7 + -0x28);
        }
        LOCK();
        *(int *)(ulonglong)(iVar3 * 4 + 0x103a9000) = iVar4;
        UNLOCK();
        *(ulonglong *)((longlong)puVar7 + -0x28) = (ulonglong)((int)&stack0xfffffffffffffff8 - 4);
        *(undefined8 *)((longlong)puVar7 + -0x30) = 2;
        *(undefined8 *)((longlong)puVar7 + -0x38) = 0x80;
        puVar9 = (undefined1 *)((longlong)puVar7 + -0x40);
        *(undefined8 *)((longlong)puVar7 + -0x40) = 0x103a9000;
        *(undefined8 *)((longlong)puVar7 + -0x48) = 0x1408ccf65;
        iVar3 = (*_DAT_150c2b055)();
        if (iVar3 != 0) {
          *(undefined8 *)((longlong)puVar7 + -0x48) = 0xe;
          *(undefined8 *)((longlong)puVar7 + -0x50) = 0x1408ccf70;
          FUN_1408c1f17();
          return iVar5;
        }
      }
                    /* WARNING: Subroutine does not return */
      *(undefined **)(puVar9 + -8) = &UNK_1408ccf9a;
      FUN_1408c4986();
    }
    puVar6 = (uint *)(ulonglong)(*(uint *)(ulonglong)uVar12 * 4 + 0x103a50f8);
    uVar2 = *puVar6;
    uVar11 = (ulonglong)uVar2;
    if (uVar2 == 0) {
      uStack_30 = *(ulonglong *)((ulonglong)*(uint *)(ulonglong)uVar12 * 4 + 0x10325478);
      uVar2 = FUN_1408cce6b();
      uVar11 = (ulonglong)uVar2;
      if (uVar2 != 0) {
        LOCK();
        uVar12 = *puVar6;
        *puVar6 = uVar2;
        UNLOCK();
        puVar8 = &uStack_28;
        if (uVar12 != 0) {
          puVar8 = &uStack_30;
          uStack_30 = uVar11;
          (*_DAT_150c2aea7)();
        }
        goto LAB_1408ccf87;
      }
      LOCK();
      *puVar6 = 0xffffffff;
      UNLOCK();
    }
    else {
      puVar8 = &uStack_28;
      if (uVar2 != 0xffffffff) {
LAB_1408ccf87:
        *(undefined8 *)((longlong)puVar8 + -8) = *(undefined8 *)(uVar10 + 0xc);
        puVar7 = (ulonglong *)((longlong)puVar8 + -0x10);
        *(ulonglong *)((longlong)puVar8 + -0x10) = uVar11;
        *(undefined8 *)((longlong)puVar8 + -0x18) = 0x1408ccf91;
        iVar5 = (*_DAT_150c2af49)();
        goto LAB_1408ccf1d;
      }
    }
    uVar12 = uVar12 + 4;
  } while( true );
}

