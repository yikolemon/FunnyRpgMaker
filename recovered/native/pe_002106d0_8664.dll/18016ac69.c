/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 18016ac69 */

void FUN_18016ac69(void)

{
  longlong lVar1;
  longlong lVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  
  lVar1 = *(longlong *)(DAT_180419160 + 0x1608);
  lVar2 = *(longlong *)(DAT_180419160 + 0x24f8);
  uVar3 = *(undefined4 *)(lVar1 + 700);
  uVar4 = *(undefined4 *)(lVar1 + 0x2c0);
  uVar5 = *(undefined4 *)(lVar1 + 0x2c4);
  *(undefined4 *)(lVar2 + 0x170) = *(undefined4 *)(lVar1 + 0x2b8);
  *(undefined4 *)(lVar2 + 0x174) = uVar3;
  *(undefined4 *)(lVar2 + 0x178) = uVar4;
  *(undefined4 *)(lVar2 + 0x17c) = uVar5;
  FUN_18016a90f(lVar1,lVar2 + 0x150);
  FUN_180195542(*(undefined8 *)(lVar2 + 0x1a0),*(undefined8 *)(lVar1 + 800),
                *(undefined2 *)(lVar2 + 0x234));
  return;
}

