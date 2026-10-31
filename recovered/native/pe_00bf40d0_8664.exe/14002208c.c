/* Ghidra pseudocode. Image: pe_00bf40d0_8664.exe Address: 14002208c */

int FUN_14002208c(uint *param_1,longlong param_2)

{
  uint uVar1;
  longlong lVar2;
  undefined8 *puVar3;
  uint uVar4;
  longlong lVar5;
  longlong *plVar6;
  undefined1 auStackY_78 [32];
  int local_3c;
  ulonglong local_38;
  
  local_38 = DAT_14012ea80 ^ (ulonglong)auStackY_78;
  lVar2 = *(longlong *)(param_1 + 8);
  uVar1 = param_1[1];
  uVar4 = uVar1 * 2;
  param_1[1] = uVar4;
  *param_1 = uVar4 / 3;
  lVar5 = FUN_14001c617(param_2,8,0,uVar4,0,&local_3c);
  *(longlong *)(param_1 + 8) = lVar5;
  if (local_3c == 0) {
    if (uVar1 != 0) {
      lVar5 = 0;
      do {
        puVar3 = *(undefined8 **)(lVar2 + lVar5 * 8);
        if (puVar3 != (undefined8 *)0x0) {
          plVar6 = FUN_140021ff6(*puVar3,(longlong)param_1);
          *plVar6 = *(longlong *)(lVar2 + lVar5 * 8);
        }
        lVar5 = lVar5 + 1;
      } while (uVar1 != (uint)lVar5);
    }
    FUN_14001c53d(param_2,lVar2);
  }
  if (DAT_14012ea80 == (local_38 ^ (ulonglong)auStackY_78)) {
    return local_3c;
  }
                    /* WARNING: Subroutine does not return */
  FUN_140086440(local_38 ^ (ulonglong)auStackY_78);
}

