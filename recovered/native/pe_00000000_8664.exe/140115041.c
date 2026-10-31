/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 140115041 */

void FUN_140115041(longlong param_1)

{
  uint uVar1;
  longlong lVar2;
  ulonglong uVar3;
  longlong lVar4;
  
  uVar1 = *(uint *)(param_1 + 0x2528);
  if (uVar1 != 0) {
    lVar2 = 8;
    uVar3 = 0;
    do {
      lVar4 = (longlong)*(int *)(*(longlong *)(param_1 + 0x2530) + lVar2);
      if ((lVar4 != -1) && (*(longlong *)(param_1 + 0x2520) != 0)) {
        *(undefined4 *)(*(longlong *)(param_1 + 0x2520) + 100 + lVar4 * 0x250) = 0xffffffff;
        uVar1 = *(uint *)(param_1 + 0x2528);
      }
      uVar3 = uVar3 + 1;
      lVar2 = lVar2 + 0x10;
    } while (uVar3 != uVar1);
  }
  if (*(longlong *)(param_1 + 0x29b0) != 0) {
    *(undefined8 *)(param_1 + 0x29a8) = 0;
    FUN_140077b90();
    *(undefined8 *)(param_1 + 0x29b0) = 0;
  }
  return;
}

