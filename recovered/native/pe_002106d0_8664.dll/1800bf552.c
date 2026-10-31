/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 1800bf552 */

void FUN_1800bf552(longlong param_1,ulonglong param_2)

{
  longlong lVar1;
  longlong lVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  
  if (param_2 >> 0x3e == 0) {
    lVar2 = *(longlong *)(param_1 + 8);
    lVar1 = *(longlong *)(param_1 + 0x18);
    if (lVar2 != 0) {
      (*DAT_180417870)(lVar2);
      *(undefined8 *)(param_1 + 8) = 0;
      *(undefined8 *)(param_1 + 0x10) = 0;
      *(undefined8 *)(param_1 + 0x18) = 0;
    }
    uVar4 = lVar1 - lVar2 >> 2;
    uVar3 = (uVar4 >> 1) + uVar4;
    if (uVar3 <= param_2) {
      uVar3 = param_2;
    }
    if (0x3fffffffffffffff - (uVar4 >> 1) < uVar4) {
      uVar3 = 0x3fffffffffffffff;
    }
    lVar2 = (*DAT_180417868)(uVar3 * 4,1);
    *(longlong *)(param_1 + 8) = lVar2;
    *(longlong *)(param_1 + 0x10) = lVar2;
    *(ulonglong *)(param_1 + 0x18) = lVar2 + uVar3 * 4;
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_18001620a();
}

