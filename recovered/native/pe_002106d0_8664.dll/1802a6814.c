/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 1802a6814 */

void FUN_1802a6814(int param_1,undefined2 *param_2,int param_3)

{
  int iVar1;
  undefined4 *puVar2;
  longlong lVar3;
  short sVar4;
  undefined1 auStack_98 [32];
  short *local_78;
  undefined2 *local_70;
  longlong local_68;
  undefined2 *local_60;
  longlong local_58;
  undefined8 local_50;
  char local_48;
  short local_40 [4];
  ulonglong local_38;
  
  local_38 = DAT_180402640 ^ (ulonglong)auStack_98;
  lVar3 = (longlong)param_3;
  sVar4 = (short)param_1;
  if (param_3 < 0) {
LAB_1802a683f:
    puVar2 = (undefined4 *)FUN_18027e66c();
    *puVar2 = 0x16;
  }
  else {
    if (param_1 == 0) {
      iVar1 = FUN_180298774();
      sVar4 = (short)iVar1;
      if (iVar1 == 0) {
        local_40[0] = 0x2e;
        local_40[1] = 0;
      }
      else {
LAB_1802a6886:
        local_40[0] = sVar4 + 0x40;
        local_40[1] = 0x3a;
        local_40[2] = 0x2e;
        local_40[3] = 0;
      }
      if (param_2 == (undefined2 *)0x0) {
        local_70 = (undefined2 *)0x0;
        local_68 = 0;
        local_50 = 0;
        local_60 = (undefined2 *)_malloc_base(lVar3 * 2);
        local_48 = local_60 != (undefined2 *)0x0;
        local_58 = lVar3;
        if (!(bool)local_48) {
          local_58 = 0;
        }
        local_78 = local_40;
        iVar1 = FUN_180298a78(&local_70,&local_78);
        if (iVar1 == 0) {
          FUN_180298920(&local_70);
          if (local_48 != '\0') {
            thunk_FUN_180290e40(local_60);
          }
        }
        else if (local_48 != '\0') {
          thunk_FUN_180290e40(local_60);
        }
        goto LAB_1802a6969;
      }
      if (0 < param_3) {
        *param_2 = 0;
        local_78 = local_40;
        local_50 = 0;
        local_48 = '\0';
        local_70 = param_2;
        local_68 = lVar3;
        local_60 = param_2;
        local_58 = lVar3;
        FUN_180298a04(&local_70,&local_78);
        goto LAB_1802a6969;
      }
      goto LAB_1802a683f;
    }
    iVar1 = FUN_1802a6790();
    if (iVar1 != 0) goto LAB_1802a6886;
    puVar2 = (undefined4 *)FUN_18027e690();
    *puVar2 = 0xf;
    puVar2 = (undefined4 *)FUN_18027e66c();
    *puVar2 = 0xd;
  }
  FUN_180290a50();
LAB_1802a6969:
                    /* WARNING: Subroutine does not return */
  FUN_1802396d0(local_38 ^ (ulonglong)auStack_98);
}

