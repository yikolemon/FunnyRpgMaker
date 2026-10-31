/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 10195c1e */

void __fastcall FUN_10195c1e(uint param_1,int param_2)

{
  uint uVar1;
  int iVar2;
  
  uVar1 = DAT_103a3264 + param_2;
  if (uVar1 <= DAT_103a325c) {
    if (param_1 < DAT_103a3260) {
      uVar1 = DAT_103a325c + 1;
    }
    else {
      iVar2 = 0;
      do {
        *(undefined1 *)(DAT_103a3264 + iVar2) = *(undefined1 *)(param_1 + iVar2);
        iVar2 = iVar2 + 1;
      } while (param_2 != iVar2);
      uVar1 = DAT_103a3264 + iVar2;
    }
  }
  DAT_103a3264 = uVar1;
  return;
}

