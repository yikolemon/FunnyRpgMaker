/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 140179ba0 */

longlong FUN_140179ba0(longlong param_1,undefined8 param_2)

{
  longlong lVar1;
  ushort uVar2;
  longlong lVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  uint uVar6;
  undefined1 uVar7;
  uint uVar8;
  undefined1 auStack_58 [32];
  undefined8 local_38;
  int *local_30;
  int local_24;
  ulonglong local_20;
  
  local_20 = DAT_140f17b40 ^ (ulonglong)auStack_58;
  lVar1 = *(longlong *)(param_1 + 0x10);
  uVar2 = *(ushort *)(param_1 + 8) >> 1;
  uVar6 = (uint)uVar2;
  local_30 = &local_24;
  local_38 = 0;
  lVar3 = FUN_14012b8aa(param_2,1,0,uVar6 + 1);
  if (local_24 == 0) {
    uVar4 = 0;
    uVar5 = uVar4;
    if (uVar2 != 0) {
      do {
        uVar7 = *(undefined1 *)(lVar1 + 1 + uVar4 * 2);
        uVar8 = (uint)CONCAT11(*(undefined1 *)(lVar1 + uVar4 * 2),uVar7);
        if (uVar8 == 0) {
          uVar5 = uVar4 & 0xffffffff;
          break;
        }
        if (uVar8 - 0x80 < 0xffffffa0) {
          uVar7 = 0x3f;
        }
        *(undefined1 *)(lVar3 + uVar4) = uVar7;
        uVar4 = uVar4 + 1;
        uVar5 = (ulonglong)uVar6;
      } while (uVar6 != uVar4);
    }
    *(undefined1 *)(lVar3 + uVar5) = 0;
  }
  else {
    lVar3 = 0;
  }
  if (DAT_140f17b40 != (local_20 ^ (ulonglong)auStack_58)) {
                    /* WARNING: Subroutine does not return */
    FUN_140188a00(local_20 ^ (ulonglong)auStack_58);
  }
  return lVar3;
}

