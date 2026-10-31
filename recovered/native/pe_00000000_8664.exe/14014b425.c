/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 14014b425 */

undefined8 FUN_14014b425(longlong param_1,uint param_2,longlong param_3)

{
  uint uVar1;
  uint uVar2;
  undefined8 uVar3;
  longlong lVar4;
  undefined1 auStack_58 [32];
  undefined1 local_38 [24];
  ulonglong local_20;
  
  local_20 = DAT_140f17b40 ^ (ulonglong)auStack_58;
  lVar4 = *(longlong *)(param_1 + 0x2e0);
  if (lVar4 == 0) {
    uVar3 = 6;
  }
  else {
    uVar1 = *(uint *)(lVar4 + 4);
    FUN_14014bbf2(*(undefined8 *)(lVar4 + 0x108),local_38,uVar1);
    uVar2 = uVar1;
    if (param_2 < uVar1) {
      uVar2 = param_2;
    }
    if (uVar2 != 0) {
      uVar2 = param_2;
      if (uVar1 < param_2) {
        uVar2 = uVar1;
      }
      FUN_1401c5180(param_3,local_38,(ulonglong)uVar2 << 2);
    }
    uVar3 = 0;
    if (uVar1 < param_2) {
      uVar3 = 0;
      lVar4 = 0;
      do {
        *(undefined4 *)(param_3 + (ulonglong)uVar1 * 4 + lVar4 * 4) = 0x8000;
        lVar4 = lVar4 + 1;
      } while (param_2 - uVar1 != (int)lVar4);
    }
  }
  if (DAT_140f17b40 != (local_20 ^ (ulonglong)auStack_58)) {
                    /* WARNING: Subroutine does not return */
    FUN_140188a00(local_20 ^ (ulonglong)auStack_58);
  }
  return uVar3;
}

