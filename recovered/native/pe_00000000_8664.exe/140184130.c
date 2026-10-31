/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 140184130 */

void FUN_140184130(longlong param_1,longlong *param_2)

{
  code *pcVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  
  *param_2 = 0;
  if ((param_1 != 0) && ((*(byte *)(param_1 + 9) & 1) != 0)) {
    lVar4 = *(longlong *)(param_1 + 0xd0);
    lVar2 = *(longlong *)(lVar4 + 0x30);
    if (lVar2 == -2) {
      lVar2 = 0;
    }
    else if (lVar2 == 0) {
      pcVar1 = *(code **)(**(longlong **)(param_1 + 0x90) + 0x30);
      if (pcVar1 == (code *)0x0) {
        lVar2 = 0;
      }
      else {
        lVar2 = (*pcVar1)(*(longlong **)(param_1 + 0x90),"metrics-variations");
        lVar4 = *(longlong *)(param_1 + 0xd0);
      }
      lVar3 = -2;
      if (lVar2 != 0) {
        lVar3 = lVar2;
      }
      *(longlong *)(lVar4 + 0x30) = lVar3;
    }
    *param_2 = lVar2;
  }
  return;
}

