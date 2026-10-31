/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 18021b5b1 */

void FUN_18021b5b1(longlong param_1,undefined8 param_2,undefined8 param_3)

{
  longlong lVar1;
  undefined1 uVar2;
  ulonglong uVar3;
  
  lVar1 = FUN_18021c62b(param_1,param_3);
  if ((lVar1 != 0) && (*(longlong *)(param_1 + 0x18) != 0)) {
    uVar3 = 0;
    do {
      uVar2 = FUN_18021a648(param_2);
      *(undefined1 *)(param_1 + 0x20 + uVar3) = uVar2;
      uVar3 = uVar3 + 1;
    } while (uVar3 < *(ulonglong *)(param_1 + 0x18));
  }
  return;
}

