/* Ghidra pseudocode. Image: pe_00bf40d0_8664.exe Address: 140081c88 */

undefined4 FUN_140081c88(longlong param_1,longlong *param_2)

{
  code *pcVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  undefined4 uVar5;
  
  *param_2 = 0;
  if (param_1 == 0) {
    uVar5 = 0x23;
  }
  else {
    uVar5 = 6;
    if ((*(byte *)(param_1 + 9) & 1) != 0) {
      lVar4 = *(longlong *)(param_1 + 0xd0);
      lVar2 = *(longlong *)(lVar4 + 0x28);
      if (lVar2 == -2) {
        lVar2 = 0;
      }
      else if (lVar2 == 0) {
        pcVar1 = *(code **)(**(longlong **)(param_1 + 0x90) + 0x30);
        if (pcVar1 == (code *)0x0) {
          lVar2 = 0;
        }
        else {
          lVar2 = (*pcVar1)(*(longlong **)(param_1 + 0x90),"multi-masters");
          lVar4 = *(longlong *)(param_1 + 0xd0);
        }
        lVar3 = -2;
        if (lVar2 != 0) {
          lVar3 = lVar2;
        }
        *(longlong *)(lVar4 + 0x28) = lVar3;
      }
      *param_2 = lVar2;
      uVar5 = 0;
      if (lVar2 == 0) {
        uVar5 = 6;
      }
    }
  }
  return uVar5;
}

