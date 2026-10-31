/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 14046a050 */

undefined8 FUN_14046a050(longlong *param_1,longlong param_2)

{
  longlong lVar1;
  undefined8 *puVar2;
  wchar_t *pwVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  undefined1 local_a8 [8];
  longlong local_a0;
  undefined1 local_98;
  longlong local_90;
  undefined1 local_88;
  longlong local_80;
  undefined2 local_78;
  longlong local_70;
  undefined2 local_68;
  longlong local_60;
  undefined1 local_58;
  longlong local_50;
  undefined1 local_48;
  
  puVar4 = (undefined8 *)0x0;
  if ((param_1 != (longlong *)0x0) && (*param_1 == 0)) {
    puVar2 = (undefined8 *)FUN_14044ab00(0x10);
    puVar5 = puVar4;
    if (puVar2 != (undefined8 *)0x0) {
      lVar1 = *(longlong *)(param_2 + 8);
      if (lVar1 == 0) {
        pwVar3 = L"pNonPic";
      }
      else {
        pwVar3 = *(wchar_t **)(lVar1 + 0x28);
        if (pwVar3 == (wchar_t *)0x0) {
          pwVar3 = (wchar_t *)(lVar1 + 0x30);
        }
      }
      FUN_14044e710(local_a8,0);
      local_a0 = 0;
      local_98 = 0;
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
      if (pwVar3 == (wchar_t *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_14044acc0(L"ay");
      }
      FUN_14044e1c0(local_a8,pwVar3);
      puVar4 = (undefined8 *)0x1;
      *(undefined4 *)(puVar2 + 1) = 0;
      *puVar2 = &DAT_140538f08;
      puVar5 = puVar2;
    }
    *param_1 = (longlong)puVar5;
    if (puVar4 != (undefined8 *)0x0) {
      FUN_14044e280(local_a8);
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
      if (local_a0 != 0) {
        thunk_FUN_1404a2310();
      }
      local_a0 = 0;
      FUN_14044e760(local_a8);
    }
  }
  return 3;
}

