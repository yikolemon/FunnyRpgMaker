/* Ghidra pseudocode. Image: pe_00a0fad0_8664.exe Address: 140038682 */

void FUN_140038682(longlong param_1,longlong *param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong lVar3;
  longlong *plVar4;
  undefined1 local_a8 [64];
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  longlong local_48;
  longlong lStack_40;
  longlong local_38;
  undefined8 local_28;
  
  local_28 = 0xfffffffffffffffe;
  if ((*(char *)(param_1 + 0x48) == '\0') && (*(char *)(param_1 + 0x4a) == '\0')) {
    piVar2 = *(int **)(param_1 + 0x278);
    if (piVar2 != *(int **)(param_1 + 0x280)) {
      lVar3 = 0;
      do {
        lVar3 = lVar3 + (ulonglong)(*piVar2 != 1);
        piVar2 = piVar2 + 10;
      } while (piVar2 != *(int **)(param_1 + 0x280));
      if (lVar3 != 0) {
        FUN_140039be6(param_1,&local_48,0);
        if (param_2 != &local_48) {
          FUN_14000eeca(param_2);
          *param_2 = local_48;
          param_2[1] = lStack_40;
          param_2[2] = local_38;
          local_48 = 0;
          lStack_40 = 0;
          local_38 = 0;
        }
        FUN_14000eeca(&local_48);
        local_68 = 0;
        uStack_60 = 0;
        local_58 = 0;
        FUN_140020d68(&local_68,param_2[1] - *param_2 >> 5,param_2,param_2 + 1);
        FUN_140039d64(local_a8,param_1 + 8,&local_68);
                    /* WARNING: Subroutine does not return */
        FUN_140106270(local_a8,&DAT_14017a5c8);
      }
    }
  }
  plVar1 = *(longlong **)(param_1 + 0x308);
  for (plVar4 = *(longlong **)(param_1 + 0x300); plVar4 != plVar1; plVar4 = plVar4 + 2) {
    if (*(int *)(*plVar4 + 0x324) != 0) {
      FUN_140038682(*plVar4,param_2);
    }
  }
  return;
}

