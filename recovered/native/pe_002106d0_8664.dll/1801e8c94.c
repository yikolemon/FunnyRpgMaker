/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 1801e8c94 */

void FUN_1801e8c94(longlong param_1,char param_2,longlong *param_3,longlong *param_4)

{
  longlong lVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  uint uVar4;
  longlong lVar5;
  
  lVar1 = *(longlong *)(param_1 + 0x1180);
  uVar2 = (ulonglong)*(uint *)(lVar1 + 800);
  if (uVar2 != 0) {
    uVar4 = 0xfffffffc;
    if (param_2 == '\0') {
      uVar4 = 0xffffffee;
    }
    lVar5 = lVar1 + 0x324;
    uVar3 = uVar2;
    do {
      if ((*(uint *)(lVar5 + 0x20) | uVar4) == 0xffffffff) {
        *param_3 = lVar5;
        uVar2 = (ulonglong)*(uint *)(lVar1 + 800);
        break;
      }
      lVar5 = lVar5 + 0x24;
      uVar3 = uVar3 - 1;
    } while (uVar3 != 0);
    if ((int)uVar2 != 0) {
      lVar1 = lVar1 + 0x324;
      do {
        if ((*(uint *)(lVar1 + 0x20) | (uint)(param_2 != '\0') * 0x20 - 0x42) == 0xffffffff) {
          *param_4 = lVar1;
          return;
        }
        lVar1 = lVar1 + 0x24;
        uVar2 = uVar2 - 1;
      } while (uVar2 != 0);
    }
  }
  return;
}

