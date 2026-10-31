/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 1801cfc89 */

int FUN_1801cfc89(uint *param_1,undefined8 param_2)

{
  uint uVar1;
  longlong lVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  longlong lVar5;
  undefined1 auStack_78 [32];
  undefined8 local_58;
  int *local_50;
  int local_3c;
  ulonglong local_38;
  
  local_38 = DAT_180402640 ^ (ulonglong)auStack_78;
  lVar2 = *(longlong *)(param_1 + 8);
  uVar1 = param_1[1];
  param_1[1] = uVar1 * 2;
  *param_1 = (uVar1 * 2) / 3;
  local_50 = &local_3c;
  local_58 = 0;
  uVar3 = FUN_1801c9c3f(param_2,8,0);
  *(undefined8 *)(param_1 + 8) = uVar3;
  if (local_3c == 0) {
    if (uVar1 != 0) {
      lVar5 = 0;
      do {
        puVar4 = *(undefined8 **)(lVar2 + lVar5 * 8);
        if (puVar4 != (undefined8 *)0x0) {
          puVar4 = (undefined8 *)FUN_1801cfbf3(*puVar4,param_1);
          *puVar4 = *(undefined8 *)(lVar2 + lVar5 * 8);
        }
        lVar5 = lVar5 + 1;
      } while (uVar1 != (uint)lVar5);
    }
    FUN_1801c9b65(param_2,lVar2);
  }
  if (DAT_180402640 == (local_38 ^ (ulonglong)auStack_78)) {
    return local_3c;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1802396d0(local_38 ^ (ulonglong)auStack_78);
}

