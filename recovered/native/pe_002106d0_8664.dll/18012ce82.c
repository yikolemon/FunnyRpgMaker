/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 18012ce82 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18012ce82(longlong param_1,uint param_2)

{
  longlong lVar1;
  char *pcVar2;
  undefined4 uVar3;
  
  lVar1 = DAT_180419160;
  if (param_1 == 0) {
    uVar3 = 0;
  }
  else {
    uVar3 = FUN_1800eebe2((float)(param_2 & _DAT_1802ac550) * DAT_1802dc414 +
                          *(float *)(DAT_180419160 + 0x1648),DAT_1802dc414);
  }
  *(undefined4 *)(lVar1 + 0x1648) = uVar3;
  if (*(longlong *)(lVar1 + 0x1630) != param_1) {
    if ((*(byte *)(lVar1 + 0x2acc) & 0x80) != 0) {
      if (param_1 == 0) {
        pcVar2 = "NULL";
      }
      else {
        pcVar2 = *(char **)(param_1 + 8);
      }
      FUN_1800fdfea("[io] LockWheelingWindow() \"%s\"\n",pcVar2);
    }
    *(longlong *)(lVar1 + 0x1630) = param_1;
    *(undefined8 *)(lVar1 + 0x1638) = *(undefined8 *)(lVar1 + 0x118);
    if (param_1 == 0) {
      *(undefined4 *)(lVar1 + 0x1640) = 0xffffffff;
      *(undefined8 *)(lVar1 + 0x1654) = 0;
    }
  }
  return;
}

