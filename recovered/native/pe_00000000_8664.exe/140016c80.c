/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 140016c80 */

void Unwind_140016c80(longlong param_1,ulonglong param_2,undefined8 param_3,undefined8 param_4,
                     undefined8 param_5,ulonglong param_6)

{
  longlong lVar1;
  ulonglong uVar2;
  longlong lVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  longlong *unaff_RSI;
  longlong in_stack_000000a0;
  
  lVar1 = *(longlong *)(param_1 + 0x10);
  if (0x7ffffffffffffffeU - lVar1 < param_2) {
                    /* WARNING: Subroutine does not return */
    FUN_140002673();
  }
  uVar2 = unaff_RSI[3];
  uVar4 = param_2 + lVar1 | 7;
  uVar5 = 0x7ffffffffffffffe;
  if (((uVar4 < 0x7fffffffffffffff) && (uVar2 <= 0x7ffffffffffffffe - (uVar2 >> 1))) &&
     (uVar5 = (uVar2 >> 1) + uVar2, uVar5 < uVar4)) {
    uVar5 = uVar4;
  }
  lVar3 = FUN_140002684();
  unaff_RSI[2] = param_2 + lVar1;
  unaff_RSI[3] = uVar5;
  if (uVar2 < 8) {
    FUN_1401c5180(lVar3);
    lVar1 = lVar3 + lVar1 * 2;
    FUN_1401c5180(lVar1,param_4,in_stack_000000a0 * 2);
    *(undefined2 *)(lVar1 + in_stack_000000a0 * 2) = 0;
  }
  else {
    FUN_1401c5180(lVar3,*unaff_RSI,lVar1 * 2);
    lVar1 = lVar3 + lVar1 * 2;
    FUN_1401c5180(lVar1,param_4,in_stack_000000a0 * 2);
    *(undefined2 *)(lVar1 + in_stack_000000a0 * 2) = 0;
    FUN_140016a7a();
  }
  *unaff_RSI = lVar3;
  if (DAT_140f17b40 != (param_6 ^ (ulonglong)&stack0x00000000)) {
                    /* WARNING: Subroutine does not return */
    FUN_140188a00(param_6 ^ (ulonglong)&stack0x00000000);
  }
  return;
}

