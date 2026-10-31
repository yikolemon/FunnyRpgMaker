/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 18028d4a0 */

undefined4 FUN_18028d4a0(longlong param_1,longlong param_2,ulonglong param_3)

{
  longlong lVar1;
  longlong lVar2;
  uint uVar3;
  ulonglong uVar4;
  
  if (param_1 != 0) {
    lVar2 = *(longlong *)(param_2 + 8);
    lVar1 = lVar2 + *(int *)(param_1 + 0x18);
    if (lVar1 != 0) {
      if (*(uint *)(param_1 + 0x14) != 0) {
        uVar4 = 0;
        do {
          if (param_3 < (ulonglong)(*(int *)(lVar1 + uVar4 * 8) + lVar2)) break;
          uVar3 = (int)uVar4 + 1;
          uVar4 = (ulonglong)uVar3;
        } while (uVar3 < *(uint *)(param_1 + 0x14));
        if ((int)uVar4 != 0) {
          return *(undefined4 *)
                  (lVar2 + (ulonglong)((int)uVar4 - 1) * 8 + 4 + (longlong)*(int *)(param_1 + 0x18))
          ;
        }
      }
      return 0xffffffff;
    }
  }
                    /* WARNING: Subroutine does not return */
  abort();
}

