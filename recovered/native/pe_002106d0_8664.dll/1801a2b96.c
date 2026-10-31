/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 1801a2b96 */

ulonglong FUN_1801a2b96(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  char cVar3;
  ulonglong uVar4;
  undefined1 local_60 [16];
  longlong local_50;
  undefined1 local_40 [16];
  longlong local_30;
  undefined8 local_20;
  
  local_20 = 0xfffffffffffffffe;
  cVar3 = FUN_1801c61e8();
  if (cVar3 == '\0') {
    uVar4 = 0;
  }
  else {
    uVar1 = *(undefined8 *)(*DAT_180420d20 + 0x80);
    uVar2 = *(undefined8 *)(*DAT_180420d20 + 0x150);
    FUN_1801c62bd();
    FUN_1801a2d20(local_60,uVar2);
    FUN_1801a2d80(local_40,uVar1);
    uVar4 = CONCAT71((int7)((ulonglong)uVar1 >> 8),local_30 == 0 && local_50 == 0);
    FUN_1800010ec(local_40);
    FUN_1800010ec(local_60);
  }
  return uVar4 & 0xffffffff;
}

