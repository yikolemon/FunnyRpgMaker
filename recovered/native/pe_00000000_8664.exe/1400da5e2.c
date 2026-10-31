/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 1400da5e2 */

void FUN_1400da5e2(uint *param_1)

{
  undefined8 *puVar1;
  longlong lVar2;
  ulonglong uVar3;
  longlong lVar4;
  
  if (0 < (int)param_1[2]) {
    lVar2 = 0;
    uVar3 = 0;
    do {
      lVar4 = *(longlong *)(param_1 + 4);
      if (uVar3 == *param_1) {
        puVar1 = (undefined8 *)(lVar4 + 0x10 + lVar2);
        *puVar1 = 0;
        puVar1[1] = 0;
        *(undefined8 *)(lVar4 + lVar2) = 0;
        ((undefined8 *)(lVar4 + lVar2))[1] = 0;
        lVar4 = *(longlong *)(param_1 + 4);
      }
      if (*(longlong *)(lVar4 + 8 + lVar2) != 0) {
        *(undefined8 *)(lVar4 + lVar2) = 0;
        FUN_140077b90();
        *(undefined8 *)(lVar4 + 8 + lVar2) = 0;
        lVar4 = *(longlong *)(param_1 + 4);
      }
      if (*(longlong *)(lVar4 + 0x18 + lVar2) != 0) {
        *(undefined8 *)(lVar4 + 0x10 + lVar2) = 0;
        FUN_140077b90();
        *(undefined8 *)(lVar4 + 0x18 + lVar2) = 0;
      }
      uVar3 = uVar3 + 1;
      lVar2 = lVar2 + 0x20;
    } while ((longlong)uVar3 < (longlong)(int)param_1[2]);
  }
  param_1[0] = 0;
  param_1[1] = 1;
  if (*(longlong *)(param_1 + 4) != 0) {
    param_1[2] = 0;
    param_1[3] = 0;
    FUN_140077b90();
    param_1[4] = 0;
    param_1[5] = 0;
  }
  return;
}

