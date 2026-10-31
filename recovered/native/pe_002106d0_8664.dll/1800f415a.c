/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 1800f415a */

void FUN_1800f415a(longlong param_1)

{
  longlong lVar1;
  undefined8 uVar2;
  longlong lVar3;
  longlong lVar4;
  undefined8 *puVar5;
  
  FUN_1800f40c0(param_1);
  lVar1 = *(longlong *)(param_1 + 0x138);
  if (lVar1 != 0) {
    lVar3 = *(longlong *)(lVar1 + -8) * 0x18;
    if (*(longlong *)(lVar1 + -8) != 0) {
      lVar4 = lVar3;
      do {
        FUN_1800f5398(lVar1 + -0x18 + lVar4);
        lVar4 = lVar4 + -0x18;
      } while (lVar4 != 0);
    }
    thunk_FUN_1802464a0(lVar1 + -8,lVar3 + 8);
  }
  puVar5 = (undefined8 *)(param_1 + 0x100);
  FUN_1800f50c4(puVar5);
  uVar2 = *puVar5;
  *puVar5 = 0;
  thunk_FUN_1802464a0(uVar2,0x10);
  FUN_1800f4e94(param_1 + 0xf8);
  FUN_1800f4e94(param_1 + 0xf0);
  FUN_1800578f2(param_1 + 0x50);
  return;
}

