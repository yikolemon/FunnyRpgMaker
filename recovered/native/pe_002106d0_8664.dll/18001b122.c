/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 18001b122 */

void FUN_18001b122(longlong param_1,undefined4 param_2,undefined8 param_3)

{
  ulonglong uVar1;
  longlong lVar2;
  undefined8 uVar3;
  undefined4 *puVar4;
  longlong lVar5;
  
  uVar1 = *(ulonglong *)(param_1 + 0xb0);
  lVar2 = *(longlong *)(param_1 + 0x90);
  puVar4 = *(undefined4 **)(param_1 + 0x98);
  if (uVar1 < (ulonglong)((longlong)puVar4 - lVar2 >> 5)) {
    lVar5 = uVar1 * 0x20;
    *(undefined4 *)(lVar2 + lVar5) = param_2;
    *(undefined8 *)(lVar2 + 8 + lVar5) = param_3;
    *(undefined8 *)(lVar2 + 0x10 + lVar5) = *(undefined8 *)(param_1 + 8);
  }
  else {
    if (*(ulonglong *)(param_1 + 0xb8) <= uVar1) {
                    /* WARNING: Subroutine does not return */
      FUN_180239ab0(0xc);
    }
    uVar3 = *(undefined8 *)(param_1 + 8);
    if (puVar4 == *(undefined4 **)(param_1 + 0xa0)) {
      FUN_18001ba58(param_1 + 0x90);
      puVar4 = *(undefined4 **)(param_1 + 0x98);
    }
    *puVar4 = param_2;
    puVar4[1] = 0;
    *(undefined8 *)(puVar4 + 2) = param_3;
    *(undefined8 *)(puVar4 + 4) = uVar3;
    *(undefined8 *)(puVar4 + 6) = 0;
    *(longlong *)(param_1 + 0x98) = *(longlong *)(param_1 + 0x98) + 0x20;
  }
  *(longlong *)(param_1 + 0xb0) = *(longlong *)(param_1 + 0xb0) + 1;
  return;
}

