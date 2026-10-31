/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 1800b6d86 */

undefined1 * FUN_1800b6d86(longlong *param_1,undefined1 *param_2)

{
  undefined1 *puVar1;
  longlong lVar2;
  undefined1 *puVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  undefined1 *puVar7;
  undefined1 *puVar8;
  longlong *plStack_78;
  undefined1 *puStack_70;
  ulonglong uStack_68;
  undefined1 *puStack_60;
  undefined1 *puStack_58;
  undefined1 *puStack_50;
  undefined8 uStack_48;
  
  puVar1 = (undefined1 *)param_1[1];
  if (puVar1 != (undefined1 *)param_1[2]) {
    *puVar1 = *param_2;
    puVar1[1] = 0;
    puVar1 = (undefined1 *)param_1[1];
    param_1[1] = (longlong)(puVar1 + 2);
    return puVar1;
  }
  uStack_48 = 0xfffffffffffffffe;
  lVar2 = *param_1;
  uVar6 = (param_1[1] - lVar2 >> 1) + 1;
  uVar4 = param_1[2] - lVar2 >> 1;
  uVar5 = (uVar4 >> 1) + uVar4;
  if (uVar5 <= uVar6) {
    uVar5 = uVar6;
  }
  if ((uVar4 >> 1 ^ 0x7fffffffffffffff) < uVar4) {
    uVar5 = 0x7fffffffffffffff;
  }
  puStack_50 = param_2;
  if (-1 < (longlong)uVar5) {
    puVar3 = (undefined1 *)FUN_1800013e0(uVar5 * 2);
    puVar7 = puVar3 + ((longlong)puVar1 - lVar2) + 2;
    puVar8 = puVar3 + ((longlong)puVar1 - lVar2);
    *puVar8 = *puStack_50;
    puVar8[1] = 0;
    plStack_78 = param_1;
    puStack_70 = puVar3;
    uStack_68 = uVar5;
    puStack_60 = puVar8;
    puStack_58 = puVar7;
    if (puVar1 == (undefined1 *)param_1[1]) {
      thunk_FUN_18004688a(*param_1,(undefined1 *)param_1[1],puVar3);
    }
    else {
      thunk_FUN_18004688a(*param_1,puVar1,puVar3);
      puStack_60 = puVar3;
      thunk_FUN_18004688a(puVar1,param_1[1],puVar7);
    }
    puStack_70 = (undefined1 *)0x0;
    FUN_1800b6cdc(param_1,puVar3,uVar6,uVar5);
    FUN_1800b6d46(&plStack_78);
    return puVar8;
  }
                    /* WARNING: Subroutine does not return */
  FUN_180001427();
}

