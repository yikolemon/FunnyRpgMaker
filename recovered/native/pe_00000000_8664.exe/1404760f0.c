/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 1404760f0 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1404760f0(longlong param_1,undefined8 param_2,longlong param_3)

{
  longlong *plVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined4 *puVar12;
  longlong lVar13;
  longlong lVar14;
  longlong lVar15;
  undefined8 uVar16;
  undefined8 *puVar17;
  undefined *puVar18;
  longlong lVar19;
  undefined4 local_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined1 local_48 [48];
  
  puVar12 = (undefined4 *)FUN_14044e840(local_48);
  uVar16 = *(undefined8 *)(puVar12 + 4);
  uVar9 = *(undefined8 *)(puVar12 + 6);
  uVar2 = puVar12[7];
  uVar3 = puVar12[8];
  uVar4 = puVar12[9];
  uVar5 = puVar12[10];
  uVar6 = puVar12[1];
  uVar7 = puVar12[2];
  uVar8 = puVar12[3];
  *(undefined4 *)(param_1 + 0x2c) = *puVar12;
  *(undefined4 *)(param_1 + 0x30) = uVar6;
  *(undefined4 *)(param_1 + 0x34) = uVar7;
  *(undefined4 *)(param_1 + 0x38) = uVar8;
  uStack_60 = (undefined4)uVar9;
  local_68 = (undefined4)uVar16;
  uStack_64 = (undefined4)((ulonglong)uVar16 >> 0x20);
  *(undefined4 *)(param_1 + 0x3c) = local_68;
  *(undefined4 *)(param_1 + 0x40) = uStack_64;
  *(undefined4 *)(param_1 + 0x44) = uStack_60;
  *(undefined4 *)(param_1 + 0x48) = uVar2;
  *(undefined4 *)(param_1 + 0x48) = uVar2;
  *(undefined4 *)(param_1 + 0x4c) = uVar3;
  *(undefined4 *)(param_1 + 0x50) = uVar4;
  *(undefined4 *)(param_1 + 0x54) = uVar5;
  lVar13 = FUN_140480f84();
  lVar19 = -1;
  if (lVar13 != 0) {
    if (*(longlong *)(param_3 + 0x28) != lVar13) {
      if (*(longlong *)(param_3 + 0x28) != 0) {
        thunk_FUN_1404a2310();
      }
      *(undefined8 *)(param_3 + 0x28) = 0;
      lVar14 = -1;
      do {
        lVar15 = lVar14 * 2;
        lVar14 = lVar14 + 1;
      } while (*(short *)(lVar13 + 2 + lVar15) != 0);
      lVar14 = lVar14 * 2 + 2;
      lVar15 = _malloc_base(lVar14);
      if (lVar15 != 0) {
        FUN_1404b97c0(lVar15,lVar13,lVar14);
      }
      *(longlong *)(param_3 + 0x28) = lVar15;
    }
    thunk_FUN_1404a2310(lVar13);
  }
  puVar18 = &DAT_14059cb70;
  if (*(undefined **)(param_3 + 0x28) != (undefined *)0x0) {
    puVar18 = *(undefined **)(param_3 + 0x28);
  }
  uVar16 = FUN_14045cbf0(puVar18);
  *(undefined8 *)(param_1 + 0x10) = uVar16;
  lVar13 = FUN_140481110();
  if (lVar13 != 0) {
    plVar1 = (longlong *)(param_3 + 0x38);
    if (*(longlong *)(param_3 + 0x38) == lVar13) {
      thunk_FUN_1404a2310(lVar13);
    }
    else {
      if (*(longlong *)(param_3 + 0x38) != 0) {
        thunk_FUN_1404a2310();
      }
      *plVar1 = 0;
      do {
        lVar14 = lVar19 * 2;
        lVar19 = lVar19 + 1;
      } while (*(short *)(lVar13 + 2 + lVar14) != 0);
      lVar19 = lVar19 * 2 + 2;
      lVar14 = _malloc_base(lVar19);
      if (lVar14 == 0) {
        *plVar1 = 0;
        thunk_FUN_1404a2310(lVar13);
      }
      else {
        FUN_1404b97c0(lVar14,lVar13,lVar19);
        *plVar1 = lVar14;
        thunk_FUN_1404a2310(lVar13);
      }
    }
  }
  puVar18 = &DAT_14059cc80;
  if (*(undefined **)(param_3 + 0x38) != (undefined *)0x0) {
    puVar18 = *(undefined **)(param_3 + 0x38);
  }
  uVar16 = FUN_14045cbf0(puVar18);
  *(undefined8 *)(param_1 + 0x18) = uVar16;
  puVar17 = (undefined8 *)_calloc_base(0xd,2);
  uVar9 = ram0x00014059abda;
  uVar16 = _DAT_14059abc8;
  if (puVar17 == (undefined8 *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_14044ac40();
  }
  uVar10 = CONCAT62(u_r_ba_14059abd2._0_6_,_UNK_14059abd0);
  uVar11 = CONCAT26(u_r_ba_14059abd2[3],u_r_ba_14059abd2._0_6_);
  *(undefined8 **)(param_1 + 0x20) = puVar17;
  *puVar17 = uVar16;
  puVar17[1] = uVar10;
  *(undefined8 *)((longlong)puVar17 + 10) = uVar11;
  *(undefined8 *)((longlong)puVar17 + 0x12) = uVar9;
  return;
}

