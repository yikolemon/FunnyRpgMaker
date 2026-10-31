/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 1402c09d4 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 * FUN_1402c09d4(longlong *param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined1 *puVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  longlong lVar9;
  undefined8 *puVar10;
  longlong lVar11;
  ulonglong uVar12;
  undefined1 *puVar13;
  undefined1 *puVar14;
  longlong *local_80;
  undefined1 *local_78;
  ulonglong local_70;
  undefined1 *local_68;
  undefined1 *local_60;
  undefined8 local_58;
  undefined1 local_49;
  undefined8 local_48;
  
  uVar7 = ram0x000140613b10 ^ (ulonglong)&stack0xffffffffffffffc8;
  puVar1 = (undefined8 *)param_1[1];
  if (puVar1 == (undefined8 *)param_1[2]) {
    if (ram0x000140613b10 == (uVar7 ^ (ulonglong)&stack0xffffffffffffffc8)) {
      local_48 = 0xfffffffffffffffe;
      lVar11 = *param_1;
      uVar12 = (param_1[1] - lVar11 >> 5) + 1;
      uVar8 = param_1[2] - lVar11 >> 5;
      uVar7 = (uVar8 >> 1) + uVar8;
      if (uVar7 <= uVar12) {
        uVar7 = uVar12;
      }
      if (0x7ffffffffffffff - (uVar8 >> 1) < uVar8) {
        uVar7 = 0x7ffffffffffffff;
      }
      local_58 = param_2;
      if (uVar7 >> 0x3b != 0) {
                    /* WARNING: Subroutine does not return */
        FUN_1402128f7();
      }
      puVar6 = (undefined1 *)FUN_1402128b0(uVar7 << 5);
      puVar13 = (undefined1 *)((longlong)puVar1 + (longlong)(puVar6 + (0x20 - lVar11)));
      puVar14 = (undefined1 *)((longlong)puVar1 + ((longlong)puVar6 - lVar11));
      local_80 = param_1;
      local_78 = puVar6;
      local_70 = uVar7;
      local_68 = puVar13;
      local_60 = puVar13;
      FUN_1402bec9a(puVar14,local_58,&local_49);
      puVar2 = (undefined8 *)*param_1;
      puVar10 = (undefined8 *)param_1[1];
      if (puVar1 == puVar10) {
        local_68 = puVar14;
        if (puVar2 != puVar1) {
          lVar11 = 0;
          do {
            *(undefined8 *)(puVar6 + lVar11 + 0x10) = 0;
            *(undefined8 *)((longlong)(puVar6 + lVar11 + 0x10) + 8) = 0;
            *(undefined8 *)(puVar6 + lVar11) = 0;
            *(undefined8 *)((longlong)(puVar6 + lVar11) + 8) = 0;
            puVar10 = (undefined8 *)((longlong)puVar2 + lVar11);
            uVar3 = *puVar10;
            uVar4 = puVar10[1];
            uVar5 = puVar10[3];
            *(undefined8 *)(puVar6 + lVar11 + 0x10) = puVar10[2];
            *(undefined8 *)((longlong)(puVar6 + lVar11 + 0x10) + 8) = uVar5;
            *(undefined8 *)(puVar6 + lVar11) = uVar3;
            *(undefined8 *)((longlong)(puVar6 + lVar11) + 8) = uVar4;
            puVar10[2] = 0;
            puVar10[3] = 0xf;
            *(undefined1 *)puVar10 = 0;
            lVar11 = lVar11 + 0x20;
          } while (puVar10 + 4 != puVar1);
        }
      }
      else {
        if (puVar2 != puVar1) {
          lVar9 = 0;
          do {
            *(undefined8 *)(puVar6 + lVar9 + 0x10) = 0;
            *(undefined8 *)((longlong)(puVar6 + lVar9 + 0x10) + 8) = 0;
            *(undefined8 *)(puVar6 + lVar9) = 0;
            *(undefined8 *)((longlong)(puVar6 + lVar9) + 8) = 0;
            puVar10 = (undefined8 *)((longlong)puVar2 + lVar9);
            uVar3 = *puVar10;
            uVar4 = puVar10[1];
            uVar5 = puVar10[3];
            *(undefined8 *)(puVar6 + lVar9 + 0x10) = puVar10[2];
            *(undefined8 *)((longlong)(puVar6 + lVar9 + 0x10) + 8) = uVar5;
            *(undefined8 *)(puVar6 + lVar9) = uVar3;
            *(undefined8 *)((longlong)(puVar6 + lVar9) + 8) = uVar4;
            puVar10[2] = 0;
            puVar10[3] = 0xf;
            *(undefined1 *)puVar10 = 0;
            lVar9 = lVar9 + 0x20;
          } while (puVar10 + 4 != puVar1);
          puVar10 = (undefined8 *)param_1[1];
        }
        local_68 = puVar6;
        if (puVar1 != puVar10) {
          lVar9 = 0;
          do {
            *(undefined8 *)((longlong)puVar1 + (longlong)(puVar6 + lVar9 + (0x30 - lVar11))) = 0;
            ((undefined8 *)((longlong)puVar1 + (longlong)(puVar6 + lVar9 + (0x30 - lVar11))))[1] = 0
            ;
            *(undefined8 *)(puVar13 + lVar9) = 0;
            *(undefined8 *)((longlong)(puVar13 + lVar9) + 8) = 0;
            puVar2 = (undefined8 *)((longlong)puVar1 + lVar9);
            uVar3 = *puVar2;
            uVar4 = puVar2[1];
            uVar5 = puVar2[3];
            *(undefined8 *)((longlong)puVar1 + (longlong)(puVar6 + lVar9 + (0x30 - lVar11))) =
                 puVar2[2];
            ((undefined8 *)((longlong)puVar1 + (longlong)(puVar6 + lVar9 + (0x30 - lVar11))))[1] =
                 uVar5;
            *(undefined8 *)(puVar13 + lVar9) = uVar3;
            *(undefined8 *)((longlong)(puVar13 + lVar9) + 8) = uVar4;
            puVar2[2] = 0;
            puVar2[3] = 0xf;
            *(undefined1 *)puVar2 = 0;
            lVar9 = lVar9 + 0x20;
          } while (puVar2 + 4 != puVar10);
        }
      }
      local_78 = (undefined1 *)0x0;
      FUN_1402c0ca0(param_1,puVar6,uVar12,uVar7);
      FUN_1402c0d38(&local_80);
      return puVar14;
    }
  }
  else {
    FUN_1402bec9a(puVar1,param_2,&stack0xffffffffffffffef);
    puVar6 = (undefined1 *)param_1[1];
    param_1[1] = (longlong)(puVar6 + 0x20);
    if (ram0x000140613b10 == (uVar7 ^ (ulonglong)&stack0xffffffffffffffc8)) {
      return puVar6;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_14044aba0(uVar7 ^ (ulonglong)&stack0xffffffffffffffc8);
}

