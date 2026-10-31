/* Ghidra pseudocode. Image: pe_00a0fad0_8664.exe Address: 1400c6dc0 */

void FUN_1400c6dc0(longlong param_1,undefined8 param_2)

{
  undefined8 uVar1;
  ulonglong uVar2;
  longlong lVar3;
  longlong lVar4;
  
  lVar4 = *(longlong *)(param_1 + 0xb0);
  if (*(longlong *)(param_1 + 0xb8) != lVar4) {
    uVar2 = 0;
    lVar3 = 0;
    do {
      uVar1 = FUN_140098870(param_2,"events");
      uVar1 = FUN_1400706a4(uVar1,uVar2);
      FUN_1400ca1dc(lVar4 + lVar3,uVar1);
      uVar2 = uVar2 + 1;
      lVar4 = *(longlong *)(param_1 + 0xb0);
      lVar3 = lVar3 + 0x80;
    } while (uVar2 < (ulonglong)(*(longlong *)(param_1 + 0xb8) - lVar4 >> 7));
  }
  return;
}

