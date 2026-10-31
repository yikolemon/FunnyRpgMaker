/* Ghidra pseudocode. Image: pe_00bf40d0_8664.exe Address: 14009d7f0 */

undefined4 FUN_14009d7f0(longlong param_1,ulonglong *param_2)

{
  longlong lVar1;
  ulonglong uVar2;
  uint uVar3;
  ulonglong uVar4;
  
  if (param_1 != 0) {
    uVar2 = param_2[1];
    lVar1 = uVar2 + (longlong)*(int *)(param_1 + 0x18);
    if (lVar1 != 0) {
      if (*(uint *)(param_1 + 0x14) != 0) {
        uVar4 = 0;
        do {
          if (*param_2 < (longlong)*(int *)(lVar1 + uVar4 * 8) + uVar2) break;
          uVar3 = (int)uVar4 + 1;
          uVar4 = (ulonglong)uVar3;
        } while (uVar3 < *(uint *)(param_1 + 0x14));
        if ((int)uVar4 != 0) {
          return *(undefined4 *)
                  (uVar2 + (ulonglong)((int)uVar4 - 1) * 8 + 4 + (longlong)*(int *)(param_1 + 0x18))
          ;
        }
      }
      return 0xffffffff;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_140096cf8();
}

