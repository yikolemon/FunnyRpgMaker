/* Ghidra pseudocode. Image: pe_00a0fad0_8664.exe Address: 1400808b6 */

undefined8 * FUN_1400808b6(longlong param_1,undefined8 *param_2)

{
  undefined1 *puVar1;
  undefined8 uVar2;
  undefined1 *puVar3;
  undefined1 *puVar4;
  undefined1 local_158 [16];
  undefined1 local_148 [240];
  undefined1 local_58 [32];
  undefined1 *local_38;
  undefined1 *puStack_30;
  undefined1 *local_28;
  undefined8 local_20;
  
  local_20 = 0xfffffffffffffffe;
  if (*(longlong *)(param_1 + 0x90) == 0) {
    *param_2 = 0;
    param_2[1] = 0;
    param_2[2] = 0;
  }
  else {
    FUN_140080aaa(param_1,&local_38,param_1 + 0x80);
    if (local_38 == puStack_30) {
      uVar2 = FUN_1400554d2();
      FUN_14000169c(local_58,"dxarc_key_error_msg");
      uVar2 = FUN_1400aebe4(uVar2,local_58);
      FUN_140052d74(local_158,&DAT_1401cc978,uVar2);
      FUN_140052e4f(local_148);
      FUN_140052e84(local_158);
      FUN_1400017de(local_58);
      *param_2 = 0;
      param_2[1] = 0;
      param_2[2] = 0;
    }
    else {
      puVar3 = local_38;
      puVar4 = puStack_30;
      if ((*(int *)(param_1 + 0xa4) == 1) && (puStack_30[-1] != '\0')) {
        local_158[0] = 0;
        if (puStack_30 == local_28) {
          FUN_1400660b8(&local_38,puStack_30,local_158);
          puVar3 = local_38;
          puVar4 = puStack_30;
        }
        else {
          *puStack_30 = 0;
          puVar4 = puStack_30 + 1;
        }
      }
      puVar1 = local_28;
      local_38 = (undefined1 *)0x0;
      puStack_30 = (undefined1 *)0x0;
      local_28 = (undefined1 *)0x0;
      *param_2 = puVar3;
      param_2[1] = puVar4;
      param_2[2] = puVar1;
    }
    FUN_140016e5c(&local_38);
  }
  return param_2;
}

