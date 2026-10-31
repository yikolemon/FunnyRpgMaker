/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 1400cf86f */

byte FUN_1400cf86f(longlong param_1,uint param_2)

{
  byte bVar1;
  char cVar2;
  undefined8 uVar3;
  byte bVar4;
  byte bVar5;
  longlong lVar6;
  undefined1 auStack_58 [40];
  int local_30;
  int local_2c;
  ulonglong local_28;
  
  local_28 = DAT_140f17b40 ^ (ulonglong)auStack_58;
  bVar4 = 0;
  if ((0 < (int)param_2) && ((*(uint *)(param_1 + 0x10) & 0x400) == 0)) {
    lVar6 = (ulonglong)param_2 + *(longlong *)(param_1 + 0x20);
    uVar3 = FUN_1400784ab(*(longlong *)(param_1 + 0x20),lVar6);
    FUN_140076955(&local_2c,lVar6,(longlong)*(int *)(param_1 + 0x18) + *(longlong *)(param_1 + 0x20)
                 );
    FUN_140076955(&local_30,uVar3,(longlong)*(int *)(param_1 + 0x18) + *(longlong *)(param_1 + 0x20)
                 );
    bVar4 = 1;
    if ((local_2c != 9) && ((local_2c != 0x20 && (local_2c != 0x3000)))) {
      bVar4 = 0;
    }
    bVar1 = FUN_1400cf32c();
    bVar5 = 0;
    if (((local_30 != 9) && (local_30 != 0x20)) && (local_30 != 0x3000)) {
      bVar5 = bVar4;
    }
    cVar2 = FUN_1400cf32c();
    bVar4 = bVar1 ^ 1;
    if (cVar2 == '\0') {
      bVar4 = bVar5;
    }
  }
  if (DAT_140f17b40 != (local_28 ^ (ulonglong)auStack_58)) {
                    /* WARNING: Subroutine does not return */
    FUN_140188a00(local_28 ^ (ulonglong)auStack_58);
  }
  return bVar4;
}

