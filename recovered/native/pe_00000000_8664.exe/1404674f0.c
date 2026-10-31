/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 1404674f0 */

undefined8 FUN_1404674f0(longlong *param_1,longlong param_2)

{
  longlong lVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  wchar_t *pwVar4;
  undefined8 *puVar5;
  undefined1 local_98 [8];
  longlong local_90;
  undefined1 local_88;
  longlong local_80;
  undefined1 local_78;
  longlong local_70;
  undefined2 local_68;
  longlong local_60;
  undefined2 local_58;
  longlong local_50;
  undefined1 local_48;
  longlong local_40;
  undefined1 local_38;
  
  puVar3 = (undefined8 *)0x0;
  if ((param_1 != (longlong *)0x0) && (*param_1 == 0)) {
    puVar2 = (undefined8 *)FUN_14044ab00(0x30);
    puVar5 = puVar3;
    if (puVar2 != (undefined8 *)0x0) {
      lVar1 = *(longlong *)(param_2 + 8);
      if (lVar1 == 0) {
        pwVar4 = L"pNonPic";
      }
      else {
        pwVar4 = *(wchar_t **)(lVar1 + 0x28);
        if (pwVar4 == (wchar_t *)0x0) {
          pwVar4 = (wchar_t *)(lVar1 + 0x30);
        }
      }
      FUN_14044e710(local_98,0);
      local_90 = 0;
      local_88 = 0;
      local_80 = 0;
      local_78 = 0;
      local_70 = 0;
      local_68 = 0;
      local_60 = 0;
      local_58 = 0;
      local_50 = 0;
      local_48 = 0;
      local_40 = 0;
      local_38 = 0;
      if (pwVar4 == (wchar_t *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_14044acc0(L"ay");
      }
      FUN_14044e1c0(local_98,pwVar4);
      *(undefined4 *)(puVar2 + 1) = 0;
      *puVar2 = &DAT_140538e20;
      FUN_1404676a0(puVar2,local_98,1);
      puVar3 = puVar2;
      puVar5 = (undefined8 *)0x1;
    }
    *param_1 = (longlong)puVar3;
    if (puVar5 != (undefined8 *)0x0) {
      FUN_14044e280(local_98);
      if (local_40 != 0) {
        thunk_FUN_1404a2310();
      }
      local_40 = 0;
      if (local_50 != 0) {
        thunk_FUN_1404a2310();
      }
      local_50 = 0;
      if (local_60 != 0) {
        thunk_FUN_1404a2310();
      }
      local_60 = 0;
      if (local_70 != 0) {
        thunk_FUN_1404a2310();
      }
      local_70 = 0;
      if (local_80 != 0) {
        thunk_FUN_1404a2310();
      }
      local_80 = 0;
      if (local_90 != 0) {
        thunk_FUN_1404a2310();
      }
      local_90 = 0;
      FUN_14044e760(local_98);
    }
  }
  return 4;
}

