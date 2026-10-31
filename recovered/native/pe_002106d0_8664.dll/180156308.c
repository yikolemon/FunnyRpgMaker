/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 180156308 */

byte FUN_180156308(longlong param_1,uint param_2)

{
  byte bVar1;
  char cVar2;
  byte bVar3;
  undefined8 uVar4;
  byte bVar5;
  byte bVar6;
  longlong lVar7;
  undefined1 auStack_48 [32];
  int local_28;
  int local_24;
  ulonglong local_20;
  
  local_20 = DAT_180402640 ^ (ulonglong)auStack_48;
  bVar3 = 0;
  if ((0 < (int)param_2) && ((*(uint *)(param_1 + 0x10) & 0x400) == 0)) {
    lVar7 = (ulonglong)param_2 + *(longlong *)(param_1 + 0x20);
    uVar4 = FUN_1800ff1ef(*(longlong *)(param_1 + 0x20),lVar7);
    FUN_1800fd699(&local_24,lVar7,(longlong)*(int *)(param_1 + 0x18) + *(longlong *)(param_1 + 0x20)
                 );
    FUN_1800fd699(&local_28,uVar4,(longlong)*(int *)(param_1 + 0x18) + *(longlong *)(param_1 + 0x20)
                 );
    bVar6 = 1;
    if ((local_28 != 9) && ((local_28 != 0x20 && (local_28 != 0x3000)))) {
      bVar6 = 0;
    }
    bVar1 = FUN_1801563fc();
    bVar5 = 0;
    if (((local_24 != 9) && (bVar5 = 0, local_24 != 0x20)) && (bVar5 = 0, local_24 != 0x3000)) {
      bVar5 = 1;
    }
    cVar2 = FUN_1801563fc();
    bVar3 = bVar1 ^ 1;
    if (cVar2 == '\0') {
      bVar3 = (bVar6 | bVar1) & bVar5;
    }
  }
  if (DAT_180402640 != (local_20 ^ (ulonglong)auStack_48)) {
                    /* WARNING: Subroutine does not return */
    FUN_1802396d0(local_20 ^ (ulonglong)auStack_48);
  }
  return bVar3;
}

