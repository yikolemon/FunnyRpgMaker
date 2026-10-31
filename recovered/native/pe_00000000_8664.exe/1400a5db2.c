/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 1400a5db2 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1400a5db2(longlong param_1,uint param_2)

{
  longlong lVar1;
  char *pcVar2;
  undefined4 uVar3;
  
  lVar1 = DAT_140f2a910;
  if (param_1 == 0) {
    uVar3 = 0;
  }
  else {
    uVar3 = FUN_14004863e((float)(param_2 & _DAT_1401ced40) * DAT_1402114e8 +
                          *(float *)(DAT_140f2a910 + 0x1648),DAT_1402114e8);
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
      FUN_1400772a6("[io] LockWheelingWindow() \"%s\"\n",pcVar2);
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

